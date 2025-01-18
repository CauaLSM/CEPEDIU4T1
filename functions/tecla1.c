#include "functions.h"

void Tecla1() {
  digitalWrite(LedVermelho, HIGH);
  digitalWrite(LedVerde, HIGH);
  delay(3000);
  digitalWrite(LedVermelho, LOW);
  digitalWrite(LedVerde, LOW);
}
