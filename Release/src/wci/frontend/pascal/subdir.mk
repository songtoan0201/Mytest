################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/pascal/PascalError.cpp \
../src/wci/frontend/pascal/PascalErrorHandler.cpp \
../src/wci/frontend/pascal/PascalParserTD.cpp \
../src/wci/frontend/pascal/PascalScanner.cpp \
../src/wci/frontend/pascal/PascalToken.cpp 

OBJS += \
./src/wci/frontend/pascal/PascalError.o \
./src/wci/frontend/pascal/PascalErrorHandler.o \
./src/wci/frontend/pascal/PascalParserTD.o \
./src/wci/frontend/pascal/PascalScanner.o \
./src/wci/frontend/pascal/PascalToken.o 

CPP_DEPS += \
./src/wci/frontend/pascal/PascalError.d \
./src/wci/frontend/pascal/PascalErrorHandler.d \
./src/wci/frontend/pascal/PascalParserTD.d \
./src/wci/frontend/pascal/PascalScanner.d \
./src/wci/frontend/pascal/PascalToken.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/pascal/%.o: ../src/wci/frontend/pascal/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


