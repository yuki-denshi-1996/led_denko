################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include User/subdir.mk
-include Startup/subdir.mk
-include Peripheral/src/subdir.mk
-include Debug/subdir.mk
-include Core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
CH32V203K8T6_denko_main.hex \

SECONDARY_LIST += \
CH32V203K8T6_denko_main.lst \

SECONDARY_SIZE += \
CH32V203K8T6_denko_main.siz \


# All Target
all: CH32V203K8T6_denko_main.elf secondary-outputs

# Tool invocations
CH32V203K8T6_denko_main.elf: $(OBJS) $(USER_OBJS)
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -T "C:\Users\User\share\NPC\MounRiver(WCH)\CH32V203K8T6\denko\CH32V203K8T6_denko_main\Ld\Link.ld" -nostartfiles -Xlinker --gc-sections -Wl,-Map,"CH32V203K8T6_denko_main.map" --specs=nano.specs --specs=nosys.specs -o "CH32V203K8T6_denko_main.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@	@
CH32V203K8T6_denko_main.hex: CH32V203K8T6_denko_main.elf
	@	riscv-none-embed-objcopy -O ihex "CH32V203K8T6_denko_main.elf"  "CH32V203K8T6_denko_main.hex"
	@	@
CH32V203K8T6_denko_main.lst: CH32V203K8T6_denko_main.elf
	@	riscv-none-embed-objdump --all-headers --demangle --disassemble -M xw "CH32V203K8T6_denko_main.elf" > "CH32V203K8T6_denko_main.lst"
	@	@
CH32V203K8T6_denko_main.siz: CH32V203K8T6_denko_main.elf
	@	riscv-none-embed-size --format=berkeley "CH32V203K8T6_denko_main.elf"
	@	@
# Other Targets
clean:
	-$(RM) $(ASM_UPPER_DEPS)$(OBJS)$(SECONDARY_FLASH)$(SECONDARY_LIST)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS) CH32V203K8T6_denko_main.elf
	-@
secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
