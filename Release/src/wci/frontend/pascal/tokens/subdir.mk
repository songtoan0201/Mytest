################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/pascal/tokens/PascalErrorToken.cpp \
../src/wci/frontend/pascal/tokens/PascalNumberToken.cpp \
../src/wci/frontend/pascal/tokens/PascalSpecialSymbolToken.cpp \
../src/wci/frontend/pascal/tokens/PascalStringToken.cpp \
../src/wci/frontend/pascal/tokens/PascalWordToken.cpp 

OBJS += \
./src/wci/frontend/pascal/tokens/PascalErrorToken.o \
./src/wci/frontend/pascal/tokens/PascalNumberToken.o \
./src/wci/frontend/pascal/tokens/PascalSpecialSymbolToken.o \
./src/wci/frontend/pascal/tokens/PascalStringToken.o \
./src/wci/frontend/pascal/tokens/PascalWordToken.o 

CPP_DEPS += \
./src/wci/frontend/pascal/tokens/PascalErrorToken.d \
./src/wci/frontend/pascal/tokens/PascalNumberToken.d \
./src/wci/frontend/pascal/tokens/PascalSpecialSymbolToken.d \
./src/wci/frontend/pascal/tokens/PascalStringToken.d \
./src/wci/frontend/pascal/tokens/PascalWordToken.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/pascal/tokens/%.o: ../src/wci/frontend/pascal/tokens/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


