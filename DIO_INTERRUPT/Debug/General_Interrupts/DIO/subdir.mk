################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../General_Interrupts/DIO/DIO_Program.c 

OBJS += \
./General_Interrupts/DIO/DIO_Program.o 

C_DEPS += \
./General_Interrupts/DIO/DIO_Program.d 


# Each subdirectory must supply rules for building sources it contributes
General_Interrupts/DIO/%.o: ../General_Interrupts/DIO/%.c General_Interrupts/DIO/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


