/*
 * DIO_Interface.h
 *
 *  Created on: 10 Dec 2023
 *      Author: user
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#define DIO_PORTA	0
#define DIO_PORTB	1
#define DIO_PORTC	2
#define DIO_PORTD	3

#define PIN0		0
#define PIN1		1
#define PIN2		2
#define PIN3		3
#define PIN4		4
#define PIN5		5
#define PIN6		6
#define PIN7		7

#define INPUT	0
#define OUTPUT	1

#define HIGH	1
#define LOW		0

#define PORT_OUTPUT 0xFF
#define PORT_INPUT 0

#define PORT_HIGH	0xFF
#define PORT_LOW	0



#define PORTA_REG ((volatile reg_t*)(PORTA_ADDRESS))
#define PORTB_REG ((volatile reg_t*)(PORTB_ADDRESS))
#define PORTC_REG ((volatile reg_t*)(PORTC_ADDRESS))
#define PORTD_REG ((volatile reg_t*)(PORTD_ADDRESS))

#define PINA_REG ((volatile reg_t*)(PINA_ADDRESS))
#define PINB_REG ((volatile reg_t*)(PINB_ADDRESS))
#define PINC_REG ((volatile reg_t*)(PINC_ADDRESS))
#define PIND_REG ((volatile reg_t*)(PIND_ADDRESS))

#define DDRA_REG ((volatile reg_t*)(DDRA_ADDRESS))
#define DDRB_REG ((volatile reg_t*)(DDRB_ADDRESS))
#define DDRC_REG ((volatile reg_t*)(DDRC_ADDRESS))
#define DDRD_REG ((volatile reg_t*)(DDRD_ADDRESS))


uint8 DIO_setPinDirection(reg_t* copy_DIO_reg,uint8 copy_DIO_pin,uint8 copy_DIO_direction);
uint8 DIO_setPinValue(reg_t* copy_DIO_reg,uint8 copy_DIO_pin,uint8 copy_DIO_value);
uint8 DIO_readPinValue(reg_t* copy_DIO_reg,uint8 copy_DIO_pin,uint8 *copy_DIO_pValue);

uint8 DIO_setPortDirection(reg_t* copy_DIO_reg,uint8 copy_DIO_direction);
uint8 DIO_setPortValue(reg_t* copy_DIO_reg,uint8 copy_DIO_value);
uint8 DIO_readPortValue(reg_t* copy_DIO_reg,uint8 *copy_DIO_pValue);
#endif /* DIO_INTERFACE_H_ */
