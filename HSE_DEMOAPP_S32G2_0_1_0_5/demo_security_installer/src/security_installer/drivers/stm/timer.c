/**
*   @file    timer.c
*
*   @brief   Contains the implementations of timer functions.
*   @details Contains the implementations of timer functions.
*
*   @addtogroup timer
*   @{
*/
/*==================================================================================================
*
*   Copyright 2019-2020 NXP
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "nvic.h"
#include "S32G274A.h"
#include "timer.h"

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/
#define STM_0_IRQ_NO                 (24U)

#define VTOR                         (*(uint32_t *)(0xE000ED08UL))
/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/
uint32_t interrupt_occured = 0UL;

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/
static void STM_0_Isr(void);

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/
static void STM_0_Isr(void)
{
    STM_0.CHANNEL[0].CIR.R = 1U;
    STM_0_Stop();
    interrupt_occured = 1UL;
}
/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

void STM_0_Init(void)
{
    /* Enable IRQ for STM_0 and set priority */
    NVIC_EnableIRQ(STM_0_IRQ_NO);
    NVIC_SetPriority(STM_0_IRQ_NO, 0xF0);

    /* Modify Vector Table to set ISR for STM_0 */
    (*(uint32_t *)(VTOR + ((16 + STM_0_IRQ_NO) << 2))) = (uint32_t)STM_0_Isr;

}

void STM_0_Start(uint32_t t, uint8_t ps)
{
    if(0UL == t)
    {
        STM_0.CHANNEL[0].CMP.R = 0xFFFFFFFFUL; /* Setup CMP for max cycles */
    }
    else
    {
        STM_0.CHANNEL[0].CMP.R = t; /* Setup CMP for t cycles */
    }

    interrupt_occured = 0UL;

    STM_0.CHANNEL[0].CCR.R = 1U;  /* Enable the Channel in channel control register */
    STM_0.CNT.R = 0U;               /* STM_0 counter init */
    STM_0.CR.B.CPS = ps;          /* Set Prescaler value */
    STM_0.CR.B.TEN = 1U;          /* Enable the Timer counter */
}

void STM_0_Stop(void)
{
    STM_0.CR.B.TEN = 0x0U;          /* Disable the Timer counter */
    STM_0.CHANNEL[0].CCR.R = 0x0U;  /* Disable the Channel in channel control register */
    STM_0.CHANNEL[0].CMP.R = 0x00U; /* Setup CMP for 0 cycles */
}

uint32_t STM_0_ReadCnt(void)
{
    return ((uint32_t)STM_0.CNT.R); /* Return the Counter register value */
}


#ifdef __cplusplus
}
#endif

/** @} */
