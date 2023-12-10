/*
 * LCD_Interface.h
 *
 *  Created on: 10 Dec 2023
 *      Author: user
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

uint8 LCD_sendCommand_8bit(uint8 copy_LCD_port, uint8 copy_LCD_command);
uint8 LCD_sendData_8bit(uint8 copy_LCD_port, uint8 copy_LCD_data);
uint8 LCD_init_8bit(void);

uint8 LCD_sendCommand_4bit(uint8 copy_LCD_port, uint8 copy_LCD_command);
uint8 LCD_sendData_4bit(uint8 copy_LCD_port, uint8 copy_LCD_data);
uint8 LCD_init_4bit(void);
#endif /* LCD_INTERFACE_H_ */
