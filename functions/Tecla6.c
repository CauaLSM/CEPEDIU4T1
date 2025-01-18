#include "functions.h"

void Tecla6() {
    while (true) { // Laço infinito para alternar o LED verde
        gpio_put(LED_VERDE, 1); // Liga LED verde
        sleep_ms(1000);         // Espera 1 segundo
        gpio_put(LED_VERDE, 0); // Desliga LED verde
        sleep_ms(1000);         // Espera 1 segundo
    }
}
