#include "functions.h"

void tecla2(){
    gpio_put(LED_VERDE, 1); // Acende o LED amarelo
    pwm_set_gpio_level(BUZZER,1);// Toca o buzzer
    sleep_ms(1000); // pausa de 1s 
    gpio_put(LED_VERDE, 0); // Apaga o LED
    pwm_set_gpio_level(BUZZER,0);//Desliga buzzer
}