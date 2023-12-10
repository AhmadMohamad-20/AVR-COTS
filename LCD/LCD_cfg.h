/*
 * LCD_cfg.h
 *
 *  Created on: 10 Dec 2023
 *      Author: user
 */

#ifndef LCD_CFG_H_
#define LCD_CFG_H_



#define	LCD_DATA_PORT		DIO_PORTC
#define LCD_CONTROL_PORT	DIO_PORTD
#define LCD_RS_PIN			PIN0
#define LCD_RW_PIN			PIN1
#define LCD_ENABLE_PIN		PIN2

#define LCD_DATA_4BIT_PIN0	PIN4
#define LCD_DATA_4BIT_PIN1	PIN5
#define LCD_DATA_4BIT_PIN2	PIN6
#define LCD_DATA_4BIT_PIN3	PIN7

#define FUNCTION_SET				0b00111000  /* 2 rows , 8-bit , 5*8 character size*/
#define DISPLAY_CURSOR_BLINKING		0b00001100 	/*Display on , cursor off , blinking off*/
#define DISPLAY_CLEAR				0x01
#define ENTRY_MODE					0b00000110 	/*increasing cursor, no shifting*/



#endif /* LCD_CFG_H_ */
