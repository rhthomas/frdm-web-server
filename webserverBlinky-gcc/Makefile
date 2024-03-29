# This file was automagically generated by mbed.org. For more information, 
# see http://mbed.org/handbook/Exporting-to-GCC-ARM-Embedded

###############################################################################
# Boiler-plate

# cross-platform directory manipulation
ifeq ($(shell echo $$OS),$$OS)
    MAKEDIR = if not exist "$(1)" mkdir "$(1)"
    RM = rmdir /S /Q "$(1)"
else
    MAKEDIR = '$(SHELL)' -c "mkdir -p \"$(1)\""
    RM = '$(SHELL)' -c "rm -rf \"$(1)\""
endif

OBJDIR := BUILD
# Move to the build directory
ifeq (,$(filter $(OBJDIR),$(notdir $(CURDIR))))
.SUFFIXES:
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
MAKETARGET = '$(MAKE)' --no-print-directory -C $(OBJDIR) -f '$(mkfile_path)' \
		'SRCDIR=$(CURDIR)' $(MAKECMDGOALS)
.PHONY: $(OBJDIR) clean
all:
	+@$(call MAKEDIR,$(OBJDIR))
	+@$(MAKETARGET)
$(OBJDIR): all
Makefile : ;
% :: $(OBJDIR) ; :
clean :
	$(call RM,$(OBJDIR))

else

# trick rules into thinking we are in the root, when we are in the bulid dir
VPATH = ..

# Boiler-plate
###############################################################################
# Project settings

PROJECT := webserverBlinky


# Project settings
###############################################################################
# Objects and Paths

OBJECTS += PPP-Blinky/ppp-blinky.o
OBJECTS += SHA1/sha1.o
OBJECTS += main.o

 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/PeripheralPins.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/analogin_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/analogout_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/dma_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/flash_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_adc16.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_clock.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_clock_config.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_cmp.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_cmt.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_common.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_cop.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_dac.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_dcdc.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_dmamux.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_dspi.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_dspi_edma.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_edma.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_flash.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_gpio.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_i2c.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_i2c_edma.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_llwu.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_lptmr.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_lpuart.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_lpuart_edma.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_ltc.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_ltc_edma.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_pit.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_pmc.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_rcm.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_rtc.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_sim.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_smc.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_tpm.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_trng.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_tsi_v4.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/fsl_vref.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/gpio_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/gpio_irq_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/i2c_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/lp_ticker.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/mbed_board.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/mbed_overrides.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/mbed_retarget.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/mbed_sdk_boot.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/pinmap.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/port_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/pwmout_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/rtc_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/serial_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/sleep.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/spi_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/startup_MKW41Z4.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/system_MKW41Z4.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/trng_api.o
 SYS_OBJECTS += mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/us_ticker.o

INCLUDE_PATHS += -I../
INCLUDE_PATHS += -I../.
INCLUDE_PATHS += -I../PPP-Blinky
INCLUDE_PATHS += -I../SHA1
INCLUDE_PATHS += -I../mbed/.
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z/TARGET_FRDM
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z/device
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z/drivers
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/api
INCLUDE_PATHS += -I../mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM
INCLUDE_PATHS += -I../mbed/drivers
INCLUDE_PATHS += -I../mbed/hal
INCLUDE_PATHS += -I../mbed/platform

LIBRARY_PATHS := -L../mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM 
LIBRARIES := -lmbed 
LINKER_SCRIPT ?= ../mbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM/MKW41Z512xxx4.ld

# Objects and Paths
###############################################################################
# Tools and Flags

AS      = 'arm-none-eabi-gcc' '-x' 'assembler-with-cpp' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m0plus' '-mthumb'
CC      = 'arm-none-eabi-gcc' '-std=gnu99' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m0plus' '-mthumb'
CPP     = 'arm-none-eabi-g++' '-std=gnu++98' '-fno-rtti' '-Wvla' '-c' '-Wall' '-Wextra' '-Wno-unused-parameter' '-Wno-missing-field-initializers' '-fmessage-length=0' '-fno-exceptions' '-fno-builtin' '-ffunction-sections' '-fdata-sections' '-funsigned-char' '-MMD' '-fno-delete-null-pointer-checks' '-fomit-frame-pointer' '-Os' '-mcpu=cortex-m0plus' '-mthumb'
LD      = 'arm-none-eabi-gcc'
ELF2BIN = 'arm-none-eabi-objcopy'
PREPROC = 'arm-none-eabi-cpp' '-E' '-P' '-Wl,--gc-sections' '-Wl,--wrap,main' '-Wl,--wrap,_malloc_r' '-Wl,--wrap,_free_r' '-Wl,--wrap,_realloc_r' '-Wl,--wrap,_memalign_r' '-Wl,--wrap,_calloc_r' '-Wl,--wrap,exit' '-Wl,--wrap,atexit' '-Wl,-n' '-mcpu=cortex-m0plus' '-mthumb'


