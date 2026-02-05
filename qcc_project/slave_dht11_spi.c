#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "board.h"
#include "qcc74x_spi.h"
#include "qcc74x_gpio.h"
#include "qcc74x_mtimer.h"

#define SPI_CS_PIN      GPIO_PIN_12
#define SPI_SCK_PIN     GPIO_PIN_13
#define SPI_MISO_PIN    GPIO_PIN_14
#define SPI_MOSI_PIN    GPIO_PIN_15

static struct qcc74x_device_s *spi0;

void spi_pin_init(void)
{
    struct qcc74x_device_s *gpio = qcc74x_device_get_by_name("gpio");

    qcc74x_gpio_init(gpio, SPI_CS_PIN,   GPIO_FUNC_SPI0 | GPIO_ALTERNATE);
    qcc74x_gpio_init(gpio, SPI_SCK_PIN,  GPIO_FUNC_SPI0 | GPIO_ALTERNATE);
    qcc74x_gpio_init(gpio, SPI_MISO_PIN, GPIO_FUNC_SPI0 | GPIO_ALTERNATE);
    qcc74x_gpio_init(gpio, SPI_MOSI_PIN, GPIO_FUNC_SPI0 | GPIO_ALTERNATE);
}

int main(void)
{
    board_init();
    spi_pin_init();

    spi0 = qcc74x_device_get_by_name("spi0");

    struct qcc74x_spi_config_s cfg = {
        .freq = 1000000,               // ignored in slave
        .role = SPI_ROLE_SLAVE,
        .mode = SPI_MODE3,
        .data_width = SPI_DATA_WIDTH_8BIT
    };

    qcc74x_spi_init(spi0, &cfg);

    qcc74x_mtimer_delay_ms(100);   // allow SPI to stabilize

    printf("SPI SLAVE READY (Temp & Humidity)\r\n");

    uint8_t rx[4];
    uint8_t tx[4] = {0};

    while (1) {
        memset(rx, 0, sizeof(rx));

        qcc74x_spi_poll_exchange(spi0, tx, rx, 4);

        if (rx[3] == 0xAA && (uint8_t)(rx[0] + rx[1]) == rx[2]) {
            printf("Temperature = %d C | Humidity = %d %%\r\n",
                   rx[0], rx[1]);
        }
    }
}

