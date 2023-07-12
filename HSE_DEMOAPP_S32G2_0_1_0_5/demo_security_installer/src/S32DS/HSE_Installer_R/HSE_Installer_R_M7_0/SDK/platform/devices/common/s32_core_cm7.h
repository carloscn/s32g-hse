/*
 * Copyright (c) 2015-2016 Freescale Semiconductor, Inc.
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
 *
 */
/*!
 * @file s32_core_cm7.h
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
 * Function-like macros are used instead of inline functions in order to ensure
 * that the performance will not be decreased if the functions will not be
 * inlined by the compiler.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The macros defined are used only on some of the drivers, so this might be reported
 * when the analysis is made only on one driver.
 */

/*
 * Tool Chains:
 *   GNUC flag is defined also by ARM compiler - it shows the current major version of the compatible GCC version
 *   __GNUC__   : GNU Compiler Collection
 *   __ghs__    : Green Hills ARM Compiler
 *   __ICCARM__ : IAR ARM Compiler
 *   __ARMCC_VERSION    : ARM Compiler
 * Implements : Core_common_file_Class
 */

#if !defined (CORE_CM7_H)
#define CORE_CM7_H


#ifdef __cplusplus
extern "C" {
#endif

/** \brief  BKPT_ASM
 *
 *   Macro to be used to trigger an debug interrupt
 */
#define BKPT_ASM __asm("BKPT #0\n\t")


/** \brief  Enable FPU
 *
 *   ENABLE_FPU indicates whether SystemInit will enable the Floating point unit (FPU)
 */
#if defined (__GNUC__) || defined (__ARMCC_VERSION)
#if defined (__VFP_FP__) && !defined (__SOFTFP__)
#define ENABLE_FPU
#endif

#elif defined (__ICCARM__)
#if defined __ARMVFP__
#define ENABLE_FPU
#endif

#elif defined (__ghs__) || defined (__DCC__)
#if defined (__VFP__)
#define ENABLE_FPU
#endif
#endif /* if defined (__GNUC__) */

/** \brief  Enable interrupts
 */
#if defined (__GNUC__)
#define ENABLE_INTERRUPTS() __asm volatile ("cpsie i" : : : "memory");
#else
#define ENABLE_INTERRUPTS() __asm("cpsie i")
#endif


/** \brief  Disable interrupts
 */
#if defined (__GNUC__)
#define DISABLE_INTERRUPTS() __asm volatile ("cpsid i" : : : "memory");
#else
#define DISABLE_INTERRUPTS() __asm("cpsid i")
#endif


/** \brief  Enter low-power standby state
 *    WFI (Wait For Interrupt) makes the processor suspend execution (Clock is stopped) until an IRQ interrupts.
 */
#if defined (__GNUC__)
#define STANDBY() __asm volatile ("wfi")
#else
#define STANDBY() __asm("wfi")
#endif

/** \brief  No-op
 */
#define NOP() __asm volatile ("nop")


/** \brief  Reverse byte order in a word.
 */
#if defined (__GNUC__) || defined (__ICCARM__) || defined (__ghs__) || defined (__ARMCC_VERSION)
#define REV_BYTES_32(a, b) __asm volatile ("rev %0, %1" : "=r" (b) : "r" (a))
#else
#define REV_BYTES_32(a, b) (b = ((a & 0xFF000000U) >> 24U) | ((a & 0xFF0000U) >> 8U) \
                                | ((a & 0xFF00U) << 8U) | ((a & 0xFFU) << 24U))
#endif

/** \brief  Reverse byte order in each halfword independently.
 */
#if defined (__GNUC__) || defined (__ICCARM__) || defined (__ghs__) || defined (__ARMCC_VERSION)
#define REV_BYTES_16(a, b) __asm volatile ("rev16 %0, %1" : "=r" (b) : "r" (a))
#else
#define REV_BYTES_16(a, b) (b = ((a & 0xFF000000U) >> 8U) | ((a & 0xFF0000U) << 8U) \
                                | ((a & 0xFF00U) >> 8U) | ((a & 0xFFU) << 8U))
#endif

/** \brief  Places a function in RAM.
 */
#if defined ( __GNUC__ )
    #define START_FUNCTION_DECLARATION_RAMSECTION
    #define END_FUNCTION_DECLARATION_RAMSECTION        __attribute__((section (".code_ram")));
