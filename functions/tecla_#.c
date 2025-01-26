// tecla_#.c
#include "functions.h"

// Definição da função para a tecla #
void teclaHash() {
    gpio_put(LED_VERDE, 1);    // Aciona o LED verde
    gpio_put(LED_AZUL, 1);     // Aciona o LED azul
    gpio_put(LED_VERMELHO, 1); // Aciona o LED vermelho
    gpio_put(BUZZER, 1);   // Aciona o buzzer
    sleep_ms(2000);             // Aguarda 2 segundos

    // Desliga todos os LEDs e o buzzer
    gpio_put(LED_VERDE, 0);
    gpio_put(LED_AZUL, 0);
    gpio_put(LED_VERMELHO, 0);
    gpio_put(BUZZER, 0);
}