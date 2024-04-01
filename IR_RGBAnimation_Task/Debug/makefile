################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/MCAL/SYSTICK/subdir.mk
-include Src/MCAL/SCB/subdir.mk
-include Src/MCAL/RCC/subdir.mk
-include Src/MCAL/NVIC/subdir.mk
-include Src/MCAL/GPIO/subdir.mk
-include Src/MCAL/EXTI/subdir.mk
-include Src/HAL/RGB_LED/subdir.mk
-include Src/HAL/LEDMAT/subdir.mk
-include Src/HAL/LED/subdir.mk
-include Src/HAL/IR_Receiver/subdir.mk
-include Src/HAL/BUTTON/subdir.mk
-include Src/subdir.mk
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


BUILD_ARTIFACT_NAME := IR_RGBAnimation_Task
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
IR_RGBAnimation_Task.elf \

MAP_FILES += \
IR_RGBAnimation_Task.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
IR_RGBAnimation_Task.list \

OBJCOPY_HEX += \
IR_RGBAnimation_Task.hex \


# All Target
all: main-build

# Main-build Target
main-build: IR_RGBAnimation_Task.elf secondary-outputs

# Tool invocations
IR_RGBAnimation_Task.elf IR_RGBAnimation_Task.map: $(OBJS) $(USER_OBJS) E:\The\ Courses\Embedded\ Systems\IMT\ ARM\ Diploma\IMT\ Tasks\IR_RGBAnimation_Task\STM32F401CCUX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "IR_RGBAnimation_Task.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\The Courses\Embedded Systems\IMT ARM Diploma\IMT Tasks\IR_RGBAnimation_Task\STM32F401CCUX_FLASH.ld" --specs=nosys.specs -Wl,-Map="IR_RGBAnimation_Task.map" -Wl,--gc-sections -static -specs=rdimon.specs --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

IR_RGBAnimation_Task.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "IR_RGBAnimation_Task.list"
	@echo 'Finished building: $@'
	@echo ' '

IR_RGBAnimation_Task.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "IR_RGBAnimation_Task.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) IR_RGBAnimation_Task.elf IR_RGBAnimation_Task.hex IR_RGBAnimation_Task.list IR_RGBAnimation_Task.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
