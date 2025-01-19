# Projeto U4T1 - Matriz de Teclado e LEDs com Raspberry Pi Pico

👋 Olá! Este projeto demonstra a utilização de uma matriz de teclado 4x4 e LEDs com um Raspberry Pi Pico.  Cada tecla pressionada aciona uma função específica, controlando o estado dos LEDs (vermelho, verde e azul) e de um buzzer.


## 🚀 Funcionalidades

| Tecla | Funcionalidade                                      |
|-------|---------------------------------------------------|
| **1**  | Acende os LEDs vermelho e verde por 3 segundos.   |
| **2**  | Acende o LED verde e toca o buzzer por 1 segundo.    |
| **3**  | Acende sequencialmente os LEDs vermelho, verde e azul, cada um por 0.5 segundos. |
| **4**  | Acende o LED azul por 5 segundos.                 |
| **5**  | Aumenta e diminui gradualmente o volume do buzzer. |
| **6**  | Pisca o LED verde com intervalos de 1 segundo.     |
| **7**  | Pisca o LED vermelho 5 vezes lentamente (intervalos de 1 segundo). |
| **8**  | Alterna o estado do LED azul (liga/desliga) com um intervalo de 2 segundos ligado e 1 segundo desligado. |
| **9**  | Toca o buzzer duas vezes com intervalos curtos e uma vez com um intervalo mais longo. |
| **A**  | Acende todos os LEDs por 2 segundos.              |
| **B**  | Acende todos os LEDs e os mantém acesos.          |
| **C**  | Desliga todos os LEDs e o buzzer.                |
| **\*** | Acende o LED vermelho e toca o buzzer por 6 segundos. |
| **#**  | Reservado para funcionalidade futura.             |
| **0**  | Reservado para funcionalidade futura.             |
| **D**  | Liga os leds em uma sequência predefinida. |



## 🛠️ Requisitos

### Hardware

* **Raspberry Pi Pico:**  Um microcontrolador Raspberry Pi Pico.
* **Matriz de Teclado 4x4:** Uma matriz de teclado com 4 linhas e 4 colunas.
* **LEDs:** Três LEDs (vermelho, verde e azul).
* **Buzzer:** Um buzzer.
* **Resistores:** Resistores apropriados para os LEDs (tipicamente 220-330 ohms) e para o buzzer (opcional, dependendo do buzzer).
* **Protoboard:** Uma protoboard para conectar os componentes.
* **Cabos Jumper:** Cabos jumper para conectar os componentes na protoboard.


### Software

* **SDK do Raspberry Pi Pico:** O SDK (Software Development Kit) do Pico, que inclui as bibliotecas e ferramentas necessárias para desenvolver e compilar o código. [Instruções de instalação](https://www.raspberrypi.com/documentation/pico/getting-started/)
* **CMake:** Um sistema de construção multiplataforma usado para gerar os arquivos de construção do projeto.
* **Compilador C/C++:**  Um compilador C/C++ como o GCC (GNU Compiler Collection).
* **Git:** (Opcional) Para clonar o repositório do projeto.


# Como usar

1. **Clone o repositório (opcional):**
   Se você estiver usando um repositório Git, clone-o usando:
   ```bash
   git clone <URL_DO_REPOSITORIO>
   ```

2. **Instale o SDK do Raspberry Pi Pico:**
   Siga as instruções no site oficial do Raspberry Pi para configurar o ambiente de desenvolvimento e instalar o SDK do Pico. O link está na seção de requisitos de software.

3. **Conecte o Raspberry Pi Pico:**
   Conecte o Pico ao seu computador via USB.

4. **Compile o código:**
   Navegue até o diretório do projeto e execute os seguintes comandos:
   ```bash
   cd <PASTA_DO_PROJETO>
   mkdir build
   cd build
   cmake ..
   make
   ```

5. **Carregue o firmware:**
   Copie o arquivo .uf2 gerado na pasta build para seu Raspberry Pi Pico. Para isso, pressione e segure o botão BOOTSEL no Pico enquanto o conecta ao computador. O Pico aparecerá como um dispositivo de armazenamento USB. Arraste o arquivo .uf2 para o Pico.

## 💡 Dicas

* **Organização:** O projeto está organizado com arquivos separados para as funções de cada tecla (functions.c/.h), a lógica do teclado (keypad.c/.h) e o código principal (main.c). Isso facilita a manutenção e a adição de novas funcionalidades.

* **PWM:** O buzzer é controlado usando PWM (Pulse Width Modulation) para variar seu volume.

* **Debouncing:** O código atual não implementa debouncing no teclado. Considere adicionar debouncing para evitar leituras múltiplas de uma única tecla pressionada. Você pode implementar debouncing por hardware ou software. Uma solução simples por software é adicionar um pequeno atraso após a leitura de uma tecla e verificar se a tecla ainda está pressionada após o atraso.

## Estrutura do Projeto
```
U4T1/
├── CMakeLists.txt
├── functions/
│   ├── functions.c
│   └── functions.h
├── keypad/
│   ├── keypad.c
│   └── keypad.h
├── neopixel/
│   ├── neopixel.c
│   └── neopixel.h
└── U4T1.c
└── U4T1.h
```

## Esquemático
![image](https://github.com/user-attachments/assets/03feff71-5d39-4a19-8b36-b759d5313f9d)


## ✨ Próximos Passos

* Implementar debouncing no teclado
* Adicionar suporte para um display e implementar as funcionalidades das teclas '0' e '#'
* Criar novas funcionalidades para as teclas
* Explorar outras bibliotecas e recursos do Raspberry Pi Pico

## 🎉 Divirta-se explorando e modificando o projeto!
