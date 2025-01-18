#include "functions.h"

void tecla_asterisco(){
    gpio_put(LED_VERMELHO,1);
    sleep_ms(1000);
    pwm_set_gpio_level(BUZZER,1000);
    sleep_ms(6000);
    pwm_set_gpio_level(BUZZER,0);
    gpio_put(LED_VERMELHO,0);

}