#ifndef __NEOPIXEL_H_
#define __NEOPIXEL_H_

#include <stdio.h>
#include "pico/stdlib.h"

#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "ws2812.pio.h"

#include "letras.h"

void initNeoPixel();
void renderMatrix(bool letra[MATRIX_LEN][MATRIX_LEN]);

#define NEOPIXEL_PIN 7

#endif