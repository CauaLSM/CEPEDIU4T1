#include <stdio.h>
#include "pico/stdlib.h"

#include "U4T1.h"

void initGpio() {
    gpio_init(LED_AZUL);
    gpio_init(LED_VERDE);
    gpio_init(LED_VERMELHO);
    // gpio_init(BUZZER);

    gpio_set_dir(LED_AZUL, GPIO_OUT);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
}

void initBuzzerPwm() {
  gpio_set_function(BUZZER, GPIO_FUNC_PWM);
  uint slice_num = pwm_gpio_to_slice_num(BUZZER);

  // Mask our slice's IRQ output into the PWM block's single interrupt line,
  // and register our interrupt handler
  pwm_clear_irq(slice_num);
  pwm_set_irq_enabled(slice_num, true);

  // Get some sensible defaults for the slice configuration. By default, the
  // counter is allowed to wrap over its maximum range (0 to 2**16-1)
  pwm_config config = pwm_get_default_config();
  // Set divider, reduces counter clock to sysclock/this value
  pwm_config_set_clkdiv(&config, 4.f);
  // Load the configuration into our PWM slice, and set it running.
  pwm_init(slice_num, &config, true);
}


int main()
{
    stdio_init_all();

    initGpio();
    initKeypad();

    initBuzzerPwm();

    while (true) {
        char key = getKey();

        switch(key) {
            case '3':
                tecla3();
                break;
            case '5':
                tecla5();
                break;
            case '7':
                Tecla7();
                break;
            case '8':
                Tecla8();
                break;

            default:
                break;
        }

        sleep_ms(100);
    }
}
