/*
 * DIO_Reg.h
 *
 *  Created on: 10 Dec 2023
 *      Author: user
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#define PORTA (*(volatile uint8 *))0x3A
#define PORTB (*(volatile uint8 *))0x37
#define PORTC (*(volatile uint8 *))0x34
#define PORTD (*(volatile uint8 *))0x31

#define DDRA (*(volatile uint8 *))0x3B
#define DDRB (*(volatile uint8 *))0x38
#define DDRC (*(volatile uint8 *))0x35
#define DDRD (*(volatile uint8 *))0x32

#define PINA ((*(volatile uint8 *))0X39)
#define PINB ((*(volatile uint8 *))0X36)
#define PINC ((*(volatile uint8 *))0X33)
#define PIND ((*(volatile uint8 *))0X30)

#define PORTA_ADDRESS 0x3A
#define PORTB_ADDRESS 0x37
#define PORTC_ADDRESS 0x34
#define PORTD_ADDRESS 0x31

#define DDRA_ADDRESS 0x3B
#define DDRB_ADDRESS 0x38
#define DDRC_ADDRESS 0x35
#define DDRD_ADDRESS 0x32

#define PINA_ADDRESS 0X39
#define PINB_ADDRESS 0X36
#define PINC_ADDRESS 0X33
#define PIND_ADDRESS 0X30

#endif /* DIO_REG_H_ */
