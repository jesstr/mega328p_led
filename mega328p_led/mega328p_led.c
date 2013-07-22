/*
 * mega328p_led.c
 *
 * Created: 22.07.2013 16:10:31
 *  Author: Pavel Cherstvov
 */ 

/*FCU must be defined at "Properties->Toolchain->Symbols" as "F_CPU=8000000". */ 
/* #define F_CPU 8000000 */ 

#include <util/delay.h>
#include <avr/io.h>
#include "leds.h"

int main(void)
{
    while(1)
    {
		LED_1_PORT|=(1<<LED_1_PIN);
		_delay_ms(500);
		LED_1_PORT&=~(1<<LED_1_PIN);
		_delay_ms(500);
		LED_1_PORT|=(1<<LED_1_PIN);
		_delay_ms(500);
		LED_1_PORT&=~(1<<LED_1_PIN);
		_delay_ms(2000);
    }
}