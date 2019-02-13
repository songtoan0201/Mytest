################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/backend/interpreter/Executor.cpp 

OBJS += \
./src/wci/backend/interpreter/Executor.o 

CPP_DEPS += \
./src/wci/backend/interpreter/Executor.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/backend/interpreter/%.o: ../src/wci/backend/interpreter/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


