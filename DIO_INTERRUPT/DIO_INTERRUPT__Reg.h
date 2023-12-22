/*
 * Author   : Ahmed Mohamed Aboud
 * Linkedin :https://www.linkedin.com/in/ahmed-mohamed-aboud-33b2471b1/
 * File Name: DIO_INTERRUPT__Reg.h
 * Date: 17 Dec 2023
 */

#ifndef DIO_INTERRUPT__REG_H_
#define DIO_INTERRUPT__REG_H_

#define GIFR	(*(uint8 *)0x5A)
#define GICR	(*(uint8 *)0x5B)
#define MCUCR	(*(uint8 *)0x55)	//for INT0 and INT1
#define MCUCSR	(*(uint8 *)0x54)	//for INT2


#endif /* DIO_INTERRUPT__REG_H_ */
