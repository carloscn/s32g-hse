/**
*   @file    mc_me.h
*
*   @brief   Contains function definitions for reset functionality.
*   @details Contains function definitions for reset functionality.
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

#ifndef MC_ME_H
#define MC_ME_H

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
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

typedef enum
{
    DESTRUCTIVE_RESET = 1,
    FUNCTIONAL_RESET = 2
} MODE_TRANSITION_REQ_T;

/*
    Function: MC_ME_DestructiveReset

    @brief    Issues Destructive reset
    @detailed Issues Destructive reset

 */
void MC_ME_DestructiveReset(void);

/*
    Function: MC_ME_FunctionalReset

    @brief    Issues Functional reset
    @detailed Issues Functional reset

 */
void MC_ME_FunctionalReset(void);

#ifdef __cplusplus
}
#endif

#endif /* MC_ME_H */

/** @} */
