#include "functions.h"

void tecla5() {
  gpio_put(BUZZER, true);
  sleep_ms(2000);
  gpio_put(BUZZER, false);
}