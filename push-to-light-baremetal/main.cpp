#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(USER_BUTTON);

int main()
{
    while(true){
       led = button; 
    }
}

