# STM32 using bluetooth module HC-06 
In this project, I have used bluetooth HC-06 with a STM32 ( NUCLEO BOARD L415KB). The goal is really simple, turon on/off LED user on the bioard with Android application.

## Electrical design
For this projest I used USART1 to comunicate with HC-06 module. USART use PA9 ans PA10 to comunicate. For Rx pin on HC-06, I've add voltage dividor with 2 resistors R1 1k and R2 2.2k, I'vs added this resistors, because I 'd like to avoid any damage on input GPIO stm32 board with 5V.

![Alt text](design.png?raw=true "Design")

## Future work
I'd like to add relay on the board, because I'd like to use object connected to 220V like electrical outlet or light etc. For that I'll use ４-Channel Relay Module Elegoo like this one. I'll add a seperate power supply beceause HC-06 plus relay it's starting to do a lot for the board, and the final objective is to have a autonomous system without USB power.

![Alt text](relay.jpg?raw=true "Relay")
