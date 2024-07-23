#include "eed-lsio.h"
#include "aw9523.h"

void configure_lsio(void) {
    // Initialize the AW9523 driver
    aw9523_init(48, 47);

    aw9523_set_inout(AW9523_PORT_0, AW9523_MODE_OUTPUT);
    aw9523_set_gpio_or_led(AW9523_PORT_0, AW9523_MODE_GPIO);
    for (int i=0; i < 8; i++) {
        aw9523_io_set_level(AW9523_PORT_0, i, i%2);
    }
}
