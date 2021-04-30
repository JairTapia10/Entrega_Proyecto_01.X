/*
 * File:   Proyecto 01 Led.c
 * Author: Jair Tapia Ramirez
 *
 * Created on 30 de abril de 2021, 01:54 PM
 */
#define F_CPU 1000000UL
#include <util/delay.h>
#include <avr/io.h>

int main(void) {
    DDRB = 0xFF;
    /* Replace with your application code */
    while (1) {
        PORTB = 0b00000001;
        _delay_ms(2000);
        PORTB = 000000000;
        _delay_ms(2000);
        
    }
}
