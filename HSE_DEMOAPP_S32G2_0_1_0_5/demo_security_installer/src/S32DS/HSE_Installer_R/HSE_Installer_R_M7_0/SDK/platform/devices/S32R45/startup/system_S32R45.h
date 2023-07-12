/*
 * Copyright 2019 NXP
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


/*! @addtogroup soc_support_S32R45*/
/*! @{*/

/*!
 * @file system_S32R45.h
 * @brief Device specific configuration file for S32R45
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The macros defined are used to define features for system initialization.
 *
 */

#ifndef SYSTEM_S32R45_H_
#define SYSTEM_S32R45_H_                        /**< Symbol preventing repeated inclusion */

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
 * CPU Settings.
 *****************************************************************************/

/* Instruction Cache enable */
#define I_CACHE
#ifndef I_CACHE_ENABLE
    #define I_CACHE_ENABLE  1
#endif /* I_CACHE_ENABLE */

/* Data Cache enable */
#define D_CACHE
#ifndef D_CACHE_ENABLE
    #define D_CACHE_ENABLE  1
#endif /* D_CACHE_ENABLE */

/* Value of the fast internal oscillator clock frequency in Hz  */
#ifndef CPU_INT_FAST_CLK_HZ
    #define CPU_INT_FAST_CLK_HZ             48000000u
#endif

/* Default System clock value */
#ifndef DEFAULT_SYSTEM_CLOCK
    #define DEFAULT_SYSTEM_CLOCK            24000000u
#endif

/* Value of the fast external oscillator clock frequency in Hz */
#ifndef CPU_EXT_FAST_CLK_HZ
    #define CPU_EXT_FAST_CLK_HZ             40000000u
#endif   /* CPU_EXT_FAST_CLK_HZ */

/**
 * @brief System clock frequency (core clock)
 *
 * The system clock frequency supplied to the SysTick timer and the processor
 * core clock. This variable can be used by the user application to setup the
 * SysTick timer or configure other parameters. It may also be used by debugger to
 * query the frequency of the debug timer or configure the trace clock speed
 * SystemCoreClock is initialized with a correct predefined value.
 */
extern uint32_t SystemCoreClock;

/**
 * @brief Setup the SoC.
 *
 * This function disables the watchdog, enables FPU and the power mode protection
 * if the corresponding feature macro is enabled.
 * SystemInit is called from startup_device file.
 */
void SystemInit(void);

/**
 * @brief Updates the SystemCoreClock variable.
 *
 * It must be called whenever the core clock is changed during program
 * execution. SystemCoreClockUpdate() evaluates the clock register settings and calculates
 * the current core clock.
 * This function must be called when user does not want to use clock manager component.
 * If clock manager is used, the CLOCK_SYS_GetFreq function must be used with CORE_CLOCK
 * parameter.
 *
 */
void SystemCoreClockUpdate(void);

/**
 * @brief Initiates a system reset.
 *
 * This function is used to initiate a system reset
 */
void SystemSoftwareReset(void);

/**
 * @brief Enable Data Cache
 */
void CPU_EnableDCache(void);

/**
 * @brief Disable Data Cache
 */
void CPU_DisableDCache(void);

/**
 * @brief Enable Instruction Cache
 */
void CPU_EnableICache(void);

/**
 * @brief Disable Instruction Cache
 */
void CPU_DisableICache(void);

/**
 * @brief Invalidates Data Cache based on the specified address
 * @param[in] address Address of the memory location to be invalidated from DCACHE
 * @param[in] clean Select if the cache is cleaned prior to invalidation
 */
void CPU_InvalidateDCacheByAddress(uint32_t address, bool clean);

/**
 * @brief Invalidates Data Cache based on the set and way
 * @param[in] set Set to be invalidated from DCACHE
 * @param[in] way Way to be invalidated from DCACHE
 * @param[in] clean Select if the cache is cleaned prior to invalidation
 */
void CPU_InvalidateDCacheBySet(uint32_t set, uint32_t way, bool clean);

/**
 * @brief Invalidates all Data Cache
 * @param[in] clean Select if the cache is cleaned prior to invalidation
 */
void CPU_InvalidateDCache(bool clean);

/**
 * @brief Cleans Data Cache based on the specified address
 * @param[in] address Address of the memory location to be cleaned
 */
void CPU_CleanDCacheByAddress(uint32_t address);

/**
 * @brief Cleans Data Cache based on set and way
 * @param[in] set Set to be cleaned from DCACHE
 * @param[in] way Way to be cleaned from DCACHE
 */
void CPU_CleanDCacheBySet(uint32_t set, uint32_t way);

/**
 * @brief Cleans all Data Cache
 */
void CPU_CleanDCache(void);

/**
 * @brief Invalidates all Instruction Cache
 */
void CPU_InvalidateICache(void);

/**
 * @brief Invalidates Instruction Cache based on the specified address
 * @param[in] address Address of the memory location to be invalidated from ICACHE
 */
void CPU_InvalidateICacheByAddress(uint32_t address);

#ifdef __cplusplus
}
#endif

/*! @}*/
#endif  /* #if !defined(SYSTEM_S32R45_H_) */