#elif defined ( __ghs__ )
    #define START_FUNCTION_DECLARATION_RAMSECTION      _Pragma("ghs callmode=far")
    #define END_FUNCTION_DECLARATION_RAMSECTION        __attribute__((section (".code_ram")));\
                                                       _Pragma("ghs callmode=default")
#elif defined ( __ICCARM__ )
    #define START_FUNCTION_DECLARATION_RAMSECTION      __ramfunc
    #define END_FUNCTION_DECLARATION_RAMSECTION        ;
#elif defined ( __DCC__ )
    #define START_FUNCTION_DECLARATION_RAMSECTION      _Pragma("section CODE \".code_ram\"") \
                                                       _Pragma("use_section CODE")
    #define END_FUNCTION_DECLARATION_RAMSECTION        ; \
                                                       _Pragma("section CODE \".text\"")
#else
    /* Keep compatibility with software analysis tools */
    #define START_FUNCTION_DECLARATION_RAMSECTION
    #define END_FUNCTION_DECLARATION_RAMSECTION        ;
#endif

    /* For GCC, IAR, GHS, Diab and ARMC there is no need to specify the section when
    defining a function, it is enough to specify it at the declaration. This
    also enables compatibility with software analysis tools. */
    #define START_FUNCTION_DEFINITION_RAMSECTION
    #define END_FUNCTION_DEFINITION_RAMSECTION

#if defined (__ICCARM__)
    #define DISABLE_CHECK_RAMSECTION_FUNCTION_CALL     _Pragma("diag_suppress=Ta022")
    #define ENABLE_CHECK_RAMSECTION_FUNCTION_CALL      _Pragma("diag_default=Ta022")
#else
    #define DISABLE_CHECK_RAMSECTION_FUNCTION_CALL
    #define ENABLE_CHECK_RAMSECTION_FUNCTION_CALL
#endif

/** \brief  Places a variable in Non-cacheable RAM.
 */
#define DATA_NON_CACHEABLE __attribute__((section (".data_non_cacheable")))
#define BSS_NON_CACHEABLE __attribute__((section (".bss_non_cacheable")))

/** \brief  Get Core ID
 *
 *   GET_CORE_ID returns the processor identification number for cm7
 */
#ifdef FEATURE_CPU_SOFTWARE_CORE_ID_SUPPORT
    #define GET_CORE_ID()    ((uint8_t)((MSCM->CPXNUM & MSCM_CPXNUM_CPN_MASK) >> MSCM_CPXNUM_CPN_SHIFT))
#else
    #define GET_CORE_ID()    (0U)
#endif

/** \brief  Data alignment.
 */
#if defined ( __GNUC__ ) || defined ( __ghs__ ) || defined (__ARMCC_VERSION)
    #define ALIGNED(x)      __attribute__((aligned(x)))
#elif defined ( __ICCARM__ )
    #define stringify(s) tostring(s)
    #define tostring(s) #s
    #define ALIGNED(x)      _Pragma(stringify(data_alignment=x))
#else
    /* Keep compatibility with software analysis tools */
    #define ALIGNED(x)
#endif

/** \brief  Exception Handler Stack Save
 */
#if defined ( __GNUC__ ) || defined ( __ghs__ ) || defined (__ICCARM__)
    /* Save stack context */
    #define EXCEPTION_STACK_SAVE __asm("tst    lr, #4\n\t"\
                                 "ite    eq\n\t"\
                                 "mrseq  r0, msp\n\t"\
                                 "mrsne  r0, psp\n\t"\
                                 "mov    r1, lr");
#else
    #define EXCEPTION_STACK_SAVE
#endif

/** \brief  Endianness.
 */
#define CORE_LITTLE_ENDIAN

/** \brief  Data Memory Barrier
 *    Data Memory Barrier acts as a memory barrier. It ensures that all explicit memory accesses that appear
 * in program order before the DMB instruction are observed before any explicit memory accesses that appear
 * in program order after the DMB instruction. It does not affect the ordering of any other instructions
 * executing on the processor.
 */
#if defined (__GNUC__)
#define DMB() __asm volatile ("dmb")
#else
#define DMB() __asm("dmb")
#endif

#ifdef __cplusplus
}
#endif

#endif /* CORE_CM7_H */

/*******************************************************************************
 * EOF
 ******************************************************************************/
