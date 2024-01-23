################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorLock_Indication.c \
../AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorSensor_LedActuator_Abs.c 

OBJS += \
./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorLock_Indication.o \
./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorSensor_LedActuator_Abs.o 

C_DEPS += \
./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorLock_Indication.d \
./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorSensor_LedActuator_Abs.d 


# Each subdirectory must supply rules for building sources it contributes
AUTOSAR_Implementation/RTE_GeneratedFiles/%.o AUTOSAR_Implementation/RTE_GeneratedFiles/%.su: ../AUTOSAR_Implementation/RTE_GeneratedFiles/%.c AUTOSAR_Implementation/RTE_GeneratedFiles/subdir.mk
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/MCAL/Inc" -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/AUTOSAR_Implementation/AutosarIncludeFiles" -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/HAL/SevenSegment" -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/HAL/KeyPad" -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/HAL/LCD" -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/AUTOSAR_Implementation/MCAL" -I../Inc -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/HAL/EEPROM" -I"C:/Users/Abdel/OneDrive/Documents/EmbeddedSystemsInDepth/AUTOSAR_InDepth/STM32CubeIde_Workspace/Door_Lock_Indicaton/AUTOSAR_Implementation/RTE_GeneratedFiles" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-AUTOSAR_Implementation-2f-RTE_GeneratedFiles

clean-AUTOSAR_Implementation-2f-RTE_GeneratedFiles:
	-$(RM) ./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorLock_Indication.d ./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorLock_Indication.o ./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorLock_Indication.su ./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorSensor_LedActuator_Abs.d ./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorSensor_LedActuator_Abs.o ./AUTOSAR_Implementation/RTE_GeneratedFiles/Rte_SWC_DoorSensor_LedActuator_Abs.su

.PHONY: clean-AUTOSAR_Implementation-2f-RTE_GeneratedFiles

