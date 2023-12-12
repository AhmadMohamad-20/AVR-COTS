/*
 * STD_Types.h
 *
 *  Created on: 8 Dec 2023
 *      Author: user
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

typedef signed char sint8;
typedef signed short sint16;
typedef signed long sint32;
typedef signed long long sint64;


typedef union
{
	uint8 regData;
	struct
	{
		uint8 pin0 : 1;
		uint8 pin1 : 1;
		uint8 pin2 : 1;
		uint8 pin3 : 1;
		uint8 pin4 : 1;
		uint8 pin5 : 1;
		uint8 pin6 : 1;
		uint8 pin7 : 1;

	}pins;
}reg_t;

#define NULL (void *)(0)

#define TRUE 1
#define FALSE 0

#define OK_STAT		1
#define NOT_OK_STAT	0
#endif /* STD_TYPES_H_ */
