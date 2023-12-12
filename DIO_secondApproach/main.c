/*
 * main.c
 *
 *  Created on: 10 Dec 2023
 *      Author: user
 */

#include <util/delay.h>

#include "STD_Types.h"
#include "bitmath.h"

#include "DIO_Reg.h"
#include "DIO_cfg.h"
#include "DIO_Private.h"
#include "DIO_Interface.h"


int main(void)
{
	DIO_setPinDirection(DDRA_REG,PIN0,OUTPUT);
	DIO_setPinDirection(DDRA_REG,PIN1,OUTPUT);
	DIO_setPinDirection(DDRA_REG,PIN2,OUTPUT);

	while(1)
	{
		DIO_setPinValue(DDRA_REG,PIN0,HIGH);
		DIO_setPinValue(DDRA_REG,PIN1,HIGH);
		DIO_setPinValue(DDRA_REG,PIN2,HIGH);
		_delay_ms(500);
		DIO_setPinValue(DDRA_REG,PIN0,LOW);
		DIO_setPinValue(DDRA_REG,PIN1,LOW);
		DIO_setPinValue(DDRA_REG,PIN2,LOW);
		_delay_ms(500);

	}
    return 0;
}
