################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/cpp/tokens/cppCharacterToken.cpp \
../src/wci/frontend/cpp/tokens/cppErrorToken.cpp \
../src/wci/frontend/cpp/tokens/cppNumberToken.cpp \
../src/wci/frontend/cpp/tokens/cppSpecialSymbolToken.cpp \
../src/wci/frontend/cpp/tokens/cppStringToken.cpp \
../src/wci/frontend/cpp/tokens/cppWordToken.cpp 

OBJS += \
./src/wci/frontend/cpp/tokens/cppCharacterToken.o \
./src/wci/frontend/cpp/tokens/cppErrorToken.o \
./src/wci/frontend/cpp/tokens/cppNumberToken.o \
./src/wci/frontend/cpp/tokens/cppSpecialSymbolToken.o \
./src/wci/frontend/cpp/tokens/cppStringToken.o \
./src/wci/frontend/cpp/tokens/cppWordToken.o 

CPP_DEPS += \
./src/wci/frontend/cpp/tokens/cppCharacterToken.d \
./src/wci/frontend/cpp/tokens/cppErrorToken.d \
./src/wci/frontend/cpp/tokens/cppNumberToken.d \
./src/wci/frontend/cpp/tokens/cppSpecialSymbolToken.d \
./src/wci/frontend/cpp/tokens/cppStringToken.d \
./src/wci/frontend/cpp/tokens/cppWordToken.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/cpp/tokens/%.o: ../src/wci/frontend/cpp/tokens/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


