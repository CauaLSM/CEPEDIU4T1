#include "functions.h"

void tecla5() {
  pwm_clear_irq(pwm_gpio_to_slice_num(BUZZER));
  for(int i = 0; i < 1000; i++){
    pwm_set_gpio_level(BUZZER, 10 * i);
    sleep_ms(1);
  }
  for(int i = 1000; i >= 0; i--){
    pwm_set_gpio_level(BUZZER, 10 * i);
    sleep_ms(1);
  }
  pwm_set_gpio_level(BUZZER, 0);
}