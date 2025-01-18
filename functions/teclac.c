#include "functions.h"

void teclac(){
    gpio_put(LED_VERMELHO,0);
    gpio_put(LED_VERDE, 0);
    gpio_put(LED_AZUL,0);
    pwm_set_gpio_level(BUZZER,0);
    sleep_ms(1000);
}
