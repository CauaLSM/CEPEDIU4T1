// Ligar leds alternadamente
#include "function.h"

void teclaD() {
int Q=1;
while (Q<=1, Q--) {
gpio_put(LED_VERDE, 1);
gpio_put(LED_AZUL, 0);
gpio_put(LED_VERMELHO, 0);
sleep_ms(500); 

gpio_put(LED_VERDE, 0);
gpio_put(LED_AZUL, 1);
sleep_ms(500);

gpio_put(LED_AZUL, 0);
gpio_put(LED_VERMELHO, 1);
sleep_ms(500); 

gpio_put(LED_VERDE, 1);
gpio_put(LED_AZUL, 1);
gpio_put(LED_VERMELHO, 0);
sleep_ms(500); 

gpio_put(LED_VERDE, 0);
gpio_put(LED_AZUL, 1);
gpio_put(LED_VERMELHO, 1);
sleep_ms(500); 

gpio_put(LED_VERDE, 1);
gpio_put(LED_AZUL, 0);
gpio_put(LED_VERMELHO, 1);
sleep_ms(500);

gpio_put(LED_VERDE, 1);
gpio_put(LED_AZUL, 1);
gpio_put(LED_VERMELHO, 1);
sleep_ms(500); 

gpio_put(LED_VERDE, 0);
gpio_put(LED_AZUL, 0);
gpio_put(LED_VERMELHO, 0); }
sleep_ms(500); }


