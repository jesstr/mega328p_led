#include "leds.h"

/* Status leds initialization */
void Leds_Init(void)
{
	LED_1_DDR|=(1<<LED_1_PIN);
	LED_1_PORT&=~(1<<LED_1_PIN);
	#if 0
	LED_2_DDR|=(1<<LED_2_PIN);
	LED_2_PORT&=~(1<<LED_2_PIN);
	
	LED_3_DDR|=(1<<LED_3_PIN);
	LED_3_PORT&=~(1<<LED_3_PIN);
	/* etc */
	#endif
}