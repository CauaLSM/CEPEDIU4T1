// tecla_0.c
#include "functions.h"

// Definição das funções para os LEDs
void tecla0() {
    gpio_put(LED_VERDE, 1);  // Aciona o LED verde
    sleep_ms(500);            // Aguarda 500ms
    gpio_put(LED_VERDE, 0);  // Desliga o LED verde
    
    gpio_put(LED_AZUL, 1);   // Aciona o LED azul
    sleep_ms(500);            // Aguarda 500ms
    gpio_put(LED_AZUL, 0);   // Desliga o LED azul
    
    gpio_put(LED_VERMELHO, 1); // Aciona o LED vermelho
    sleep_ms(500);             // Aguarda 500ms
    gpio_put(LED_VERMELHO, 0); // Desliga o LED vermelho
}
