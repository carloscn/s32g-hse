#
#  Copyright 2021 NXP
#
#  This software is owned or controlled by NXP and may only be used strictly
#  in accordance with the applicable license terms.  By expressly accepting
#  such terms or by downloading, installing, activating and/or otherwise using
#  the software, you are agreeing that you have read, and that you agree to
#  comply with and are bound by, such license terms.  If you do not agree to
#  be bound by the applicable license terms, then you may not retain,
#  install, activate or otherwise use the software.
#
#  This file contains sample code only. It is not part of the production code deliverables.

ifeq ($(CC_PATH),)
abort:   
	@echo Variable CC_PATH not set && false
endif

ifeq ($(CC_LIB),)
abort:   
	@echo Variable CC_LIB not set && false
endif

MAPFILE = HSE_Installer_G_M7_0.map

CC = $(CC_PATH)/arm-none-eabi-gcc
OBJ_CPY = $(CC_PATH)/arm-none-eabi-objcopy

CCOPT += -std=c99 \
		-DCPU_S32G274A \
		-DAUTOSAR_OS_NOT_USED \
		-c \
		-O0 \
		-g \
		-pedantic \
		-Wall \
		-Wextra \
		-fmessage-length=0 \
		-Wunused \
		-Wstrict-prototypes \
		-Wsign-compare \
		-mcpu=cortex-m7 \
		-mthumb \
		-mfloat-abi=hard \
		-mfpu=fpv5-sp-d16 \
		-specs=nano.specs \
		-specs=nosys.specs \
		--sysroot=$(CC_LIB)

ASOPT := -c \
		 -x assembler-with-cpp \
		 -D__NO_SYSTEM_INIT \
		 -g3 \
		 -mcpu=cortex-m7 \
		 -mthumb \
		 -mfloat-abi=hard \
		 -mfpu=fpv5-sp-d16 \
		 -specs=nano.specs \
		 -specs=nosys.specs \
		 --sysroot=$(CC_LIB)

LDOPT := -T "src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/Project_Settings/Linker_Files/S32G274A_common_ram.ld" \
		 -T "src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/Project_Settings/Linker_Files/S32G274A_ram.ld" \
        -Xlinker \
		--gc-sections \
		-n \
		-mcpu=cortex-m7 \
		-mthumb \
		-mfloat-abi=hard \
		-mfpu=fpv5-sp-d16 \
		-specs=nano.specs \
		-specs=nosys.specs \
		--sysroot=$(CC_LIB)

# All of the sources participating in the build are defined here
DIRS := src/security_installer/framework/flash \
		src/security_installer/framework/host_hse \
		src/security_installer/framework/host_hse_wrappers \
		src/security_installer/drivers/mc_me \
		src/security_installer/drivers/mu \
		src/security_installer/drivers/nvic \
		src/security_installer/drivers/qspi/src \
		src/security_installer/drivers/stm \
		src/security_installer/drivers/uart \
		src/security_installer/services/inc \
		src/security_installer/target/m7/include \
		src/security_installer/plugins/Base_TS_T40D11M4I0R0/include \
		src/security_installer/drivers/qspi/include \
		src/security_installer/services/src \
		../interface \
		../interface/config \
		../interface/inc_common \
		../interface/inc_services \
		../interface/inc_custom \
		src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/SDK/platform \
		src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/SDK/platform/devices \
		src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/SDK/platform/devices/common \
		src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/SDK/platform/devices/S32G274A/include \
		src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/SDK/platform/devices/S32G274A/startup \
		src/security_installer/framework/console \
		src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/Project_Settings/Startup_Code
		

LD_FILES := src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/Project_Settings/Linker_Files/S32G274A_common_ram.ld 
LD_FILES += src/S32DS/HSE_Installer_G/HSE_Installer_G_M7_0/Project_Settings/Linker_Files/S32G274A_ram.ld 

INCLUDE_FILES := $(foreach DIR, $(DIRS), $(wildcard $(DIR)/*.h))

SOURCE_FILES := $(foreach DIR,$(DIRS),$(notdir $(wildcard $(DIR)/*.c)))
SOURCE_FILES += $(foreach DIR,$(DIRS),$(notdir $(wildcard $(DIR)/*.s)))
SOURCE_FILES += $(foreach DIR,$(DIRS),$(notdir $(wildcard $(DIR)/*.S)))

OBJECT_FILES := $(patsubst %.c,%.o,$(patsubst %.S,%.o, $(patsubst %.S,%.o,$(SOURCE_FILES))))

CFLAGS += $(addprefix -I, $(DIRS))
LDOPT += out/*.o

.PHONY: build
build: HSE_Installer_G_M7_0.bin

# Tool invocations
HSE_Installer_G_M7_0.elf: $(OBJECT_FILES) $(LD_FILES)
vpath %.c $(addsuffix :, $(DIRS))
%.o: %.c $(INCLUDE_FILES)
	@mkdir -p out
	@echo "Compiling $<"
	@$(CC) $(CCOPT) $(CFLAGS) -o out/$@ $<

vpath %.s $(addsuffix :, $(DIRS))
%.o : %.s
	@echo "Compiling Start file $<"
	@$(CC) $(ASOPT) $< -o out/$@

vpath %.S $(addsuffix :, $(DIRS))
%.o : %.S
	@echo "Compiling Start file $<"
	@$(CC) $(ASOPT) $< -o out/$@

%.elf: $(OBJECT_FILES) $(LD_FILES) 
	echo "Linking $@"
	$(CC) -Wl,-Map,"out/$(MAPFILE)" $(LDOPT) -o out/$@ 

%.bin: %.elf
	@echo 'Creating Binary Image'
	$(OBJ_CPY) -O binary out/$< out/$@
	@echo 'Finished building: $@'
	@echo ' '	

clean:
	rm -rf out/*.*

info:
	@echo "User must set CC_PATH to the location where the cross compiler is installed"
	@echo "User must set CC_LIB to the location where the cross compiler libs are installed"
	