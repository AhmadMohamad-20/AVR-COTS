/*
 * DIO_Program.c
 *
 *  Created on: 11 Dec 2023
 *      Author: user
 */



#include "STD_Types.h"
#include "bitmath.h"

#include "DIO_Reg.h"
#include "DIO_cfg.h"
#include "DIO_Private.h"
#include "DIO_Interface.h"


uint8 DIO_setPinDirection(reg_t* copy_DIO_reg,uint8 copy_DIO_pin,uint8 copy_DIO_direction)
{
	uint8 local_errorSignal = OK_STAT;
	if ((NULL != copy_DIO_reg) && (copy_DIO_direction <= 1))
	{
		switch(copy_DIO_pin)
		{
			case PIN0:
				copy_DIO_reg->pins.pin0 = copy_DIO_direction;
				break;
			case PIN1:
				copy_DIO_reg->pins.pin1 = copy_DIO_direction;
				break;
			case PIN2:
				copy_DIO_reg->pins.pin2 = copy_DIO_direction;
				break;
			case PIN3:
				copy_DIO_reg->pins.pin3 = copy_DIO_direction;
				break;
			case PIN4:
				copy_DIO_reg->pins.pin4 = copy_DIO_direction;
				break;
			case PIN5:
				copy_DIO_reg->pins.pin5 = copy_DIO_direction;
				break;
			case PIN6:
				copy_DIO_reg->pins.pin6 = copy_DIO_direction;
				break;
			case PIN7:
				copy_DIO_reg->pins.pin7 = copy_DIO_direction;
				break;
			default:
				local_errorSignal = NOT_OK_STAT;
				break;
		}
	}
	else
	{
		local_errorSignal = NOT_OK_STAT;
	}

	return local_errorSignal;
}

uint8 DIO_setPinValue(reg_t* copy_DIO_reg,uint8 copy_DIO_pin,uint8 copy_DIO_value)
{
	uint8 local_errorSignal = OK_STAT;

	if ((NULL != copy_DIO_reg) && (copy_DIO_value <= 1))
	{
		switch(copy_DIO_pin)
		{
		case PIN0:
			copy_DIO_reg->pins.pin0 = copy_DIO_value;
			break;
		case PIN1:
			copy_DIO_reg->pins.pin1 = copy_DIO_value;
			break;
		case PIN2:
			copy_DIO_reg->pins.pin2 = copy_DIO_value;
			break;
		case PIN3:
			copy_DIO_reg->pins.pin3 = copy_DIO_value;
			break;
		case PIN4:
			copy_DIO_reg->pins.pin4 = copy_DIO_value;
			break;
		case PIN5:
			copy_DIO_reg->pins.pin5 = copy_DIO_value;
			break;
		case PIN6:
			copy_DIO_reg->pins.pin6 = copy_DIO_value;
			break;
		case PIN7:
			copy_DIO_reg->pins.pin7 = copy_DIO_value;
			break;
		default:
			local_errorSignal = NOT_OK_STAT;
			break;
		}
	}
	else
	{
		local_errorSignal = NOT_OK_STAT;
	}

	return local_errorSignal;
}

uint8 DIO_readPinValue(reg_t* copy_DIO_reg,uint8 copy_DIO_pin,uint8 *copy_DIO_pValue)
{
	uint8 local_errorSignal = OK_STAT;
	if ((NULL != copy_DIO_reg) && (NULL != copy_DIO_pValue))
		{
			switch(copy_DIO_pin)
			{
				case PIN0:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin0;
					break;
				case PIN1:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin1;
					break;
				case PIN2:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin2;
					break;
				case PIN3:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin3;
					break;
				case PIN4:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin4;
					break;
				case PIN5:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin5;
					break;
				case PIN6:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin6;
					break;
				case PIN7:
					*copy_DIO_pValue = copy_DIO_reg->pins.pin7;
					break;
				default:
					local_errorSignal = NOT_OK_STAT;
					break;
			}
		}
		else
		{
			local_errorSignal = NOT_OK_STAT;
		}
	return local_errorSignal;
}

uint8 DIO_setPortDirection(reg_t* copy_DIO_reg,uint8 copy_DIO_direction)
{
	uint8 local_errorSignal = OK_STAT;

	if(NULL != copy_DIO_reg)
	{
		copy_DIO_reg->regData = copy_DIO_direction;
	}
	else
	{
		local_errorSignal = NOT_OK_STAT;
	}
	return local_errorSignal;
}
uint8 DIO_setPortValue(reg_t* copy_DIO_reg,uint8 copy_DIO_value)
{
	uint8 local_errorSignal = OK_STAT;
	if(NULL != copy_DIO_reg)
		{
			copy_DIO_reg->regData = copy_DIO_value;
		}
		else
		{
			local_errorSignal = NOT_OK_STAT;
		}
	return local_errorSignal;
}
uint8 DIO_readPortValue(reg_t* copy_DIO_reg,uint8 *copy_DIO_pValue)
{
	uint8 local_errorSignal = OK_STAT;
	if((NULL != copy_DIO_reg) && (NULL != copy_DIO_pValue))
		{
			*copy_DIO_pValue = copy_DIO_reg->regData;
		}
		else
		{
			local_errorSignal = NOT_OK_STAT;
		}
	return local_errorSignal;
}
