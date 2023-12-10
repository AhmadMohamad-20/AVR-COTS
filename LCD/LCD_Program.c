/*
 * LCD_Program.c
 *
 *  Created on: 10 Dec 2023
 *      Author: user
 */
#include <util/delay.h>
#include "DIO/STD_Types.h"
#include "DIO/bitmath.h"
#include "DIO/DIO_Interface.h"

#include "LCD_cfg.h"
#include "LCD_Reg.h"
#include "LCD_Private.h"
#include "LCD_Interface.h"

static uint8 DIO_set4bitsValue(uint8 copy_DIO_PORT, uint8 copy_DIO_value);

uint8 LCD_sendCommand_8bit(uint8 copy_LCD_port, uint8 copy_LCD_command)
{
	uint8 local_errorSignal = OK_STAT;
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RS_PIN,LOW);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RW_PIN,LOW);
	local_errorSignal = DIO_setPortValue(copy_LCD_port,copy_LCD_command);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,HIGH);
	_delay_ms(2);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,LOW);
	return local_errorSignal;
}

uint8 LCD_sendData_8bit(uint8 copy_LCD_port, uint8 copy_LCD_data)
{
	uint8 local_errorSignal = OK_STAT;
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RS_PIN,HIGH);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RW_PIN,LOW);
	local_errorSignal = DIO_setPortValue(copy_LCD_port,copy_LCD_data);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,HIGH);
	_delay_ms(2);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,LOW);
	return local_errorSignal;
}

uint8 LCD_init_8bit(void)
{
	uint8 local_errorSignal = OK_STAT;
	_delay_ms(35);
	local_errorSignal = LCD_sendCommand_8bit(LCD_DATA_PORT,FUNCTION_SET);
	local_errorSignal = LCD_sendCommand_8bit(LCD_DATA_PORT,DISPLAY_CURSOR_BLINKING);
	local_errorSignal = LCD_sendCommand_8bit(LCD_DATA_PORT,DISPLAY_CLEAR);
	local_errorSignal = LCD_sendCommand_8bit(LCD_DATA_PORT,ENTRY_MODE);
	local_errorSignal = LCD_sendCommand_8bit(LCD_DATA_PORT,PORT_LOW);
	return local_errorSignal;
}

uint8 LCD_sendCommand_4bit(uint8 copy_LCD_port, uint8 copy_LCD_command)
{
	uint8 local_errorSignal = OK_STAT;
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RS_PIN,LOW);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RW_PIN,LOW);
	local_errorSignal = DIO_set4bitsValue(copy_LCD_port,(copy_LCD_command >> 4));
	local_errorSignal = DIO_set4bitsValue(copy_LCD_port,copy_LCD_command);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,HIGH);
	_delay_ms(2);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,LOW);
	return local_errorSignal;
}

uint8 LCD_sendData_4bit(uint8 copy_LCD_port, uint8 copy_LCD_data)
{
	uint8 local_errorSignal = OK_STAT;
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RS_PIN,LOW);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_RW_PIN,LOW);
	local_errorSignal = DIO_set4bitsValue(copy_LCD_port,(copy_LCD_data >> 4));
	local_errorSignal = DIO_set4bitsValue(copy_LCD_port,copy_LCD_data);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,HIGH);
	_delay_ms(2);
	local_errorSignal = DIO_setPinValue(LCD_CONTROL_PORT,LCD_ENABLE_PIN,LOW);
	return local_errorSignal;

}

uint8 LCD_init_4bit(void)
{
	uint8 local_errorSignal = OK_STAT;
	_delay_ms(35);
	local_errorSignal = LCD_sendCommand_4bit(LCD_DATA_PORT,FUNCTION_SET);
	local_errorSignal = LCD_sendCommand_4bit(LCD_DATA_PORT,DISPLAY_CURSOR_BLINKING);
	local_errorSignal = LCD_sendCommand_4bit(LCD_DATA_PORT,DISPLAY_CLEAR);
	local_errorSignal = LCD_sendCommand_4bit(LCD_DATA_PORT,ENTRY_MODE);
	local_errorSignal = LCD_sendCommand_4bit(LCD_DATA_PORT,PORT_LOW);
	return local_errorSignal;

}

static uint8 DIO_set4bitsValue(uint8 copy_DIO_PORT, uint8 copy_DIO_value)
{
	uint8 local_errorSignal = OK_STAT;
	local_errorSignal = DIO_setPinValue(copy_DIO_PORT,LCD_DATA_4BIT_PIN0,((copy_DIO_value >> 0) & 1));
	local_errorSignal = DIO_setPinValue(copy_DIO_PORT,LCD_DATA_4BIT_PIN1,((copy_DIO_value >> 1) & 1));
	local_errorSignal = DIO_setPinValue(copy_DIO_PORT,LCD_DATA_4BIT_PIN2,((copy_DIO_value >> 2) & 1));
	local_errorSignal = DIO_setPinValue(copy_DIO_PORT,LCD_DATA_4BIT_PIN3,((copy_DIO_value >> 3) & 1));
	return local_errorSignal;
}


