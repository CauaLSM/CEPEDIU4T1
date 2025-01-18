#ifndef __KEYPAD_H_
#define __KEYPAD_H_

#include <stdlib.h>
#include <pico/stdlib.h>

#define MATRIX_LINES  4
#define MATRIX_COLS   4

#define LIN1    16
#define LIN2    17
#define LIN3    9
#define LIN4    8

#define COL1    18
#define COL2    19
#define COL3    20
#define COL4    4

void initKeypad();
char getKey();

#endif