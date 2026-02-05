#include "board.h"
#include "qcc74x_i2c.h"
#include "qcc74x_mtimer.h"
#include <stdint.h>

/* ---------- OLED CONFIG ---------- */
#define OLED_ADDR 0x3C
static struct qcc74x_device_s *i2c0;

/* ---------- BASIC 5x7 FONT (ASCII 32–127) ---------- */
const uint8_t font5x7[][5] = {
    {0x00,0x00,0x00,0x00,0x00}, // space
    {0x00,0x00,0x5F,0x00,0x00}, // !
    {0x00,0x07,0x00,0x07,0x00}, // "
    {0x14,0x7F,0x14,0x7F,0x14}, // #
    {0x24,0x2A,0x7F,0x2A,0x12}, // $
    {0x23,0x13,0x08,0x64,0x62}, // %
    {0x36,0x49,0x55,0x22,0x50}, // &
    {0x00,0x05,0x03,0x00,0x00}, // '
    {0x00,0x1C,0x22,0x41,0x00}, // (
    {0x00,0x41,0x22,0x1C,0x00}, // )
    {0x14,0x08,0x3E,0x08,0x14}, // *
    {0x08,0x08,0x3E,0x08,0x08}, // +
    {0x00,0x50,0x30,0x00,0x00}, // ,
    {0x08,0x08,0x08,0x08,0x08}, // -
    {0x00,0x60,0x60,0x00,0x00}, // .
    {0x20,0x10,0x08,0x04,0x02}, // /
};

/* ---------- LOW LEVEL I2C ---------- */
void oled_write(uint8_t ctrl, uint8_t data)
{
    uint8_t buf[2] = { ctrl, data };

    struct qcc74x_i2c_msg_s msg = {
        .addr   = OLED_ADDR,
        .flags  = 0,
        .length = 2,
        .buffer = buf,
    };

    qcc74x_i2c_transfer(i2c0, &msg, 1);
}

void oled_cmd(uint8_t c)  { oled_write(0x00, c); }
void oled_data(uint8_t d){ oled_write(0x40, d); }

/* ---------- OLED INIT ---------- */
void oled_init(void)
{
    qcc74x_mtimer_delay_ms(200);

    oled_cmd(0xAE);
    oled_cmd(0xD5); oled_cmd(0x80);
    oled_cmd(0xA8); oled_cmd(0x3F);
    oled_cmd(0xD3); oled_cmd(0x00);
    oled_cmd(0x40);
    oled_cmd(0xA1);
    oled_cmd(0xC8);
    oled_cmd(0xDA); oled_cmd(0x12);
    oled_cmd(0x81); oled_cmd(0x7F);
    oled_cmd(0xA4);
    oled_cmd(0xA6);
    oled_cmd(0x8D); oled_cmd(0x14);
    oled_cmd(0xAF);
}

/* ---------- CLEAR ---------- */
void oled_clear(void)
{
    for (int page = 0; page < 8; page++) {
        oled_cmd(0xB0 + page);
        oled_cmd(0x00);
        oled_cmd(0x10);
        for (int i = 0; i < 128; i++)
            oled_data(0x00);
    }
}

/* ---------- CURSOR ---------- */
void oled_set_cursor(uint8_t row, uint8_t col)
{
    oled_cmd(0xB0 + row);
    oled_cmd(0x00 + (col & 0x0F));
    oled_cmd(0x10 + (col >> 4));
}

/* ---------- PRINT ---------- */
void oled_print(const char *s)
{
    while (*s) {
        char c = *s++;
        if (c < 32 || c > 127) c = '?';

        for (int i = 0; i < 5; i++)
            oled_data(font5x7[c - 32][i]);

        oled_data(0x00); // space
    }
}

/* ---------- MAIN ---------- */
int main(void)
{
    board_init();
    board_i2c0_gpio_init();   // GPIO 11 SDA, GPIO 14 SCL

    i2c0 = qcc74x_device_get_by_name("i2c0");
    qcc74x_i2c_init(i2c0, 400000);

    oled_init();
    oled_clear();

    oled_set_cursor(1, 20);
    oled_print("Hiii");

    oled_set_cursor(3, 20);
    oled_print("Kalyani");

    while (1);
}

