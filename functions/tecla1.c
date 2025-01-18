#include "functions.h"

void Tecla1() {
  gpio_put(LED_VERMELHO, 1);
  gpio_put(LED_VERDE, 1); //teste
  sleep_ms(3000);
  gpio_put(LED_VERMELHO, 0);
  gpio_put(LED_VERDE, 0);
}
