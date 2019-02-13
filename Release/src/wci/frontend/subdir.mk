################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/FrontendFactory.cpp \
../src/wci/frontend/Parser.cpp \
../src/wci/frontend/Scanner.cpp \
../src/wci/frontend/Source.cpp \
../src/wci/frontend/Token.cpp 

OBJS += \
./src/wci/frontend/FrontendFactory.o \
./src/wci/frontend/Parser.o \
./src/wci/frontend/Scanner.o \
./src/wci/frontend/Source.o \
./src/wci/frontend/Token.o 

CPP_DEPS += \
./src/wci/frontend/FrontendFactory.d \
./src/wci/frontend/Parser.d \
./src/wci/frontend/Scanner.d \
./src/wci/frontend/Source.d \
./src/wci/frontend/Token.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/%.o: ../src/wci/frontend/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


