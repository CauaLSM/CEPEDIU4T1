#include "functions.h"

void tecla9(){
    pwm_set_gpio_level(BUZZER,1); // Toca o buzzer por um tempo curto 
    sleep_ms(200); // Pausa 0,2s de tempo
    pwm_set_gpio_level(BUZZER,1); // Toca o buzzer por um tempo curto 
    sleep_ms(200); // Pausa 0,2s de tempo
    pwm_set_gpio_level(BUZZER,1);// Toca o buzzer por um tempo longo
    sleep_ms(600); // Pausa 0,6s de tempo
    pwm_set_gpio_level(BUZZER,0); //Para de tocar de o buzzer
    
}
