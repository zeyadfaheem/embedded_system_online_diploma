################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/prob\ 2.c 

OBJS += \
./src/prob\ 2.o 

C_DEPS += \
./src/prob\ 2.d 


# Each subdirectory must supply rules for building sources it contributes
src/prob\ 2.o: ../src/prob\ 2.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/prob 2.d" -MT"src/prob\ 2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


