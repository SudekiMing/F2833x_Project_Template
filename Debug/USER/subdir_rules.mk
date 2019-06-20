################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
USER/LED.obj: ../USER/LED.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="F:/DSP Learning/DSP workspace_v6_0/DSP Samples_v6.0/F2833x Project Template/FWlib/Include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="USER/LED.pp" --obj_directory="USER" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

USER/System.obj: ../USER/System.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="F:/DSP Learning/DSP workspace_v6_0/DSP Samples_v6.0/F2833x Project Template/FWlib/Include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="USER/System.pp" --obj_directory="USER" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

USER/main.obj: ../USER/main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="F:/Program Files (x86)/CCS6.0/ccsv6/tools/compiler/c2000_6.2.5/include" --include_path="F:/DSP Learning/DSP workspace_v6_0/DSP Samples_v6.0/F2833x Project Template/FWlib/Include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="USER/main.pp" --obj_directory="USER" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


