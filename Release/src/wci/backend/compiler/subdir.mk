################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/backend/compiler/CodeGenerator.cpp 

OBJS += \
./src/wci/backend/compiler/CodeGenerator.o 

CPP_DEPS += \
./src/wci/backend/compiler/CodeGenerator.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/backend/compiler/%.o: ../src/wci/backend/compiler/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


