// Função Tecla 4 

void liga_led_vermelho() {
    gpio_put(LedVermelho,1); // Liga led vermelho
     sleep_ms(5000); // tempo de 5 segundos aceso
    gpio_put(LedVermelho,0); // Desliga Led vermelho
}