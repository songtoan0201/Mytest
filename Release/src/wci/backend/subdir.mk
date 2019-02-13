################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/backend/Backend.cpp \
../src/wci/backend/BackendFactory.cpp 

OBJS += \
./src/wci/backend/Backend.o \
./src/wci/backend/BackendFactory.o 

CPP_DEPS += \
./src/wci/backend/Backend.d \
./src/wci/backend/BackendFactory.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/backend/%.o: ../src/wci/backend/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


