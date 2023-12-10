/*
 * main.c
 *
 *  Created on: 9 Dec 2023
 *      Author: user
 */
#include <util/delay.h>

#include "DIO/STD_Types.h"
#include "DIO/bitmath.h"
#include "DIO/DIO_Interface.h"

#include "BUZZER_cfg.h"
#include "BUZZER_Reg.h"
#include "BUZZER_Private.h"
#include "BUZZER_Interface.h"


int main(void)
{
	DIO_setPinDirection(DIO_PORTA,PIN3,OUTPUT);
	while(1)
	{
		BUZZER_turnOn(DIO_PORTA,PIN3);
		_delay_ms(500);
		BUZZER_turnOff(DIO_PORTA,PIN3);
		_delay_ms(500);
	}
}
