/**
*   @file    sys_init.c
*
*   @brief   This file contains system initialization operations
*
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
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "config.h"

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

typedef void (*int_function_t)(void);

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*
 * system initialization : system clock, interrupt router ...
 */
__attribute__ ((section (".systeminit")))

void SystemInit(void)
{
    uint32_t i;

    /* fill the interrupts_vector with the default interrupt routine */
    for (i=0; i<176; i++)
    {
        MSCM.IRSPRC[i].R = 0x7;
    }

}

void NMI_Handler(void)
{
    while(1);
}
void HardFault_Handler(void)
{
    while(1);
}
void MemManage_Handler(void)
{
    while(1);
}
void BusFault_Handler(void)
{
    while(1);
}
void UsageFault_Handler(void)
{
    while(1);
}
void SVC_Handler(void)
{
    while(1);
}
void DebugMon_Handler(void)
{
    while(1);
}
void PendSV_Handler(void)
{
    while(1);
}
void SysTick_Handler(void)
{
    while(1);
}
void undefined_handler(void)
{
   while(1);
}


#ifdef __cplusplus
}
#endif
