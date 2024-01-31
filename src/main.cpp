#include "mbed.h"

// Definir los pines de los LEDs de usuario
DigitalOut led1(LED1); 
DigitalOut led2(LED2);
DigitalOut led3(LED3);

int main() {
    while (1) {
        // Encender los tres LEDs
        led1 = true;
        ThisThread::sleep_for(750);
        led1 = false;
        ThisThread::sleep_for(750);
        led1 = true;
        led2 = true;
        ThisThread::sleep_for(750);
        led1 = true;
        led2 = true;
        led3 = true;
        ThisThread::sleep_for(750);
        led1 = false;
        led2 = false;
        led3 = false;
        ThisThread::sleep_for(750);
        led1 = true;
        led2 = true;
        led3 = true;
        ThisThread::sleep_for(1s);
    }
}
