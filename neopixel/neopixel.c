#include "neopixel.h"

static inline void put_pixel(uint32_t pixel_rgb) {
  pio_sm_put_blocking(pio0, 0, pixel_rgb << 8u);
}

static inline uint32_t urgb_u32(uint8_t r, uint8_t g, uint8_t b) {
  return ((uint32_t)(r) << 8) |
         ((uint32_t)(g) << 16) |
         (uint32_t)(b);
}

void initNeoPixel() {
  PIO pio = pio0;
  int sm = 0;
  uint offset = pio_add_program(pio, &ws2812_program);
  char str[12];

  ws2812_program_init(pio, sm, offset, NEOPIXEL_PIN, 800000, false);
}

void renderMatrix(bool letra[MATRIX_LEN][MATRIX_LEN]) {
  for(int i = MATRIX_LEN - 1; i >= 0; i--){
    for(int j = MATRIX_LEN - 1; j >= 0; j--) {
      uint8_t col = j;
      if(i % 2 != 0) col = MATRIX_LEN - 1 - j;
      if(letra[i][col]) put_pixel(urgb_u32(255, 0, 0));
      else put_pixel(urgb_u32(0, 0, 0));
    }
  }
}