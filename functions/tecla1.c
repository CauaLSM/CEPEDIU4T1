#include "functions.h"

void Tecla1() {
  digitalWrite(LED_VERMELHO, HIGH);
  digitalWrite(LED_VERDE, HIGH);
  delay(3000);
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, LOW);
}