C_FLAGS += -std=gnu99
C_FLAGS += -DCPU_MKW41Z512VHT4
C_FLAGS += -D__MBED__=1
C_FLAGS += -DDEVICE_I2CSLAVE=1
C_FLAGS += -DTARGET_LIKE_MBED
C_FLAGS += -DTARGET_Freescale
C_FLAGS += -DDEVICE_PORTINOUT=1
C_FLAGS += -D__MBED_CMSIS_RTOS_CM
C_FLAGS += -DDEVICE_RTC=1
C_FLAGS += -DTOOLCHAIN_object
C_FLAGS += -D__CMSIS_RTOS
C_FLAGS += -DFSL_RTOS_MBED
C_FLAGS += -DTOOLCHAIN_GCC
C_FLAGS += -DTARGET_CORTEX_M
C_FLAGS += -DTARGET_KSDK2_MCUS
C_FLAGS += -DTARGET_M0P
C_FLAGS += -DDEVICE_ANALOGOUT=1
C_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
C_FLAGS += -DDEVICE_SERIAL=1
C_FLAGS += -DDEVICE_INTERRUPTIN=1
C_FLAGS += -DTARGET_CORTEX
C_FLAGS += -DDEVICE_I2C=1
C_FLAGS += -DDEVICE_PORTOUT=1
C_FLAGS += -DMBED_BUILD_TIMESTAMP=1511730456.72
C_FLAGS += -D__CORTEX_M0PLUS
C_FLAGS += -DDEVICE_STDIO_MESSAGES=1
C_FLAGS += -DTARGET_FF_ARDUINO
C_FLAGS += -DTARGET_RELEASE
C_FLAGS += -DDEVICE_TRNG=1
C_FLAGS += -DARM_MATH_CM0PLUS
C_FLAGS += -DDEVICE_PORTIN=1
C_FLAGS += -DDEVICE_SLEEP=1
C_FLAGS += -DTOOLCHAIN_GCC_ARM
C_FLAGS += -DTARGET_MCUXpresso_MCUS
C_FLAGS += -DDEVICE_SPI=1
C_FLAGS += -DDEVICE_SPISLAVE=1
C_FLAGS += -DDEVICE_ANALOGIN=1
C_FLAGS += -DDEVICE_PWMOUT=1
C_FLAGS += -DTARGET_KW41Z
C_FLAGS += -DTARGET_FRDM
C_FLAGS += -DTARGET_LIKE_CORTEX_M0
C_FLAGS += -include
C_FLAGS += mbed_config.h

