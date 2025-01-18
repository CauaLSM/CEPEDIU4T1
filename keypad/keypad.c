#include "keypad.h"

const uint8_t linhas[MATRIX_LINES] = { LIN1, LIN2, LIN3, LIN4 };
const uint8_t colunas[MATRIX_COLS] = { COL1, COL2, COL3, COL4 };

const char teclas[MATRIX_LINES][MATRIX_COLS] = {
    { '1', '2', '3', 'A' },
    { '4', '5', '6', 'B' },
    { '7', '8', '9', 'C' },
    { '*', '0', '#', 'D' }
};

void initKeypad() {
  for(uint8_t i = 0; i < MATRIX_COLS; i++) {
    gpio_init(colunas[i]);
    gpio_set_dir(colunas[i], GPIO_OUT);       
  }

  for(uint8_t i = 0; i < MATRIX_LINES; i++){
    gpio_init(linhas[i]);
    gpio_set_dir(linhas[i], GPIO_IN);
    gpio_pull_up(linhas[i]);       
  }
}

char getKey() {
  char key = ' ';
    for(uint8_t i = 0; i < MATRIX_COLS; i++) {
        gpio_put(colunas[i], false);
        sleep_ms(1);
        for(uint8_t j = 0; j < MATRIX_LINES; j++){
            if(!gpio_get(linhas[j])) {
                gpio_put(colunas[i], true);
                return teclas[j][i];
            }
        }
        gpio_put(colunas[i], true);
    }
    return key;
}
