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

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block
 * scope if its identifier only appears in a single function.
 * An object with static storage duration declared at block scope cannot be
 * accessed directly from outside the block.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 11.4, A conversion should not be performed
 * between a pointer to object and an integer type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed
 * between pointer to void and an arithmetic type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External could be made static.
 * Function is defined for usage by application code.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced.
 * KEY_VALUE1 and KEY_VALUE2 are used for enabling cores.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.11, When an array with external linkage
 * is declared, its size should be explicitly specified.
 * The size of the arrays can not be explicitly determined.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 1.3, Taking address of near auto variable.
 * The code is not dynamically linked. An absolute stack address is obtained
 * when taking the address of the near auto variable.
 *
 */

#include "device_registers.h"
#include "system_S32G274A.h"
#include "stdbool.h"

/* ----------------------------------------------------------------------------
   -- Definitions
   ---------------------------------------------------------------------------- */

#define KEY_VALUE1 0x5AF0u
#define KEY_VALUE2 0xA50Fu

/* ----------------------------------------------------------------------------
   -- Core clock
   ---------------------------------------------------------------------------- */

uint32_t SystemCoreClock = DEFAULT_SYSTEM_CLOCK;

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_CalMpuSize
 * Description   : This function calculates the size and subregion for MPU region
 * base on known region size
 *
 *END**************************************************************************/
