################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/insert\ element\ in\ array.c 

OBJS += \
./src/insert\ element\ in\ array.o 

C_DEPS += \
./src/insert\ element\ in\ array.d 


# Each subdirectory must supply rules for building sources it contributes
src/insert\ element\ in\ array.o: ../src/insert\ element\ in\ array.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/insert element in array.d" -MT"src/insert\ element\ in\ array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


