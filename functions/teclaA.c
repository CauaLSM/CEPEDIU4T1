#include "functions.h"

void teclaA(){
    gpio_put(LED_VERDE,1); 
    gpio_put(LED_AZUL,1);
    gpio_put(LED_VERMELHO,1);
    sleep_ms(2000);
    gpio_put(LED_VERDE,0);
    gpio_put(LED_AZUL,0);
    gpio_put(LED_VERMELHO,0);
}