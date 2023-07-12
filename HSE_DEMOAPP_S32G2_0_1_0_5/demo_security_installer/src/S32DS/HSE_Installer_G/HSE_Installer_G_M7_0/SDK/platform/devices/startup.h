/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * NXP Confidential. This software is owned or controlled by NXP and may only be
 * used strictly in accordance with the applicable license terms. By expressly
 * accepting such terms or by downloading, installing, activating and/or otherwise
 * using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms. If you do not agree to be
 * bound by the applicable license terms, then you may not retain, install,
 * activate or otherwise use the software. The production use license in
 * Section 2.3 is expressly granted for this software.
 */

#ifndef STARTUP_H
#define STARTUP_H

#include <stdint.h>
#include "device_registers.h"
/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Local macro not referenced.
 * The defined macro is used as include guard.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block
 * scope if its identifier only appears in a single function.
 * All variables with this problem are defined in the linker files.
 *
 */

/*******************************************************************************
 * API
 ******************************************************************************/
/* Implements : startup_Class */
/*!
 * @brief define symbols that specific start and end addres of some basic sections.
 */
#if (defined(S32K14x_SERIES) || defined(S32K11x_SERIES) || defined(S32V23x_SERIES) || defined(MPC574x_SERIES) || defined(S32R_SERIES) || defined(S32MTV_SERIES) || defined(SJA1110_SERIES) || defined(MPC577x_SERIES) || defined(S32S247TV_SERIES) || defined(S32G274A_SERIES) || defined(S32R45_SERIES))
    #if (defined(__ICCARM__))
        #define INTERRUPTS_SECTION_START               __section_begin(".intvec")
        #define INTERRUPTS_SECTION_END                 __section_end(".intvec")
        #define BSS_SECTION_START                      __section_begin(".bss")
        #define BSS_SECTION_END                        __section_end(".bss")
        #define DATA_SECTION_START                     __section_begin(".data")
        #define DATA_SECTION_END                       __section_end(".data")
        #define CUSTOMSECTION_SECTION_START            __section_begin(".customSection")
        #define CUSTOMSECTION_SECTION_END              __section_end(".customSection")
        #ifndef SJA1110_SERIES
            #define CODE_RAM_SECTION_START             __section_begin("__CODE_RAM")
            #define CODE_RAM_SECTION_END               __section_end("__CODE_RAM")
        #endif
        #define DATA_INIT_SECTION_START                __section_begin(".data_init")
        #define DATA_INIT_SECTION_END                  __section_end(".data_init")
        #define CODE_ROM_SECTION_START                 __section_begin("__CODE_ROM")
        #define CODE_ROM_SECTION_END                   __section_end("__CODE_ROM")

    #elif (defined(__ARMCC_VERSION))
        #define INTERRUPTS_SECTION_START               (uint8_t *)__VECTOR_ROM_START
        #define INTERRUPTS_SECTION_END                 (uint8_t *)__VECTOR_ROM_END
        #define BSS_SECTION_START                      (uint8_t *)__BSS_START
        #define BSS_SECTION_END                        (uint8_t *)__BSS_END
        #define DATA_SECTION_START                     (uint8_t *)__DATA_RAM_START
        #define DATA_SECTION_END                       (uint8_t *)__DATA_RAM_END
        #define CUSTOMSECTION_SECTION_START            (uint8_t *)__CUSTOM_SECTION_START
        #define CUSTOMSECTION_SECTION_END              (uint8_t *)__CUSTOM_SECTION_END
        #ifndef SJA1110_SERIES
            #define CODE_RAM_SECTION_START                 (uint8_t *)__CODE_RAM_START
            #define CODE_RAM_SECTION_END                   (uint8_t *)__CODE_RAM_END
        #endif

        extern uint32_t __VECTOR_ROM_START;
        extern uint32_t __VECTOR_ROM_END;
        extern uint32_t __BSS_START;
        extern uint32_t __BSS_END;
        extern uint32_t __DATA_RAM_START;
        extern uint32_t __DATA_RAM_END;
        extern uint32_t __CUSTOM_SECTION_START;
        extern uint32_t __CUSTOM_SECTION_END;
        #ifndef SJA1110_SERIES
            extern uint32_t __CODE_RAM_START;
            extern uint32_t __CODE_RAM_END;
        #endif

    #elif (defined(__GNUC__))
        /* To avoid small data area overflow
         * Using __attribute__ ((section ("data"))) to exclude data from a special area
         */
        #define INTERRUPTS_SECTION_START               (uint8_t *)&__interrupts_start__
        #define INTERRUPTS_SECTION_END                 (uint8_t *)&__interrupts_end__
        #define BSS_SECTION_START                      (uint8_t *)&__bss_start__
        #define BSS_SECTION_END                        (uint8_t *)&__bss_end__
        #define DATA_SECTION_START                     (uint8_t *)&__data_start__
        #define DATA_SECTION_END                       (uint8_t *)&__data_end__
        #define CUSTOMSECTION_SECTION_START            (uint8_t *)&__customSection_start__
        #define CUSTOMSECTION_SECTION_END              (uint8_t *)&__customSection_end__
        #ifndef SJA1110_SERIES
            #define CODE_RAM_SECTION_START                 (uint8_t *)&__code_ram_start__
            #define CODE_RAM_SECTION_END                   (uint8_t *)&__code_ram_end__
        #endif

        extern uint32_t __interrupts_start__           __attribute__ ((section ("data")));
        extern uint32_t __interrupts_end__             __attribute__ ((section ("data")));
        extern uint32_t __bss_start__                  __attribute__ ((section ("data")));
        extern uint32_t __bss_end__                    __attribute__ ((section ("data")));
        extern uint32_t __data_start__                 __attribute__ ((section ("data")));
        extern uint32_t __data_end__                   __attribute__ ((section ("data")));
        extern uint32_t __customSection_start__        __attribute__ ((section ("data")));
        extern uint32_t __customSection_end__          __attribute__ ((section ("data")));
        #ifndef SJA1110_SERIES
            extern uint32_t __code_ram_start__             __attribute__ ((section ("data")));
            extern uint32_t __code_ram_end__               __attribute__ ((section ("data")));
        #endif

        #if (defined(MPC574x_SERIES) || defined(S32R_SERIES) || defined(MPC577x_SERIES))
            #define SBSS_SECTION_START                 (uint8_t *)&__sbss_start__
            #define SBSS_SECTION_END                   (uint8_t *)&__sbss_end__
            #define SDATA_SECTION_START                (uint8_t *)&__sdata_start__
            #define SDATA_SECTION_END                  (uint8_t *)&__sdata_end__
            extern uint32_t __sbss_start__             __attribute__ ((section ("data")));
            extern uint32_t __sbss_end__               __attribute__ ((section ("data")));
            extern uint32_t __sdata_start__            __attribute__ ((section ("data")));
            extern uint32_t __sdata_end__              __attribute__ ((section ("data")));
        #endif
    #else
        /* To avoid small data area overflow
         * Using #pragma to exclude data from a special area
         */
        #if (defined(__DCC__))
            #pragma use_section DATA __interrupts_start__
            #pragma use_section DATA __interrupts_end__
            #pragma use_section DATA __bss_start__
            #pragma use_section DATA __bss_end__
            #pragma use_section DATA __data_start__
            #pragma use_section DATA __data_end__
            #pragma use_section DATA __customSection_start__
            #pragma use_section DATA __customSection_end__
            #ifndef SJA1110_SERIES
                #pragma use_section DATA __code_ram_start__
                #pragma use_section DATA __code_ram_end__
            #endif
            #if (defined(MPC574x_SERIES) || defined(S32R_SERIES) || defined(MPC577x_SERIES))
                #pragma use_section DATA __sbss_start__
                #pragma use_section DATA __sbss_end__
                #pragma use_section DATA __sdata_start__
                #pragma use_section DATA __sdata_end__
            #endif
        #endif
        #if (defined(__ghs__))
            #pragma ghs startdata
        #endif
        #define INTERRUPTS_SECTION_START               (uint8_t *)&__interrupts_start__
        #define INTERRUPTS_SECTION_END                 (uint8_t *)&__interrupts_end__
        #define BSS_SECTION_START                      (uint8_t *)&__bss_start__
        #define BSS_SECTION_END                        (uint8_t *)&__bss_end__
        #define DATA_SECTION_START                     (uint8_t *)&__data_start__
        #define DATA_SECTION_END                       (uint8_t *)&__data_end__
        #define CUSTOMSECTION_SECTION_START            (uint8_t *)&__customSection_start__
        #define CUSTOMSECTION_SECTION_END              (uint8_t *)&__customSection_end__
        #ifndef SJA1110_SERIES
            #define CODE_RAM_SECTION_START             (uint8_t *)&__code_ram_start__
            #define CODE_RAM_SECTION_END               (uint8_t *)&__code_ram_end__
        #endif

        extern uint32_t __interrupts_start__;
        extern uint32_t __interrupts_end__;
        extern uint32_t __bss_start__;
        extern uint32_t __bss_end__;
        extern uint32_t __data_start__;
        extern uint32_t __data_end__;
        extern uint32_t __customSection_start__;
        extern uint32_t __customSection_end__;
        #ifndef SJA1110_SERIES
            extern uint32_t __code_ram_start__;
            extern uint32_t __code_ram_end__;
        #endif
        #if (defined(MPC574x_SERIES) || defined(S32R_SERIES) || defined(MPC577x_SERIES))
            #define SBSS_SECTION_START                 (uint8_t *)&__sbss_start__
            #define SBSS_SECTION_END                   (uint8_t *)&__sbss_end__
            #define SDATA_SECTION_START                (uint8_t *)&__sdata_start__
            #define SDATA_SECTION_END                  (uint8_t *)&__sdata_end__
            extern uint32_t __sbss_start__;
            extern uint32_t __sbss_end__;
            extern uint32_t __sdata_start__;
            extern uint32_t __sdata_end__;
        #endif
        #if (defined(__ghs__))
            #pragma ghs enddata
        #endif
    #endif
#endif

#if (defined(__ICCARM__))
    #pragma section = ".data"
    #pragma section = ".data_init"
    #pragma section = ".init_table"
    #pragma section = ".zero_table"
    #pragma section = ".bss"
    #pragma section = ".intvec"
    #pragma section = ".customSection"
    #pragma section = ".customSection_init"
    #ifndef SJA1110_SERIES
        #pragma section = "__CODE_RAM"
    #endif
    #pragma section = "__CODE_ROM"

#endif

/*!
 * @brief Make necessary initializations for RAM.
 *
 * - Copy initialized data from ROM to RAM.
 * - Clear the zero-initialized data section.
 * - Copy the vector table from ROM to RAM. This could be an option.
 */
void init_data_bss(void);

#endif /* STARTUP_H*/
/*******************************************************************************
 * EOF
 ******************************************************************************/

