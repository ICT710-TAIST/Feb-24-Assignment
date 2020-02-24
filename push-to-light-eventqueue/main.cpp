#include "mbed.h"
#include "mbed_events.h"
 
DigitalOut led(LED1);
InterruptIn sw(USER_BUTTON);
Thread t;

void rise_handler(void) {
    led = !led;
}
 
void fall_handler(void) {
    led = !led;
}
 
int main() {
    EventQueue *queue = mbed_event_queue();
    sw.rise(rise_handler);
    sw.fall(queue->event(fall_handler));
}
