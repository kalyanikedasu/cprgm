#include <stdio.h>
#include <stdint.h>
#include "board.h"
#include "qcc74x_spi.h"
#include "qcc74x_gpio.h"
#include "qcc74x_mtimer.h"

#define DHT11_PIN GPIO_PIN_1

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

void dht11_read(uint8_t *temp, uint8_t *hum)
{
    *temp = 27;   // demo
    *hum  = 60;   // demo
}


int main(void)
{
    board_init();
    spi_pin_init();


    spi0 = qcc74x_device_get_by_name("spi0");

    struct qcc74x_spi_config_s cfg = {
        .freq = 1000000,
        .role = SPI_ROLE_MASTER,
        .mode = SPI_MODE3,
        .data_width = SPI_DATA_WIDTH_8BIT
    };

    qcc74x_spi_init(spi0, &cfg);

    printf("SPI MASTER + DHT11 READY\r\n");

    uint8_t tx[4];
    uint8_t rx[4];

    while (1) {
        uint8_t temp, hum;
        dht11_read(&temp, &hum);

        tx[0] = temp;
        tx[1] = hum;
        tx[2] = temp + hum; // checksum
        tx[3] = 0xAA;

        qcc74x_spi_poll_exchange(spi0, tx, rx, 4);

        printf("Sent Temp=%d Hum=%d\r\n", temp, hum);

        qcc74x_mtimer_delay_ms(2000);
    }
}
