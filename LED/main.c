/*
 * main.c
 *
 *  Created on: 9 Dec 2023
 *      Author: user
 */

#include "DIO/STD_Types.h"
#include "DIO/bitmath.h"
#include "DIO/DIO_Interface.h"
#include "util/delay.h"
#include "LED_Interface.h"




int main(void)
{
	DIO_setPinDirection(DIO_PORTC,PIN2,OUTPUT);
	DIO_setPinDirection(DIO_PORTC,PIN7,OUTPUT);
	DIO_setPinDirection(DIO_PORTD,PIN3,OUTPUT);

	DIO_setPinValue(DIO_PORTC,PIN2,LOW);
	DIO_setPinValue(DIO_PORTC,PIN7,LOW);
	DIO_setPinValue(DIO_PORTD,PIN3,LOW);

	while(1)
	{
		LED_toggle(DIO_PORTC,PIN2);
		LED_toggle(DIO_PORTC,PIN7);
		LED_toggle(DIO_PORTD,PIN3);
		_delay_ms(500);
		LED_toggle(DIO_PORTC,PIN2);
		LED_toggle(DIO_PORTC,PIN7);
		LED_toggle(DIO_PORTD,PIN3);
		_delay_ms(500);
	}

}
