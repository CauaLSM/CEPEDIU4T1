// Função tecla 7
// Piscar o LED vermelho 5 vezes lentamente.
void Tecla7(){

gpio_put(LedVermelho,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LedVermelho,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LedVermelho,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LedVermelho,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LedVermelho,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LedVermelho,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LedVermelho,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LedVermelho,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado
gpio_put(LedVermelho,1); // Liga led vermelho
sleep_ms(1000); // tempo de 1 segundos aceso
gpio_put(LedVermelho,0); // Desliga Led vermelho
sleep_ms(1000); // tempo de 1 segundos apagado

}

