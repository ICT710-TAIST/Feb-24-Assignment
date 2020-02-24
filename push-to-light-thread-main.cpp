/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"
 
// Initialise the digital pin LED1 as an output
DigitalIn button(USER_BUTTON);
DigitalOut led(LED1);
	
Thread thread;
void LedOn(){
	while(true){
		led = !button;
	}			
}
 
int main()
{
	thread.start(LedOn);
}
