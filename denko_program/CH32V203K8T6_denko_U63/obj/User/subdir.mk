################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/ch32v203_GPIO_mylib.c \
../User/ch32v20x_it.c \
../User/main.c \
../User/system_ch32v20x.c 

OBJS += \
./User/ch32v203_GPIO_mylib.o \
./User/ch32v20x_it.o \
./User/main.o \
./User/system_ch32v20x.o 

C_DEPS += \
./User/ch32v203_GPIO_mylib.d \
./User/ch32v20x_it.d \
./User/main.d \
./User/system_ch32v20x.d 


# Each subdirectory must supply rules for building sources it contributes
User/%.o: ../User/%.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\User\share\NPC\MounRiver(WCH)\CH32V203K8T6\denko\CH32V203K8T6_denko_U63\Debug" -I"C:\Users\User\share\NPC\MounRiver(WCH)\CH32V203K8T6\denko\CH32V203K8T6_denko_U63\Core" -I"C:\Users\User\share\NPC\MounRiver(WCH)\CH32V203K8T6\denko\CH32V203K8T6_denko_U63\User" -I"C:\Users\User\share\NPC\MounRiver(WCH)\CH32V203K8T6\denko\CH32V203K8T6_denko_U63\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

