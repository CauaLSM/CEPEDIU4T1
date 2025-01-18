#include "functions.h"

void tecla3() {
  gpio_put(LED_AZUL, true);
  sleep_ms(2000);
  gpio_put(LED_AZUL, false);
}