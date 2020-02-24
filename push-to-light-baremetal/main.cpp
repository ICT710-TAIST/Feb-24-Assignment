#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(USER_BUTTON);

int main()
{
    while(true){
        while(button) {
            led = 1; // LED is ON
            wait(0.2); // 200 ms
            led = 0; // LED is OFF
            wait(0.8); // 800 ms
        }
        led = 0; //LED is OFF
    }
}

