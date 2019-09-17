/*
 * App.c
 *
 *  Created on: Sep 13, 2019
 *      Author: mom
 */
#include"STD_TYPES.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include"ADC_INTERFACE.h"
#define preload 87
#define desire 4
#define MAX 127

int main()
{
DDRA=0x00;
DDRD=0xff;
DDRC=0xff;
DDRB=0xff;
ADC_INIT();
TCCR0|=(1<<1)|(1<<3)|(1<<6)|(1<<5);
//TIMSK |=(1<<1);
//SREG |=(1<<7);

while(1)
{
	ReadChannel(0);  //potenyiometer
	ReadChannel(1);  //sensor
	OCR0=PORTC;        /*control manually*/
	/*connect portd to leds*/
}
return 0;
}


