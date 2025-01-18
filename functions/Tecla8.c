// Função tecla 8
// Alternar o LED azul (liga/desliga).

#include "functions.h"

void Tecla8(){

gpio_put(LED_AZUL,1); // Liga led azul
sleep_ms(2000); // tempo de 2 segundos aceso
gpio_put(LED_AZUL,0); // desliga led azull
sleep_ms(1000); // tempo de 1 segundos aceso


}