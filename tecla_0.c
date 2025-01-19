// tecla_0.c
#include "tecla_0.h"
#include <stdio.h>
#include "pico/stdlib.h"

void handle_key_0(uint gpio_led) {
    gpio_put(gpio_led, 1);
    sleep_ms(500);
    gpio_put(gpio_led, 0);
}

// tecla_0.h
#ifndef TECLA_0_H
#define TECLA_0_H

#include <stdint.h>

void handle_key_0(uint gpio_led);

#endif
