// Função tecla 7
// Piscar o LED vermelho 5 vezes lentamente.

#include "functions.h"

void Tecla7(){

gpio_put(LED_VERMELHO,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LED_VERMELHO,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LED_VERMELHO,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LED_VERMELHO,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LED_VERMELHO,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LED_VERMELHO,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LED_VERMELHO,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LED_VERMELHO,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LED_VERMELHO,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LED_VERMELHO,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado

}

