#include "functions.h"

void tecla3() {
  gpio_put(LED_VERMELHO, true);
  sleep_ms(500);
  gpio_put(LED_VERMELHO, false);

  gpio_put(LED_VERDE, true);
  sleep_ms(500);
  gpio_put(LED_VERDE, false);

  gpio_put(LED_AZUL, true);
  sleep_ms(500);
  gpio_put(LED_AZUL, false);
}