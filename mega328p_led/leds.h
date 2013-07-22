#ifndef _LEDS_H_
#define _LEDS_H_ 1

#include <avr/io.h>

/* Leds registers defines */
#define LED_1_DDR	DDRB
#define LED_1_PORT	PORTB
#define LED_1_PIN	PB5
#if 0
#define LED_2_DDR	DDRD
#define LED_2_PORT	PORTD
#define LED_2_PIN	PD7

#define LED_3_DDR	DDRD
#define LED_3_PORT	PORTD
#define LED_3_PIN	PD5
/* etc. */
#endif 


/* Status leds initialization */
void Leds_Init(void);


#endif