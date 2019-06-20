################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./FWlib/Source/DSP2833x_usDelay.obj" \
"./FWlib/Source/DSP2833x_Xintf.obj" \
"./FWlib/Source/DSP2833x_SysCtrl.obj" \
"./FWlib/Source/DSP2833x_Spi.obj" \
"./FWlib/Source/DSP2833x_Sci.obj" \
"./FWlib/Source/DSP2833x_PieVect.obj" \
"./FWlib/Source/DSP2833x_PieCtrl.obj" \
"./FWlib/Source/DSP2833x_MemCopy.obj" \
"./FWlib/Source/DSP2833x_Mcbsp.obj" \
"./FWlib/Source/DSP2833x_I2C.obj" \
"./FWlib/Source/DSP2833x_Gpio.obj" \
"./FWlib/Source/DSP2833x_GlobalVariableDefs.obj" \
"./FWlib/Source/DSP2833x_EQep.obj" \
"./FWlib/Source/DSP2833x_EPwm.obj" \
"./FWlib/Source/DSP2833x_ECap.obj" \
"./FWlib/Source/DSP2833x_ECan.obj" \
"./FWlib/Source/DSP2833x_DisInt.obj" \
"./FWlib/Source/DSP2833x_DefaultIsr.obj" \
"./FWlib/Source/DSP2833x_DMA.obj" \
"./FWlib/Source/DSP2833x_DBGIER.obj" \
"./FWlib/Source/DSP2833x_CpuTimers.obj" \
"./FWlib/Source/DSP2833x_CodeStartBranch.obj" \
"./FWlib/Source/DSP2833x_CSMPasswords.obj" \
"./FWlib/Source/DSP2833x_Adc.obj" \
"./FWlib/Source/DSP2833x_ADC_cal.obj" \
"./USER/main.obj" \
"./USER/System.obj" \
"./USER/LED.obj" \
"../Libraries/rts2800_fpu32.lib" \
"../Libraries/rts2800_ml.lib" \
"../Cmd/28335_RAM_lnk.cmd" \
"../Cmd/DSP2833x_Headers_nonBIOS.cmd" \
-l"libc.a" \
-l"F:\DSP Learning\DSP workspace_v6_0\DSP Samples_v6.0\F2833x Project Template\Libraries\rts2800_ml.lib" \
-l"F:\DSP Learning\DSP workspace_v6_0\DSP Samples_v6.0\F2833x Project Template\Libraries\rts2800_fpu32.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include USER/subdir_vars.mk
-include Libraries/subdir_vars.mk
-include FWlib/Source/subdir_vars.mk
-include Cmd/subdir_vars.mk
-include USER/subdir_rules.mk
-include Libraries/subdir_rules.mk
-include FWlib/Source/subdir_rules.mk
-include Cmd/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
F2833x\ Project\ Template.out \

EXE_OUTPUTS__QUOTED += \
"F2833x Project Template.out" \

BIN_OUTPUTS += \
F2833x\ Project\ Template.hex \

BIN_OUTPUTS__QUOTED += \
"F2833x Project Template.hex" \


# All Target
all: F2833x\ Project\ Template.out

# Tool invocations
F2833x\ Project\ Template.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -g --diag_warning=225 --display_error_number --diag_wrap=off -z -m"F2833x Project Template.map" --stack_size=0x300 --warn_sections -i"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/lib" -i"F:/DSP Learning/DSP workspace_v6_0/DSP Samples_v6.0/F2833x Project Template/Libraries" -i"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/include" --reread_libs --display_error_number --diag_wrap=off --xml_link_info="F2833x Project Template_linkInfo.xml" --rom_model -o "F2833x Project Template.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

F2833x\ Project\ Template.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C2000 Hex Utility'
	"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/bin/hex2000"  -o "F2833x Project Template.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "USER\LED.pp" "USER\System.pp" "USER\main.pp" "FWlib\Source\DSP2833x_Adc.pp" "FWlib\Source\DSP2833x_CpuTimers.pp" "FWlib\Source\DSP2833x_DMA.pp" "FWlib\Source\DSP2833x_DefaultIsr.pp" "FWlib\Source\DSP2833x_ECan.pp" "FWlib\Source\DSP2833x_ECap.pp" "FWlib\Source\DSP2833x_EPwm.pp" "FWlib\Source\DSP2833x_EQep.pp" "FWlib\Source\DSP2833x_GlobalVariableDefs.pp" "FWlib\Source\DSP2833x_Gpio.pp" "FWlib\Source\DSP2833x_I2C.pp" "FWlib\Source\DSP2833x_Mcbsp.pp" "FWlib\Source\DSP2833x_MemCopy.pp" "FWlib\Source\DSP2833x_PieCtrl.pp" "FWlib\Source\DSP2833x_PieVect.pp" "FWlib\Source\DSP2833x_Sci.pp" "FWlib\Source\DSP2833x_Spi.pp" "FWlib\Source\DSP2833x_SysCtrl.pp" "FWlib\Source\DSP2833x_Xintf.pp" 
	-$(RM) "USER\LED.obj" "USER\System.obj" "USER\main.obj" "FWlib\Source\DSP2833x_ADC_cal.obj" "FWlib\Source\DSP2833x_Adc.obj" "FWlib\Source\DSP2833x_CSMPasswords.obj" "FWlib\Source\DSP2833x_CodeStartBranch.obj" "FWlib\Source\DSP2833x_CpuTimers.obj" "FWlib\Source\DSP2833x_DBGIER.obj" "FWlib\Source\DSP2833x_DMA.obj" "FWlib\Source\DSP2833x_DefaultIsr.obj" "FWlib\Source\DSP2833x_DisInt.obj" "FWlib\Source\DSP2833x_ECan.obj" "FWlib\Source\DSP2833x_ECap.obj" "FWlib\Source\DSP2833x_EPwm.obj" "FWlib\Source\DSP2833x_EQep.obj" "FWlib\Source\DSP2833x_GlobalVariableDefs.obj" "FWlib\Source\DSP2833x_Gpio.obj" "FWlib\Source\DSP2833x_I2C.obj" "FWlib\Source\DSP2833x_Mcbsp.obj" "FWlib\Source\DSP2833x_MemCopy.obj" "FWlib\Source\DSP2833x_PieCtrl.obj" "FWlib\Source\DSP2833x_PieVect.obj" "FWlib\Source\DSP2833x_Sci.obj" "FWlib\Source\DSP2833x_Spi.obj" "FWlib\Source\DSP2833x_SysCtrl.obj" "FWlib\Source\DSP2833x_Xintf.obj" "FWlib\Source\DSP2833x_usDelay.obj" 
	-$(RM) "FWlib\Source\DSP2833x_ADC_cal.pp" "FWlib\Source\DSP2833x_CSMPasswords.pp" "FWlib\Source\DSP2833x_CodeStartBranch.pp" "FWlib\Source\DSP2833x_DBGIER.pp" "FWlib\Source\DSP2833x_DisInt.pp" "FWlib\Source\DSP2833x_usDelay.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

