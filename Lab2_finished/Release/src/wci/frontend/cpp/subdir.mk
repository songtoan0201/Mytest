################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/cpp/cppError.cpp \
../src/wci/frontend/cpp/cppErrorHandler.cpp \
../src/wci/frontend/cpp/cppParserTD.cpp \
../src/wci/frontend/cpp/cppScanner.cpp \
../src/wci/frontend/cpp/cppToken.cpp 

OBJS += \
./src/wci/frontend/cpp/cppError.o \
./src/wci/frontend/cpp/cppErrorHandler.o \
./src/wci/frontend/cpp/cppParserTD.o \
./src/wci/frontend/cpp/cppScanner.o \
./src/wci/frontend/cpp/cppToken.o 

CPP_DEPS += \
./src/wci/frontend/cpp/cppError.d \
./src/wci/frontend/cpp/cppErrorHandler.d \
./src/wci/frontend/cpp/cppParserTD.d \
./src/wci/frontend/cpp/cppScanner.d \
./src/wci/frontend/cpp/cppToken.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/cpp/%.o: ../src/wci/frontend/cpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


