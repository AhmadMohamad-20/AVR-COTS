/*
 * main.c
 *
 *  Created on: 8 Dec 2023
 *      Author: user
 */
#include <avr/delay.h>
#include "STD_Types.h"
#include "bitmath.h"
#include "DIO_Interface.h"

int main(void)
{
	DIO_setPinDirection(DIO_PORTD,PIN3,OUTPUT);
	DIO_setPinDirection(DIO_PORTC,PIN2,OUTPUT);
	DIO_setPinDirection(DIO_PORTC,PIN7,OUTPUT);

	while (1)
	{
		DIO_setPinValue(DIO_PORTD,PIN3,HIGH);
		DIO_setPinValue(DIO_PORTC,PIN2,HIGH);
		DIO_setPinValue(DIO_PORTC,PIN7,HIGH);
		_delay_ms(500);
		DIO_setPinValue(DIO_PORTD,PIN3,LOW);
		DIO_setPinValue(DIO_PORTC,PIN2,LOW);
		DIO_setPinValue(DIO_PORTC,PIN7,LOW);
		_delay_ms(500);
	}

	return (0);
}

