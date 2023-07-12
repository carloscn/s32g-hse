/**
 *   @file    Serial.h
 *
 *   @brief   HSE serial  configuration header.
 *
 *   @addtogroup serial_h
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
extern "C"
{
#endif

#ifndef SERIAL_H
#define SERIAL_H

/*==================================================================================================
 *                                        INCLUDE FILES
 *  ==============================================================================================*/

#include "config.h"
#include <stdlib.h>
#include <stdarg.h>

/*==================================================================================================
 *                               TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *  ==============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *  ==============================================================================================*/
#define UART_9600_BAUDRATE   0
#define UART_19200_BAUDRATE  1
#define UART_38400_BAUDRATE  2
#define UART_57600_BAUDRATE  3
#define UART_115200_BAUDRATE 4
#define UART_256000_BAUDRATE 5

/* UART baudrate */
#define UART_BAUDRATE   UART_115200_BAUDRATE    /* Default baud rate */

/* LIN BAUD clock */
#define LIN_BAUD_CLK    (80U)   /* MHz */

/* Use the below commands with a terminal that supports ANSI/VT100 Control sequences */
/*! Example: Tera Term !*/
/* Note: Putty does not fully support */

#define CLEAR_SCROLLBACK "\033[3J"
#define CLEAR_SCREEN 	 "\033[2J"
#define RESET_CURSOR 	 "\033[H"

#define SET_COLOUR_RED 	 "\033[31m"
#define SET_COLOUR_GREEN "\033[32m"
#define SET_COLOUR_DEFAULT "\033[0m"

#define HIGHLIGHT_YELLOW "\033[43m"
#define HIGHLIGHT_DEFAULT "\033[49m"

#define TEXT_RESET		"\033[0m"
#define TEXT_BOLD		"\033[1m"
#define TEXT_DIM		"\033[2m"
#define TEXT_UNDERLINE 	"\033[4m"
#define TEXT_BLINK	 	"\033[5m"

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *  ==============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 *  ==============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 *  ==============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 *  ==============================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *  ==============================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *  ==============================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *  ==============================================================================================*/
/*******************************************************************************
 * Function:    UART_init
 *
 * Description: Initialise serial port for tb_printf using LINFLexD_0
 *              No par / 8 data bits / 1 stop bit / No FC
 *
 ******************************************************************************/
void UART_init(void);

/********************************************************************
 * Function:    uart_0_getchar
 *
 ********************************************************************/
char uart_0_getchar(char *ch);

/********************************************************************
 * Function:    uart_0_getchar
 *
 ********************************************************************/
void uart_0_putchar(char ch);

/********************************************************************
 * Function:    uart_txstr
 *
 ********************************************************************/
void uart_txstr(char *str, uint32_t len);

#endif

/** @} */
