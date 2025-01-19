#include "functions.h"

void teclaB(){
    gpio_put(LED_VERDE,1); 
    gpio_put(LED_AZUL,1);
    gpio_put(LED_VERMELHO,1);
}