static void CPU_CalMpuSize(uint32_t startAddr,
                           uint32_t size,
                           uint8_t * square,
                           uint8_t * subRegion)
{
    uint8_t sqr = 0U;
    uint8_t sRegion = 0U;
    uint32_t actSize = 0U;
    uint32_t temp = size;

    if (temp > 32U)
    {
        /* Calculate region size */
        while (temp != 0U)
        {
            sqr++;
            temp >>= 1U;
        }

        /* Re-calculate region size with aligned address */
        actSize = 1UL << sqr;
        size += startAddr % actSize;
        temp = size;
        sqr = 0U;
        while (temp != 0U)
        {
            sqr++;
            temp >>= 1U;
        }

        /* Calculate actual size and subregion */
        actSize = 1UL << sqr;
        temp = size & (actSize - 1U);
        if (temp != 0U)
        {
            sqr += 1U;
            if (actSize >= 256U)
            {
                sRegion = 0xFFU << (((size << 3U)/actSize) + 1U);
            }
        }
    }
    else
    {
        /* Minimum 32B (square-2) */
        sqr = 6U;
    }

    *square = sqr;
    *subRegion = sRegion;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : SystemInit
 * Description   : This function disables the watchdog, enables FPU
 * and the power mode protection if the corresponding feature macro
 * is enabled. SystemInit is called from startup_device file.
 *
 * Implements    : SystemInit_Activity
 *END**************************************************************************/
void SystemInit(void)
{
/**************************************************************************/
                      /* FPU ENABLE*/
/**************************************************************************/
#ifdef ENABLE_FPU
    /* Enable CP10 and CP11 coprocessors */
    S32_SCB->CPACR |= (S32_SCB_CPACR_CP10_MASK | S32_SCB_CPACR_CP11_MASK); 
#endif /* ENABLE_FPU */

/**************************************************************************/
                      /* DEFAULT MEMORY ENABLE*/
/**************************************************************************/
#define CPU_DEFAULT_MEMORY_CNT (3U)
    extern uint32_t __data_non_cacheable_start__[];
    extern uint32_t __bss_non_cacheable_end__[];
    extern uint32_t __VECTOR_RAM[];
    extern uint32_t __VECTOR_RAM_END[];
    extern uint32_t __StackLimit[];
    extern uint32_t __StackTop[];

    uint8_t regionNum = 0U;
    uint8_t square = 0U;
    uint32_t startAddr = 0U;
    uint32_t size = 0U;
    uint8_t subRegion = 0U;

    /* Default memory regions
     * Region 0: 0x00000000 - 0xFFFFFFFF; Normal; Shareable; Outer and Inner Write-Back, Write and Read allocate.
     * Region 1: 0x00000000 - 0x1FFFFFFF; Normal; Non-shareable; Write-Through.
     * Region 2: 0x40000000 - 0x5FFFFFFF; Device.
     * Region 3: 0xE0000000 - 0xFFFFFFFF; Device.
     */
    uint32_t addrVal[CPU_DEFAULT_MEMORY_CNT] = {0x00000000U, /*0x00000000U,*/ 0x40000000U, 0xE0000000U};
    uint32_t rasrVal[CPU_DEFAULT_MEMORY_CNT] = {0x032D003FU, /*0x03020039U,*/ 0x03140039U, 0x03140039U};

    /* Set default memory regions */
    for (regionNum = 0U; regionNum < CPU_DEFAULT_MEMORY_CNT; regionNum++)
    {
        S32_MPU->RBAR = addrVal[regionNum] | regionNum | S32_MPU_RBAR_VALID_MASK;
        S32_MPU->RASR = rasrVal[regionNum];
    }

    /* Set Write-Through cache for stack region
     * Region 4: Stack region; Normal; Shareable; Write-Through.
     */
    startAddr = (uint32_t)__StackLimit;
    size = (uint32_t)__StackTop - startAddr;
    if (size > 0U)
    {
        CPU_CalMpuSize(startAddr, size, &square, &subRegion);
        S32_MPU->RBAR = (startAddr & 0xFFFFFFE0U) | regionNum | S32_MPU_RBAR_VALID_MASK;
        S32_MPU->RASR = 0x03060001U | S32_MPU_RASR_SRD(subRegion) | S32_MPU_RASR_SIZE((uint32_t)square-2U);
        regionNum++;
    }

    /* Set Write-Through cache for interrupt table
     * Region 5: Interrupt vector table; Normal; Shareable; Write-Through.
     */
    startAddr = (uint32_t)__VECTOR_RAM;
    size = (uint32_t)__VECTOR_RAM_END - startAddr;
    if (size > 0U)
    {
        CPU_CalMpuSize(startAddr, size, &square, &subRegion);
        S32_MPU->RBAR = (startAddr & 0xFFFFFFE0U) | regionNum | S32_MPU_RBAR_VALID_MASK;
        S32_MPU->RASR = 0x03060001U | S32_MPU_RASR_SRD(subRegion) | S32_MPU_RASR_SIZE((uint32_t)square-2U);
        regionNum++;
    }

    /* Set non-cacheable region
     * Region 6: Non-cacheable region; Normal; Shareable; Non-cacheable.
     */
    startAddr = (uint32_t)__data_non_cacheable_start__;
    size = (uint32_t)__bss_non_cacheable_end__ - startAddr;
    if (size > 0U)
    {
        CPU_CalMpuSize(startAddr, size, &square, &subRegion);
        S32_MPU->RBAR = (startAddr & 0xFFFFFFE0U) | regionNum | S32_MPU_RBAR_VALID_MASK;
        S32_MPU->RASR = 0x03240001U | S32_MPU_RASR_SRD(subRegion) | S32_MPU_RASR_SIZE((uint32_t)square-2U);
        regionNum++;
    }

    /* Enable MPU */
    if (regionNum > CPU_DEFAULT_MEMORY_CNT)
    {
        S32_MPU->CTRL |= (S32_MPU_CTRL_PRIVDEFENA_MASK | S32_MPU_CTRL_ENABLE_MASK);
    }

/**************************************************************************/
                      /* ENABLE CORES */
/**************************************************************************/
#if defined(DEBUG_SECONDARY_CORES)
    #define START_SECONDARY_CORES
#endif

#if defined(START_SECONDARY_CORES)
    uint32_t mctl = MC_ME->CTL_KEY;
#if defined(TURN_ON_CPU1)
    /* Enable Core 1 clock */
    MC_ME->PRTN0_CORE1_PCONF = MC_ME_PRTN0_CORE1_PCONF_CCE_MASK;
    /* Enable Core 1 trigger hardware process */
    MC_ME->PRTN0_CORE1_PUPD = MC_ME_PRTN0_CORE1_PUPD_CCUPD_MASK;
    /* Set Core 1 start address */
    MC_ME->PRTN0_CORE1_ADDR = 0x382A0000U;
#endif /* defined(TURN_ON_CPU1) */
#if defined(TURN_ON_CPU2)
    /* Enable Core 2 clock */
    MC_ME->PRTN0_CORE2_PCONF = MC_ME_PRTN0_CORE2_PCONF_CCE_MASK;
    /* Enable Core 2 trigger hardware process */
    MC_ME->PRTN0_CORE2_PUPD = MC_ME_PRTN0_CORE2_PUPD_CCUPD_MASK;
    /* Set Core 2 start address */
    MC_ME->PRTN0_CORE2_ADDR = 0x38540000U;
#endif /* defined(TURN_ON_CPU2) */
    MC_ME->CTL_KEY = mctl; /* key value 1 always from CTL_KEY */
    MC_ME->CTL_KEY = (mctl & 0xffff0000ul) | KEY_VALUE2;
#endif /* defined(START_SECONDARY_CORES) */

/**************************************************************************/
            /* ENABLE CACHE */
/**************************************************************************/
#if defined(I_CACHE) && (I_CACHE_ENABLE == 1)
    /* Enable ICache */
    CPU_EnableICache();
#endif /* defined(I_CACHE) && (ICACHE_ENABLE == 1) */

#if defined(D_CACHE) && (D_CACHE_ENABLE == 1)
    /* Enable DCache */
    CPU_EnableDCache();
#endif /* defined(D_CACHE) && (DCACHE_ENABLE == 1) */
}

/*FUNCTION**********************************************************************
 *
 * Function Name : SystemCoreClockUpdate
 * Description   : This function must be called whenever the core clock is changed
 * during program execution. It evaluates the clock register settings and calculates
 * the current core clock.
 *
 * Implements    : SystemCoreClockUpdate_Activity
 *END**************************************************************************/
void SystemCoreClockUpdate(void)
{
    uint32_t SYSClock = 0U;
    uint32_t PLLClock = 0U;
    uint32_t prediv = 0U;
    uint32_t multi = 0U;
    uint32_t numerator = 0U;
    uint32_t freq1 = 0U;
    uint32_t freq2 = 0U;
    uint32_t freq3 = 0U;
    uint32_t integerPart = 0U;
    uint32_t fractionalPart = 0U;
    bool validSystemClockSource = true;

    /* Get current system clock switch status */
    switch ((MC_CGM_0->MUX[0].CSS & MC_CGM_CSS_SELSTAT_MASK) >> MC_CGM_CSS_SELSTAT_SHIFT)
    {
        case 0x0U:
            /* 48MHz int. RC osc */
            SYSClock = CPU_INT_FAST_CLK_HZ;
            break;
        case 0xCU:
            /* CORE_PLL clock source */
            if ((CORE_PLL->PLLCLKMUX & PLLDIG_PLLCLKMUX_REFCLKSEL_MASK) == 0U)
            {
                PLLClock = CPU_INT_FAST_CLK_HZ;
            }
            else
            {
                PLLClock = CPU_EXT_FAST_CLK_HZ;
            }

            /* Calculate pre-Divider */
            prediv = ((CORE_PLL->PLLDV & PLLDIG_PLLDV_RDIV_MASK) >> PLLDIG_PLLDV_RDIV_SHIFT);
            if (prediv == 0x0U)
            {
                prediv = 1U;
            }

            /* Calculate Loop multiplication factor divider */
            multi = ((CORE_PLL->PLLDV & PLLDIG_PLLDV_MFI_MASK) >> PLLDIG_PLLDV_MFI_SHIFT);

            /* freq1 = PLL_REF * MFI / PREDIV */
            freq1 = (PLLClock >> 2U) * multi;
            freq1 /= prediv;
            freq1 <<= 2U;

            /* CORE_PLL operates in Frac-N mode */
            if ((CORE_PLL->PLLFD & PLLDIG_PLLFD_SDMEN_MASK) != 0U)
            {
                /* Calculate numerator for fractional loop division factor */
                numerator = ((CORE_PLL->PLLFD & PLLDIG_PLLFD_MFN_MASK) >> PLLDIG_PLLFD_MFN_SHIFT);

                /* freq2 = ((int)PLL_REF / 18432) * MFI / PREDIV  */
                freq2 = (PLLClock / 18432U) * numerator;
                freq2 /= prediv;

                /* freq3 = (PLL_REF % 18432) * MFI / 18432 / PREDIV  */
                freq3 = (PLLClock - ((PLLClock / 18432U) * 18432U)) * numerator / 18432U;
                freq3 /= prediv;
            }

            SYSClock = freq1 + freq2 + freq3;

            /* CORE_DFS */
            integerPart = (CORE_DFS->DVPORT[0U] & DFS_DVPORT_MFI_MASK) >> DFS_DVPORT_MFI_SHIFT;
            fractionalPart = (CORE_DFS->DVPORT[0U] & DFS_DVPORT_MFN_MASK) >> DFS_DVPORT_MFN_SHIFT;

            /* inputFrequency = freq1 * 256 + freq2 */
            freq1 = SYSClock >> 8U;
            freq2 = SYSClock & 0xFFU;

            freq1 = ((freq1 << 5U) + (freq1 << 2U)) / (((integerPart << 5U) + (integerPart << 2U)) + fractionalPart);
            freq2 = ((freq2 << 5U) + (freq2 << 2U)) / (((integerPart << 5U) + (integerPart << 2U)) + fractionalPart);

            SYSClock = ((freq1 << 8U) + freq2) >> 1U;
            break;
        default:
            validSystemClockSource = false;
            break;
    }

    if (validSystemClockSource)
    {
        /* DIV 2 */
        SystemCoreClock = SYSClock >> 1U;
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : SystemSoftwareReset
 * Description   : This function is used to initiate a system reset
 *
 * Implements    : SystemSoftwareReset_Activity
 *END**************************************************************************/
void SystemSoftwareReset(void)
{
    /* Functional reset request */
    MC_ME->MODE_CONF = MC_ME_MODE_CONF_FUNC_RST_MASK;
    MC_ME->MODE_UPD = MC_ME_MODE_UPD_MODE_UPD_MASK;
    MC_ME->CTL_KEY = (MC_ME->CTL_KEY & 0xFFFF0000U) | KEY_VALUE1;
    MC_ME->CTL_KEY = (MC_ME->CTL_KEY & 0xFFFF0000U) | KEY_VALUE2;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_EnableDCache
 * Description   : Enable Data Cache
 *
 * Implements    : CPU_EnableDCache_Activity
 *END**************************************************************************/
void CPU_EnableDCache(void)
{
    /* Invalidate cache */
    CPU_InvalidateDCache(false);
    S32_SCB->CCR |= FEATURE_CPU_DCACHE_EN_MASK;
    (void)S32_SCB->CCR;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_DisableDCache
 * Description   : Disable Data Cache
 *
 * Implements    : CPU_DisableDCache_Activity
 *END**************************************************************************/
void CPU_DisableDCache(void)
{
    /* Clean and invalidate cache */
    CPU_InvalidateDCache(true);
    S32_SCB->CCR &= ~FEATURE_CPU_DCACHE_EN_MASK;
    (void)S32_SCB->CCR;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_EnableICache
 * Description   : Enable Instruction Cache
 *
 * Implements    : CPU_EnableICache_Activity
 *END**************************************************************************/
void CPU_EnableICache(void)
{
    /* Invalidate cache */
    CPU_InvalidateICache();
    S32_SCB->CCR |= FEATURE_CPU_ICACHE_EN_MASK;
    (void)S32_SCB->CCR;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_DisableICache
 * Description   : Disable Instruction Cache
 *
 * Implements    : CPU_DisableICache_Activity
 *END**************************************************************************/
void CPU_DisableICache(void)
{
    /* Invalidate cache */
    CPU_InvalidateICache();
    S32_SCB->CCR &= ~FEATURE_CPU_ICACHE_EN_MASK;
    (void)S32_SCB->CCR;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_InvalidateDCacheByAddress
 * Description   : Invalidates Data Cache based on the specified address
 *
 * Implements    : CPU_InvalidateDCacheByAddress_Activity
 *END**************************************************************************/
void CPU_InvalidateDCacheByAddress(uint32_t address, bool clean)
{
    if(clean)
    {
        S32_SCB->DCCIMVAC = address;
        (void)S32_SCB->DCCIMVAC;
    }
    else
    {
        S32_SCB->DCIMVAC = address;
        (void)S32_SCB->DCIMVAC;
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_InvalidateDCacheBySet
 * Description   : Invalidates Data Cache based on the set and way
 *
 * Implements    : CPU_InvalidateDCacheBySet_Activity
 *END**************************************************************************/
void CPU_InvalidateDCacheBySet(uint32_t set, uint32_t way, bool clean)
{
    DEV_ASSERT(set < (((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_SET_CNT_MASK) >> FEATURE_CPU_DCACHE_SET_CNT_SHIFT) + 1U));
    DEV_ASSERT(way < (((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_WAY_CNT_MASK) >> FEATURE_CPU_DCACHE_WAY_CNT_SHIFT) + 1U));

    uint32_t temp = 0UL;
    temp =  ((set << FEATURE_CPU_DCACHE_SET_SHIFT) & FEATURE_CPU_DCACHE_SET_MASK);
    temp |= ((way << FEATURE_CPU_DCACHE_WAY_SHIFT) & FEATURE_CPU_DCACHE_WAY_MASK);
    if(clean)
    {
        S32_SCB->DCCISW = temp;
        (void)S32_SCB->DCCISW;
    }
    else
    {
        S32_SCB->DCISW = temp;
        (void)S32_SCB->DCISW;
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_InvalidateDCache
 * Description   : Invalidates all Data Cache
 *
 * Implements    : CPU_InvalidateDCache_Activity
 *END**************************************************************************/
void CPU_InvalidateDCache(bool clean)
{
    uint32_t i = 0UL, j = 0UL;
    uint32_t dCacheSets = ((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_SET_CNT_MASK) >> FEATURE_CPU_DCACHE_SET_CNT_SHIFT) + 1U;
    uint32_t dCacheWays = ((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_WAY_CNT_MASK) >> FEATURE_CPU_DCACHE_WAY_CNT_SHIFT) + 1U;
    for(i = 0UL; i < dCacheSets; i++)
    {
        for(j = 0UL; j < dCacheWays; j++)
        {
            CPU_InvalidateDCacheBySet(i, j, clean);
        }
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_CleanDCacheByAddress
 * Description   : Cleans Data Cache based on the specified address
 *
 * Implements    : CPU_CleanDCacheByAddress_Activity
 *END**************************************************************************/
void CPU_CleanDCacheByAddress(uint32_t address)
{
    S32_SCB->DCCMVAU = address;
    (void)S32_SCB->DCCMVAU;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_CleanDCacheBySet
 * Description   : Cleans Data Cache based on set and way
 *
 * Implements    : CPU_CleanDCacheBySet_Activity
 *END**************************************************************************/
void CPU_CleanDCacheBySet(uint32_t set, uint32_t way)
{
    DEV_ASSERT(set < (((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_SET_CNT_MASK) >> FEATURE_CPU_DCACHE_SET_CNT_SHIFT) + 1U));
    DEV_ASSERT(way < (((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_WAY_CNT_MASK) >> FEATURE_CPU_DCACHE_WAY_CNT_SHIFT) + 1U));

    uint32_t temp = 0UL;
    temp =  ((set << FEATURE_CPU_DCACHE_SET_SHIFT) & FEATURE_CPU_DCACHE_SET_MASK);
    temp |= ((way << FEATURE_CPU_DCACHE_WAY_SHIFT) & FEATURE_CPU_DCACHE_WAY_MASK);
    S32_SCB->DCCSW = temp;
    (void)S32_SCB->DCCSW;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_CleanDCache
 * Description   : Cleans all Data Cache
 *
 * Implements    : CPU_CleanDCache_Activity
 *END**************************************************************************/
void CPU_CleanDCache(void)
{
    uint32_t i = 0UL, j = 0UL;
    uint32_t dCacheSets = ((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_SET_CNT_MASK) >> FEATURE_CPU_DCACHE_SET_CNT_SHIFT) + 1U;
    uint32_t dCacheWays = ((S32_SCB->CCSIDR & FEATURE_CPU_DCACHE_WAY_CNT_MASK) >> FEATURE_CPU_DCACHE_WAY_CNT_SHIFT) + 1U;
    for(i = 0UL; i < dCacheSets; i++)
    {
        for(j = 0UL; j < dCacheWays; j++)
        {
            CPU_CleanDCacheBySet(i, j);
        }
    }
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_InvalidateICache
 * Description   : Invalidates all Instruction Cache
 *
 * Implements    : CPU_InvalidateICache_Activity
 *END**************************************************************************/
void CPU_InvalidateICache(void)
{
    S32_SCB->ICIALLU = 0UL;
    (void)S32_SCB->ICIALLU;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : CPU_InvalidateICacheByAddress
 * Description   : Invalidates Data Cache based on the specified address
 *
 * Implements    : CPU_InvalidateICacheByAddress_Activity
 *END**************************************************************************/
void CPU_InvalidateICacheByAddress(uint32_t address)
{
    S32_SCB->ICIMVAU = address;
    (void)S32_SCB->ICIMVAU;
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
