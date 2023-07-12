/*
** ###################################################################
**     Processor:           S32G274A with 2688 KB SRAM
**     Compiler:            GNU C Compiler
**     Reference manual:    S32G274ARM
**     Version:             Rev. 1 Draft M, 03/2019
**
**     Abstract:
**         Linker file for the GNU C Compiler
**
**     Copyright 2019-2020 NXP
**     All rights reserved.
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/
/* Implements : Linker_file_Class */
/* Include common file */

/* Entry Point */
ENTRY(Reset_Handler)

HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x2000;
STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x3000;

/* Define output sections */
SECTIONS
{
    .interrupts : ALIGN(4096) 
    {
    	. = ALIGN(4096);
        __VECTOR_TABLE = .;
        __interrupts_start__ = .;
        KEEP(*(.isr_vector))     /* Startup code */
        __interrupts_end__ = .;
        . = ALIGN(4);
    } > m_ram_c0
    __VECTOR_RAM = LOADADDR(.interrupts);
    __VECTOR_RAM_END = __VECTOR_RAM + (__interrupts_end__ - __interrupts_start__);
    __RAM_VECTOR_TABLE_SIZE = 0x0;
    __VECTOR_TABLE_COPY_END = __VECTOR_TABLE + __RAM_VECTOR_TABLE_SIZE;

    .text ALIGN(4) : ALIGN(4)
    {
        . = ALIGN(8);
        *startup*.o(.text)
        *(.text)                 /* .text sections (code) */
        *(.text*)                /* .text* sections (code) */
        *(.rodata)               /* .rodata sections (constants, strings, etc.) */
        *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
        *(.init)                 /* section used in crti.o files */
        *(.fini)                 /* section used in crti.o files */
        *(.eh_frame)             /* section used in crtbegin.o files */
        . = ALIGN(8);
    } > m_ram_c0
    
    /* Sections used by startup for data initialization. */
    .init_table :
    {
        . = ALIGN(4);
        __COPY_TABLE = .;
        KEEP(*(.init_table))
    } > m_ram_c0
    .zero_table :
    {
        . = ALIGN(4);
        __ZERO_TABLE = .;
        KEEP(*(.zero_table))
    } > m_ram_c0

        /* Section used by the libgcc.a library for fvp4 */
    .ARM :
    {
        __exidx_start = .;
        *(.ARM.exidx*)
        __exidx_end = .;
    } > m_ram_c0

    .code_ram :
    {
        . = ALIGN(8);
        __CODE_RAM = .;
        __code_ram_start__ = .;
        *(.code_ram)               /* Custom section for storing code in RAM */
        . = ALIGN(8);
        __code_ram_end__ = .;
    } > m_ram_c0
    __CODE_ROM = .; /* Symbol is used by start-up for code ram initialization. */
    __CODE_END = .; /* No copy */

    __etext = .;

    __DATA_NON_CACHEABLE_ROM = .; /* Symbol is used by startup for data initialization. */
    __DATA_NON_CACHEABLE_END = .; /* No copy */
    .data_non_cacheable :
    {
        . = ALIGN(4);
        __DATA_NON_CACHEABLE_RAM = .;
        __data_non_cacheable_start__ = .;
         *(.data_non_cacheable)
         *(.data_non_cacheable*)
         . = ALIGN(4);
        __data_non_cacheable_end__ = .;
    } > m_ram_c0

    .bss_non_cacheable :
    {
        . = ALIGN(4);
        __BSS_NON_CACHEABLE_START = .;
        __bss_non_cacheable_start__ = .;
         *(.bss_non_cacheable)
         *(.bss_non_cacheable*)
         . = ALIGN(4);
        __bss_non_cacheable_end__ = .;
        __BSS_NON_CACHEABLE_END = .;
    } > m_ram_c0

    __DATA_ROM = .; /* Symbol is used by startup for data initialization. */
    __DATA_END = .; /* No copy */
    .data :
    {
        . = ALIGN(8);
        __DATA_RAM = .;
        __data_start__ = .;      /* Create a global symbol at data start. */
        *(.data)                 /* .data sections */
        *(.data*)                /* .data* sections */
        . = ALIGN(8);
        __data_end__ = .;        /* Define a global symbol at data end. */
    } > m_ram_c0

    /* Uninitialized data section. */
    .bss :
    {
        /* This is used by the startup in order to initialize the .bss section. */
        . = ALIGN(8);
        __BSS_START = .;
        __bss_start__ = .;
        *(.bss)
        *(.bss*)
        *(COMMON)
        . = ALIGN(8);
        __bss_end__ = .;
        __BSS_END = .;
    } > m_ram_c0

    .heap :
    {
        . = ALIGN(64);
        __HEAP_START = .;
        __end__ = .;
        __heap_start__ = .;
        PROVIDE(end = .);
        PROVIDE(_end = .);
        PROVIDE(__end = .);
        __HeapBase = .;
        . += HEAP_SIZE;
        __HeapLimit = .;
        __heap_limit = .;
        __heap_end__ = .;
    } > m_ram_c0

    /* TODO: move those to vcram section */
    __CUSTOM_ROM = .; /* Symbol is used by start-up for data initialization. */
    __CUSTOM_END = __CUSTOM_ROM + (__customSection_end__ - __customSection_start__);

    . = ALIGN(64);
    __ram_end = __CUSTOM_END;

    /* Initializes stack on the end of block */
    __StackTop   = ORIGIN(m_ram_c0) + LENGTH(m_ram_c0);
    __StackLimit = __StackTop - STACK_SIZE;
    PROVIDE(__stack = __StackTop);

    .stack __StackLimit :
    {
        . = ALIGN(8);
        __stack_start__ = .;
        . += STACK_SIZE;
        __stack_end__ = .;
    } > m_ram_c0

    /* 	LLCE shared Memory for Comands Interface */
    .llce_boot_end     ORIGIN(m_llce_boot_end) (NOLOAD) :
    {
    	. = ALIGN(4);
    	KEEP(*(.llce_boot_end))  /* Keep section even if not referenced. */
    } > m_llce_boot_end
    
	/* 	LLCE shared Memory for Reception Descriptors */
    .llce_can_sharedmemory ORIGIN(m_llce_can_sharedmemory) (NOLOAD) :
    {
    	. = ALIGN(4);
    	KEEP(*(.llce_can_sharedmemory))  /* Keep section even if not referenced. */
    } > m_llce_can_sharedmemory
    
    /* Custom Section Block that can be used to place data at absolute address. */
    /* Use __attribute__((section (".customSection"))) to place data here. */
    .customSectionBlock : AT(__CUSTOM_ROM)
    {
        __CUSTOM_RAM = .;
        __customSectionStart = .;
        __customSection_start__ = .;
        KEEP(*(.customSection))  /* Keep section even if not referenced. */
        . = ALIGN(4);
        __customSection_end__ = .;
    } > m_dtcm

    .ARM.attributes 0 : { *(.ARM.attributes) }

}

/*-------- LABELS USED IN CODE -------------------------------*/
__m_dtcm_start  = ORIGIN(m_dtcm);
__m_dtcm_end = ORIGIN(m_dtcm) + LENGTH(m_dtcm);