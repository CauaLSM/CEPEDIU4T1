// tecla_#.c
#include <stdio.h>
#include "pico/stdlib.h"

#define ROWS 4
#define COLS 4
#define LEDS 3  // Número de LEDs controlados
#define BUZZER_PIN 13  // Pino do buzzer

// Mapear as teclas do teclado matricial
const char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

// Pinos das linhas, colunas e LEDs
const uint8_t row_pins[ROWS] = {2, 3, 4, 5};  // Substituir pelos pinos GPIO corretos
const uint8_t col_pins[COLS] = {6, 7, 8, 9};  // Substituir pelos pinos GPIO corretos
const uint8_t led_pins[LEDS] = {10, 11, 12};  // Substituir pelos pinos dos LEDs

void setup_pins() {
    // Configurar pinos das linhas como saída
    for (int i = 0; i < ROWS; i++) {
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
    }
    // Configurar pinos das colunas como entrada com pull-up
    for (int j = 0; j < COLS; j++) {
        gpio_init(col_pins[j]);
        gpio_set_dir(col_pins[j], GPIO_IN);
        gpio_pull_up(col_pins[j]);
    }
    // Configurar pinos dos LEDs como saída
    for (int k = 0; k < LEDS; k++) {
        gpio_init(led_pins[k]);
        gpio_set_dir(led_pins[k], GPIO_OUT);
        gpio_put(led_pins[k], 0);  // Inicializar LEDs apagados
    }
    // Configurar pino do buzzer como saída
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_put(BUZZER_PIN, 0);  // Inicializar buzzer desligado
}

char get_key() {
    for (int i = 0; i < ROWS; i++) {
        gpio_put(row_pins[i], 0);  // Ativar linha atual
        for (int j = 0; j < COLS; j++) {
            if (!gpio_get(col_pins[j])) {  // Verificar se a coluna está baixa
                gpio_put(row_pins[i], 1);  // Restaurar a linha
                return keys[i][j];        // Retornar a tecla pressionada
            }
        }
        gpio_put(row_pins[i], 1);  // Restaurar a linha
    }
    return 0;  // Nenhuma tecla pressionada
}

void activate_all_leds_and_buzzer() {
    for (int i = 0; i < LEDS; i++) {
        gpio_put(led_pins[i], 1);  // Acender todos os LEDs
    }
    gpio_put(BUZZER_PIN, 1);  // Ativar o buzzer
    sleep_ms(2000);           // Manter por 2 segundos
    for (int i = 0; i < LEDS; i++) {
        gpio_put(led_pins[i], 0);  // Apagar todos os LEDs
    }
    gpio_put(BUZZER_PIN, 0);  // Desligar o buzzer
}

int main() {
    stdio_init_all();
    setup_pins();

    while (1) {
        char key = get_key();
        if (key == '#') {  // Verificar se a tecla pressionada é "#"
            printf("Tecla # pressionada: Ativando todos os LEDs e o buzzer\n");
            activate_all_leds_and_buzzer();  // Ativar LEDs e buzzer simultaneamente
        }
        sleep_ms(100);  // Debounce
    }
    return 0;
}