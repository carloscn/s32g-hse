/**
*   @file    mc_me.c
*
*   @brief   Contains function implementation for reset functionality.
*   @details Contains function implementation for reset functionality.
*
*   @addtogroup security_installer
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
#include "mc_me.h"
#include "std_typedefs.h"
#include "config.h"

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

/** \brief  Enter low-power standby state
 *    WFI (Wait For Interrupt) makes the processor suspend execution (Clock is stopped) until an IRQ interrupts.
 */
#if defined (__GNUC__)
#define STANDBY() __asm volatile ("wfi")
#else
#define STANDBY() __asm("wfi")
#endif

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

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/
static void HAPI_MCME_mode_transition(MODE_TRANSITION_REQ_T mode);

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/
static void HAPI_MCME_mode_transition(MODE_TRANSITION_REQ_T mode)
{
    volatile uint8_t loop = 1U;

    /* Program Mode Configuration */
    MC_ME.MODE_CONF.R = mode;
    /* Set Mode Update*/
    MC_ME.MODE_UPD.B.MODE_UPD = 1U;
    /* Write Ctrl Key*/
    MC_ME.CTL_KEY.R = 0x5AF0U;
    MC_ME.CTL_KEY.R = 0xA50F;

    /* Wait for Mode Transition To complete */
    while(1U == loop)
    {
        STANDBY();
    }

}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

void MC_ME_DestructiveReset(void)
{
    HAPI_MCME_mode_transition(DESTRUCTIVE_RESET);
}

void MC_ME_FunctionalReset(void)
{
    HAPI_MCME_mode_transition(FUNCTIONAL_RESET);
}

#ifdef __cplusplus
}
#endif

/** @} */
