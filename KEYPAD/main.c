/*
 * main.c
 *
 *  Created on: 16 Dec 2023
 *      Author: user
 */


#include <util/delay.h>

#include "DIO/STD_Types.h"
#include "DIO/bitmath.h"

#include "DIO/DIO_Interface.h"
#include "DIO_autosar/DIO_interface.h"

#include "KEYPAD_CFG.h"
#include "KEYPAD_Reg.h"
#include "KEYPAD_Private.h"
#include "KEYPAD_Interfacing.h"

uint8 tempData = 0;
uint8 data = 0;
int main(void)
{
	DIO_initalizePorts();
	while (1)
	{
		tempData = KEYPAD_getValue();
		if (tempData != 0x01)
		{
			data = tempData;

		}
	}
	return (0);
}
