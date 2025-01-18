// Função Tecla 4 

void liga_led_azul() {
    gpio_put(LedAzul,1); // Liga led azul
     sleep_ms(5000); // tempo de 5 segundos aceso
    gpio_put(LedAzul,0); // Desliga Led azul
}
