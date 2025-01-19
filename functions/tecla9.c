#include "functions.h"

void tecla9(){
    pwm_set_gpio_level(BUZZER,1000); // Toca o buzzer por um tempo curto 
    sleep_ms(2000); // Pausa 0,2s de tempo
    pwm_set_gpio_level(BUZZER,0); //Para de tocar de o buzzer
    sleep_ms(2000); // Pausa 0,2s de tempo
    pwm_set_gpio_level(BUZZER,1000); // Toca o buzzer por um tempo curto 
    sleep_ms(2000); // Pausa 0,2s de tempo
    pwm_set_gpio_level(BUZZER,0); //Para de tocar de o buzzer
    sleep_ms(4000); // Pausa 0,2s de tempo
    pwm_set_gpio_level(BUZZER,1000);// Toca o buzzer por um tempo longo
    pwm_set_gpio_level(BUZZER,0); //Para de tocar de o buzzer
    
}
