#include <stdio.h>
#include "pico/stdlib.h"

#include "U4T1.h"

void initGpio() {
    gpio_init(LED_AZUL);
    gpio_init(LED_VERDE);
    gpio_init(LED_VERMELHO);
    gpio_init(BUZZER);

    gpio_set_dir(LED_AZUL, GPIO_OUT);
    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);
}

int main()
{
    stdio_init_all();

    initGpio();
    initKeypad();

    while (true) {
        char key = getKey();

        switch(key) {
            case '3':
                tecla3();
                break;
            case '5':
                tecla5();
                break;
            case '7':
                Tecla7();
                break;
            case '8':
                Tecla8();
                break;

            default:
                break;
        }

        sleep_ms(100);
    }
}
