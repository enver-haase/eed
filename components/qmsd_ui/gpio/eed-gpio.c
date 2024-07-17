#include "eed-gpio.h"

void configure_gpio(void) {
    gpio_config_t io_conf;
    // Configure the selected GPIO pin as output
    io_conf.intr_type = GPIO_INTR_DISABLE;       // Disable interrupt
    io_conf.mode = GPIO_MODE_OUTPUT;             // Set as output mode
    io_conf.pin_bit_mask = (1ULL << GPIO_OUTPUT_PIN); // Bit mask of the pins to configure
    io_conf.pull_down_en = 0;                    // Disable pull-down mode
    io_conf.pull_up_en = 0;                      // Disable pull-up mode
    gpio_config(&io_conf);                       // Apply the configuration
}
