/*
 * Author   : Ahmed Mohamed Aboud
 * Linkedin :https://www.linkedin.com/in/ahmed-mohamed-aboud-33b2471b1/
 * File Name: DIO_INTERRUPT_Program.c
 * Date: 17 Dec 2023
 */

#include "General_Interrupts/DIO/STD_Types.h"
#include "General_Interrupts/DIO/bitmath.h"

#include "General_Interrupts/DIO/DIO_Interface.h"
#include "General_Interrupts/GEN_INTERRUPT__Interacing.h"
#include "DIO_INTERRUPT_CFG.h"
#include "DIO_INTERRUPT__Reg.h"
#include "DIO_INTERRUPT__Private.h"
#include "DIO_INTERRUPT__Interacing.h"


void DIO_INTERRUPT_enableINT0()
{
	GENERAL_INTERRUPT_enableInterrupt();
	SET_BIT(GICR,INT0_PIN);

#if (INT0_TRIGGRING_METHOD == FALLING_EDGE_TRIGGERING)
	SET_BIT(MCUCR,PIN1);
	CLEAR_BIT(MCUCR,PIN0);
#elif (INT0_TRIGGRING_METHOD == RISING_EDGE_TRIGGERING)
	SET_BIT(MCUCR,PIN1);
	SET_BIT(MCUCR,PIN0);
#elif (INT0_TRIGGRING_METHOD == LOW_LEVEL_TRIGGERING)
	CLEAR_BIT(MCUCR,PIN1);
	CLEAR_BIT(MCUCR,PIN0);
#elif (INT0_TRIGGRING_METHOD == ANY_EDGE_TRIGGERING)
	CLEAR_BIT(MCUCR,PIN1);
	SET_BIT(MCUCR,PIN0);
#else
#error ("the triggering method isn't valid or INT0")
#endif
}

void DIO_INTERRUPT_enableINT1()
{
	GENERAL_INTERRUPT_enableInterrupt();
	SET_BIT(GICR,INT1_PIN);

#if (INT1_TRIGGRING_METHOD == FALLING_EDGE_TRIGGERING)
	SET_BIT(MCUCR,PIN3);
	CLEAR_BIT(MCUCR,PIN2);
#elif (INT1_TRIGGRING_METHOD == RISING_EDGE_TRIGGERING)
	SET_BIT(MCUCR,PIN3);
	SET_BIT(MCUCR,PIN2);
#elif (INT1_TRIGGRING_METHOD == LOW_LEVEL_TRIGGERING)
	CLEAR_BIT(MCUCR,PIN3);
	CLEAR_BIT(MCUCR,PIN2);
#elif (INT1_TRIGGRING_METHOD == ANY_EDGE_TRIGGERING)
	CLEAR_BIT(MCUCR,PIN3);
	SET_BIT(MCUCR,PIN2);
#else
#error ("the triggering method isn't valid or INT1")
#endif
}

void DIO_INTERRUPT_enableINT2()
{
	GENERAL_INTERRUPT_enableInterrupt();
	SET_BIT(GICR,INT1_PIN);

#if (INT1_TRIGGRING_METHOD == FALLING_EDGE_TRIGGERING)
	CLEAR_BIT(MCUCSR,PIN6);
#elif (INT1_TRIGGRING_METHOD == RISING_EDGE_TRIGGERING)
	SET_BIT(MCUCR,PIN6);
#else
#error ("the triggering method isn't valid or INT2")
#endif
}



