/**
 *   @file    printf.h
 *
 *   @brief   printf header
 *
 *   @addtogroup printf
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

#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/*=============================================================================
                       INCLUDE FILES
=============================================================================*/

/*=============================================================================
                       MACROS
=============================================================================*/

#define DEST_CONSOLE    (1)
#define DEST_STRING     (2)

/*=============================================================================
                       ENUMS
=============================================================================*/

/*=============================================================================
                       STRUCTURES AND OTHER TYPEDEFS
=============================================================================*/

typedef struct
{
    int dest;
    void (*func)(char);
    char *loc;
} PRINTK_INFO;

/*=============================================================================
                      GLOBAL VARIABLE DECLARATIONS
=============================================================================*/

/*=============================================================================
                        FUNCTION PROTOTYPES
=============================================================================*/

void printf_init(void);
void printf_end(void);
int _printf (const char *fmt, ...);
int printk (PRINTK_INFO *info, const char *fmt, va_list ap);

#endif