CXX_FLAGS += -std=gnu++98
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -DCPU_MKW41Z512VHT4
CXX_FLAGS += -D__MBED__=1
CXX_FLAGS += -DDEVICE_I2CSLAVE=1
CXX_FLAGS += -DTARGET_LIKE_MBED
CXX_FLAGS += -DTARGET_Freescale
CXX_FLAGS += -DDEVICE_PORTINOUT=1
CXX_FLAGS += -D__MBED_CMSIS_RTOS_CM
CXX_FLAGS += -DDEVICE_RTC=1
CXX_FLAGS += -DTOOLCHAIN_object
CXX_FLAGS += -D__CMSIS_RTOS
CXX_FLAGS += -DFSL_RTOS_MBED
CXX_FLAGS += -DTOOLCHAIN_GCC
CXX_FLAGS += -DTARGET_CORTEX_M
CXX_FLAGS += -DTARGET_KSDK2_MCUS
CXX_FLAGS += -DTARGET_M0P
CXX_FLAGS += -DDEVICE_ANALOGOUT=1
CXX_FLAGS += -DTARGET_UVISOR_UNSUPPORTED
CXX_FLAGS += -DDEVICE_SERIAL=1
CXX_FLAGS += -DDEVICE_INTERRUPTIN=1
CXX_FLAGS += -DTARGET_CORTEX
CXX_FLAGS += -DDEVICE_I2C=1
CXX_FLAGS += -DDEVICE_PORTOUT=1
CXX_FLAGS += -DMBED_BUILD_TIMESTAMP=1511730456.72
CXX_FLAGS += -D__CORTEX_M0PLUS
CXX_FLAGS += -DDEVICE_STDIO_MESSAGES=1
CXX_FLAGS += -DTARGET_FF_ARDUINO
CXX_FLAGS += -DTARGET_RELEASE
CXX_FLAGS += -DDEVICE_TRNG=1
CXX_FLAGS += -DARM_MATH_CM0PLUS
CXX_FLAGS += -DDEVICE_PORTIN=1
CXX_FLAGS += -DDEVICE_SLEEP=1
CXX_FLAGS += -DTOOLCHAIN_GCC_ARM
CXX_FLAGS += -DTARGET_MCUXpresso_MCUS
CXX_FLAGS += -DDEVICE_SPI=1
CXX_FLAGS += -DDEVICE_SPISLAVE=1
CXX_FLAGS += -DDEVICE_ANALOGIN=1
CXX_FLAGS += -DDEVICE_PWMOUT=1
CXX_FLAGS += -DTARGET_KW41Z
CXX_FLAGS += -DTARGET_FRDM
CXX_FLAGS += -DTARGET_LIKE_CORTEX_M0
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h

ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -DCPU_MKW41Z512VHT4
ASM_FLAGS += -D__CORTEX_M0PLUS
ASM_FLAGS += -D__MBED_CMSIS_RTOS_CM
ASM_FLAGS += -D__CMSIS_RTOS
ASM_FLAGS += -DFSL_RTOS_MBED
ASM_FLAGS += -DARM_MATH_CM0PLUS
ASM_FLAGS += -I.
ASM_FLAGS += -IPPP-Blinky
ASM_FLAGS += -ISHA1
ASM_FLAGS += -Imbed/.
ASM_FLAGS += -Imbed/TARGET_KW41Z
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z/TARGET_FRDM
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z/device
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/TARGET_KW41Z/drivers
ASM_FLAGS += -Imbed/TARGET_KW41Z/TARGET_Freescale/TARGET_MCUXpresso_MCUS/api
ASM_FLAGS += -Imbed/TARGET_KW41Z/TOOLCHAIN_GCC_ARM
ASM_FLAGS += -Imbed/drivers
ASM_FLAGS += -Imbed/hal
ASM_FLAGS += -Imbed/platform


LD_FLAGS :=-Wl,--gc-sections -Wl,--wrap,main -Wl,--wrap,_malloc_r -Wl,--wrap,_free_r -Wl,--wrap,_realloc_r -Wl,--wrap,_memalign_r -Wl,--wrap,_calloc_r -Wl,--wrap,exit -Wl,--wrap,atexit -Wl,-n -mcpu=cortex-m0plus -mthumb 
LD_SYS_LIBS :=-Wl,--start-group -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys -lmbed -Wl,--end-group

# Tools and Flags
###############################################################################
# Rules

.PHONY: all lst size


all: $(PROJECT).bin $(PROJECT).hex size


.s.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  


.S.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Assemble: $(notdir $<)"
  
	@$(AS) -c $(ASM_FLAGS) -o $@ $<
  

.c.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CC) $(C_FLAGS) $(INCLUDE_PATHS) -o $@ $<

.cpp.o:
	+@$(call MAKEDIR,$(dir $@))
	+@echo "Compile: $(notdir $<)"
	@$(CPP) $(CXX_FLAGS) $(INCLUDE_PATHS) -o $@ $<


$(PROJECT).link_script.ld: $(LINKER_SCRIPT)
	@$(PREPROC) $< -o $@



$(PROJECT).elf: $(OBJECTS) $(SYS_OBJECTS) $(PROJECT).link_script.ld 
	+@echo "link: $(notdir $@)"
	@$(LD) $(LD_FLAGS) -T $(filter-out %.o, $^) $(LIBRARY_PATHS) --output $@ $(filter %.o, $^) $(LIBRARIES) $(LD_SYS_LIBS)


$(PROJECT).bin: $(PROJECT).elf
	$(ELF2BIN) -O binary $< $@
	+@echo "===== bin file ready to flash: $(OBJDIR)/$@ =====" 

$(PROJECT).hex: $(PROJECT).elf
	$(ELF2BIN) -O ihex $< $@


# Rules
###############################################################################
# Dependencies

DEPS = $(OBJECTS:.o=.d) $(SYS_OBJECTS:.o=.d)
-include $(DEPS)
endif

# Dependencies
###############################################################################
