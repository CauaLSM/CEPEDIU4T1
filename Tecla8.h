// Função tecla 8
// Alternar o LED azul (liga/desliga).
void Tecla8(){

gpio_put(LedAzul,1); // Liga led azul
sleep_ms(2000); // tempo de 2 segundos aceso
gpio_put(LedAzul,0); // desliga led azull
sleep_ms(1000); // tempo de 1 segundos aceso


}