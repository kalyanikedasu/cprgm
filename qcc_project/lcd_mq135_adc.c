#include <stdio.h>
#include "board.h"
#include "qcc74x_adc.h"
#include "qcc74x_gpio.h"
#include "qcc74x_i2c.h"
#include "qcc74x_mtimer.h"

/* ---------------- MQ135 ---------------- */
#define MQ135_ADC_CHANNEL ADC_CHANNEL_1
#define SAMPLE_COUNT      10

/* ---------------- LCD I2C ---------------- */
#define LCD_ADDR        0x27   // try 0x3F if not visible
#define LCD_BACKLIGHT   0x08
#define LCD_ENABLE      0x04
#define LCD_RS          0x01

static struct qcc74x_device_s *adc;
static struct qcc74x_device_s *gpio;
static struct qcc74x_device_s *i2c0;

/* ---------------- BASELINE ---------------- */
static uint32_t baseline_mv = 0;
static uint8_t baseline_set = 0;

/* ---------------- LCD FUNCTIONS ---------------- */

void lcd_i2c_write(uint8_t data)
{
    struct qcc74x_i2c_msg_s msg = {
        .addr = LCD_ADDR,
        .flags = 0,
        .buffer = &data,
        .length = 1
    };
    qcc74x_i2c_transfer(i2c0, &msg, 1);
}

void lcd_pulse(uint8_t data)
{
    lcd_i2c_write(data | LCD_ENABLE);
    qcc74x_mtimer_delay_ms(1);
    lcd_i2c_write(data & ~LCD_ENABLE);
    qcc74x_mtimer_delay_ms(1);
}

void lcd_send_nibble(uint8_t nibble, uint8_t rs)
{
    uint8_t data = (nibble << 4) | LCD_BACKLIGHT;
    if (rs) data |= LCD_RS;
    lcd_pulse(data);
}

void lcd_send_byte(uint8_t byte, uint8_t rs)
{
    lcd_send_nibble(byte >> 4, rs);
    lcd_send_nibble(byte & 0x0F, rs);
}

void lcd_cmd(uint8_t cmd)
{
    lcd_send_byte(cmd, 0);
    qcc74x_mtimer_delay_ms(2);
}

void lcd_data(uint8_t data)
{
    lcd_send_byte(data, 1);
}

void lcd_print(char *str)
{
    while (*str)
        lcd_data(*str++);
}

void lcd_init(void)
{
    qcc74x_mtimer_delay_ms(50);
    lcd_send_nibble(0x03, 0);
    lcd_send_nibble(0x03, 0);
    lcd_send_nibble(0x03, 0);
    lcd_send_nibble(0x02, 0);

    lcd_cmd(0x28);   // 4-bit, 2-line
    lcd_cmd(0x0C);   // Display ON
    lcd_cmd(0x06);
    lcd_cmd(0x01);
}

/* ---------------- MQ135 ADC READ ---------------- */

uint32_t mq135_read_mv(void)
{
    struct qcc74x_adc_result_s result;
    uint32_t sum = 0;

    for (int i = 0; i < SAMPLE_COUNT; i++) {
        while (qcc74x_adc_get_count(adc) == 0)
            qcc74x_mtimer_delay_ms(1);

        uint32_t raw = qcc74x_adc_read_raw(adc);
        if (i >= 5) sum += raw;
    }

    uint32_t avg = sum / 5;
    qcc74x_adc_parse_result(adc, &avg, &result, 1);
    return result.millivolt;
}

/* ---------------- AIR QUALITY LOGIC ---------------- */

uint8_t gas_percent(int32_t delta)
{
    if (delta < 50)        return (delta * 20) / 50;
    else if (delta < 200)  return 20 + ((delta - 50) * 40) / 150;
    else                   return 60 + ((delta - 200) * 40) / 800;
}

char *air_quality(int32_t delta)
{
    if (delta < 50)        return "SAFE  ";
    else if (delta < 200)  return "NORMAL";
    else                   return "DANGER";
}

/* ---------------- MAIN ---------------- */

int main(void)
{
    board_init();

    /* MQ135 GPIO */
    gpio = qcc74x_device_get_by_name("gpio");
    qcc74x_gpio_init(gpio, GPIO_PIN_1, GPIO_ANALOG | GPIO_FLOAT);

    /* ADC */
    adc = qcc74x_device_get_by_name("adc");

    struct qcc74x_adc_channel_s chan = {
        .pos_chan = MQ135_ADC_CHANNEL,
        .neg_chan = ADC_CHANNEL_GND
    };

    struct qcc74x_adc_config_s cfg = {
        .clk_div = ADC_CLK_DIV_32,
        .scan_conv_mode = false,
        .continuous_conv_mode = true,
        .differential_mode = false,
        .resolution = ADC_RESOLUTION_16B,
        .vref = ADC_VREF_3P2V
    };

    qcc74x_adc_init(adc, &cfg);
    qcc74x_adc_channel_config(adc, &chan, 1);
    qcc74x_adc_start_conversion(adc);

    /* LCD */
    board_i2c0_gpio_init();
    i2c0 = qcc74x_device_get_by_name("i2c0");
    lcd_init();

    while (1) {
        uint32_t mv = mq135_read_mv();

        /* Set baseline once */
        if (!baseline_set) {
            baseline_mv = mv;
            baseline_set = 1;

            lcd_cmd(0x01);
            lcd_print("Calibrating");
            lcd_cmd(0xC0);
            lcd_print("Baseline...");
            qcc74x_mtimer_delay_ms(2000);
            continue;
        }

        int32_t delta = (int32_t)mv - (int32_t)baseline_mv;
        if (delta < 0) delta = 0;

        uint8_t pct = gas_percent(delta);

        lcd_cmd(0x01);
        lcd_print("Air Quality:");

        lcd_cmd(0xC0);
        char buf[16];
        sprintf(buf, "%s %3d%%", air_quality(delta), pct);
        lcd_print(buf);

        qcc74x_mtimer_delay_ms(1000);
    }
}

