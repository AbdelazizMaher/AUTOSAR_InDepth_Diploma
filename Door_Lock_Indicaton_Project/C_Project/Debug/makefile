################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include MCAL/Src/subdir.mk
-include HAL/SevenSegment/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KeyPad/subdir.mk
-include HAL/EEPROM/subdir.mk
-include AUTOSAR_Implementation/SWCs/subdir.mk
-include AUTOSAR_Implementation/RTE_GeneratedFiles/subdir.mk
-include AUTOSAR_Implementation/MCAL/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Door_Lock_Indicaton
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Door_Lock_Indicaton.axf \

MAP_FILES += \
Door_Lock_Indicaton.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Door_Lock_Indicaton.list \


# All Target
all: main-build

# Main-build Target
main-build: Door_Lock_Indicaton.axf secondary-outputs

# Tool invocations
Door_Lock_Indicaton.axf Door_Lock_Indicaton.map: $(OBJS) $(USER_OBJS) C:\Users\Abdel\OneDrive\Documents\EmbeddedSystemsInDepth\AUTOSAR_InDepth\STM32CubeIde_Workspace\Door_Lock_Indicaton\STM32F103C6TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -gdwarf-2 -o "Door_Lock_Indicaton.axf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Abdel\OneDrive\Documents\EmbeddedSystemsInDepth\AUTOSAR_InDepth\STM32CubeIde_Workspace\Door_Lock_Indicaton\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Door_Lock_Indicaton.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Door_Lock_Indicaton.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Door_Lock_Indicaton.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Door_Lock_Indicaton.axf Door_Lock_Indicaton.list Door_Lock_Indicaton.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
