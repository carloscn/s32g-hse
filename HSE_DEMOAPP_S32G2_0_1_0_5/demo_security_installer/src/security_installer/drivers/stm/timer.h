/**
*   @file    timer.h
*
*   @brief   Timer services.
*   @details This file contains declaration of timer services.
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


#ifndef TIMER_H
#define TIMER_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* (XBAR_DIV3_CLK - XBAR_CLK 400/3 MHz) See Clocking chapter */
#define STM_CLOCK 133333333 /* 133.33MHz */

#define PRESCALER 0
#define ONE_SECOND (STM_CLOCK / (1 + PRESCALER))

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
extern uint32_t interrupt_occured;

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*
    Function: STM_0_Init

    @brief    Initialize the STM_0 on channel 0
    @detailed Initialize the STM_0 on channel 0

 */
void STM_0_Init(void);

/*
    Function: STM_0_Start

    @brief    Starts the STM_0 on channel 0
    @detailed Starts the STM_0 on channel 0

 */
void STM_0_Start(uint32_t t, uint8_t ps);

/*
    Function: STM_0_Stop

    @brief    Stops the STM_0 on channel 0
    @detailed Stops the STM_0 on channel 0

 */
void STM_0_Stop(void);

/*
    Function: STM_0_ReadCnt

    @brief    Read the counter from the STM_0 on channel 0
    @detailed Read the counter from the STM_0 on channel 0

 */
uint32_t STM_0_ReadCnt(void);

#ifdef __cplusplus
}
#endif


#endif /* TIMER_H */

/** @} */

