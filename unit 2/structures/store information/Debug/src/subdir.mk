################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/store\ information.c 

OBJS += \
./src/store\ information.o 

C_DEPS += \
./src/store\ information.d 


# Each subdirectory must supply rules for building sources it contributes
src/store\ information.o: ../src/store\ information.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/store information.d" -MT"src/store\ information.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


