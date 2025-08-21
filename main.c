#include <avr/io.h>
#include <util/delay_basic.h>

static void dly(uint16_t ms){ while(ms--) _delay_loop_1(400); }

int main(void){
    DDRB |= (1<<PB0)|(1<<PB1);
    PORTB = (1<<PB0);                 // Start: PB0 an, PB1 aus
    for(;;){
        dly(500);
        PINB = (1<<PB0)|(1<<PB1); 