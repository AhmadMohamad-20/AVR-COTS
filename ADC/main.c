/*
 * Author   : Ahmed Mohamed Aboud
 * Linkedin :https://www.linkedin.com/in/ahmed-mohamed-aboud-33b2471b1/
 * File Name: main.c
 * Date: 22 Dec 2023
 */
#include <util/delay.h>
#include "DIO/STD_Types.h"
#include "DIO/bitmath.h"

#include "DIO/DIO_Interface.h"
#include "General_Interrupts/GEN_INTERRUPT__Interacing.h"

#include "ADC_Reg.h"
#include "ADC_CFG.h"
#include "ADC_Private.h"
#include "ADC_Interface.h"


extern uint8 ChainAsyncIndex;

ADC_chainAsync_t sensors;

void ADC_ISR(void);

int main(void)
{
	DIO_setPortDirection(DIO_PORTB,PORT_OUTPUT);
	DIO_setPortDirection(DIO_PORTC,PORT_OUTPUT);
	DIO_setPortDirection(DIO_PORTD,PORT_OUTPUT);

	sensors.channelID[0] = ADC0_MASK;
	sensors.channelID[1] = ADC1_MASK;
	sensors.channelID[2] = ADC2_MASK;

	setCallBack_ADC(ADC_ISR);
	ADC_init();

	while(1)
	{
		ADC_startChainConversionAsync(&sensors);
	}
}


void ADC_ISR(void)
{
	switch (ChainAsyncIndex % 3)
	{
	 	 case 0:
	 		 DIO_setPortValue(DIO_PORTB,sensors.ADC_Reading[0]);
	 		 break;
	 	 case 1:
	 		DIO_setPortValue(DIO_PORTC,sensors.ADC_Reading[1]);
	 		break;
	 	 case 2:
	 		DIO_setPortValue(DIO_PORTD,sensors.ADC_Reading[2]);
	 		break;
	 	 default:;
	}

}
