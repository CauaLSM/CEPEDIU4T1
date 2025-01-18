// Função Tecla 6
void Alterna_led_verde() {
    while (true) { // Laço infinito para alternar o LED verde
        gpio_put(LedVerde, 1); // Liga LED verde
        sleep_ms(1000);         // Espera 1 segundo
        gpio_put(LedVerde, 0); // Desliga LED verde
        sleep_ms(1000);         // Espera 1 segundo
    }
}
