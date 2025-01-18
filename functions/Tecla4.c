// Função Tecla 4 

#include "functions.h"

void Tecla4() {
    gpio_put(LED_AZUL,1); // Liga led azul
     sleep_ms(5000); // tempo de 5 segundos aceso
    gpio_put(LED_AZUL,0); // Desliga Led azul
}