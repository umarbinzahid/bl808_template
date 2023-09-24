#include "bflb_mtimer.h"
#include "board.h"
#include "bflb_gpio.h"

struct bflb_device_s *gpio;

int main(void)
{
    board_init();
    gpio = bflb_device_get_by_name("gpio");
    bflb_gpio_init(gpio, GPIO_PIN_8, GPIO_OUTPUT | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_0);
    while (1) {

        bflb_gpio_set(gpio, GPIO_PIN_8);
        printf("LED ON\r\n");
        bflb_mtimer_delay_ms(1000);
        bflb_gpio_reset(gpio, GPIO_PIN_8);
        bflb_mtimer_delay_ms(1000);
        printf("LED OFF\r\n");
    }
}
