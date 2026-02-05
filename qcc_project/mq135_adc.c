#include "qcc74x_adc.h"
#include "qcc74x_mtimer.h"
#include "qcc74x_gpio.h"
#include "board.h"

 MQ135 is connected to GPIO 1 (ADC Channel 1) 
#define MQ135_ADC_CHANNEL ADC_CHANNEL_1
#define TEST_COUNT 10

static struct qcc74x_adc_channel_s chan[1] = {
    { .pos_chan = MQ135_ADC_CHANNEL,
      .neg_chan = ADC_CHANNEL_GND }
};

static struct qcc74x_device_s *adc;

void read_mq135(void)
{i
    struct qcc74x_adc_result_s result;
    uint32_t raw_sum = 0;
    uint32_t final_raw;

     1. Initialize GPIO 1 for Analog Function 
    struct qcc74x_device_s *gpio;
    gpio = qcc74x_device_get_by_name("gpio");
    qcc74x_gpio_init(gpio, GPIO_PIN_1, GPIO_ANALOG | GPIO_FLOAT);

    adc = qcc74x_device_get_by_name("adc");

     2. Configure ADC: 16-bit resolution, 3.2V Reference 
    struct qcc74x_adc_config_s cfg;
    cfg.clk_div = ADC_CLK_DIV_32;
    cfg.scan_conv_mode = false;
    cfg.continuous_conv_mode = true;
    cfg.differential_mode = false;
    cfg.resolution = ADC_RESOLUTION_16B;
    cfg.vref = ADC_VREF_3P2V;

    qcc74x_adc_init(adc, &cfg);
    qcc74x_adc_channel_config(adc, chan, 1);
    qcc74x_adc_start_conversion(adc);

     3. Sampling Loop with Noise Filtering 
    for (uint16_t i = 0; i < TEST_COUNT; i++) {
        while (qcc74x_adc_get_count(adc) == 0) {
            qcc74x_mtimer_delay_ms(1);
        }

        uint32_t val = qcc74x_adc_read_raw(adc);
        if (i >= 5) { // Drop first 5 samples, average last 5
            raw_sum += val;
        }
    }

    final_raw = raw_sum / 5;
    qcc74x_adc_stop_conversion(adc);

     4. Convert Raw Data to Millivolts 
    qcc74x_adc_parse_result(adc, &final_raw, &result, 1);

     5. Print Results to Serial (Minicom) 
    printf("\r\n--- MQ135 Gas Sensor ---\r\n");
    printf("Raw ADC: %lu\r\n", (unsigned long)final_raw);
    printf("Voltage: %d mV\r\n", result.millivolt);

    if (result.millivolt < 400) {
        printf("Status: Heating up / Clean Air\r\n");
    } else if (result.millivolt > 2000) {
        printf("Status: [!] GAS DETECTED [!]\r\n");
    } else {
        printf("Status: Normal\r\n");
    }

    qcc74x_adc_deinit(adc);
}

int main(void)
{
    board_init();
    
    printf("MQ135 Gas Sensor Test Starting...\r\n");

    while (1) {
        read_mq135();
        qcc74x_mtimer_delay_ms(2000); // Check every 2 seconds
    }
}
