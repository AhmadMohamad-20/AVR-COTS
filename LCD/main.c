
#include <util/delay.h>
#include "DIO/STD_Types.h"
#include "DIO/bitmath.h"
#include "DIO/DIO_Interface.h"

#include "LCD_cfg.h"
#include "LCD_Reg.h"
#include "LCD_Private.h"
#include "LCD_Interface.h"

int main(void)
{
	//LCD_init_8bit();
	LCD_init_4bit();
}
