################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../General_Interrupts/GEN_INTERRUPT__Program.c 

OBJS += \
./General_Interrupts/GEN_INTERRUPT__Program.o 

C_DEPS += \
./General_Interrupts/GEN_INTERRUPT__Program.d 


# Each subdirectory must supply rules for building sources it contributes
General_Interrupts/%.o: ../General_Interrupts/%.c General_Interrupts/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


