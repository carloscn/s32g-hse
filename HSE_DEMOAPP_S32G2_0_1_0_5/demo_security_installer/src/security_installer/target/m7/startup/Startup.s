/**
*   @file    Startup.s
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

.globl VTABLE
.section ".startup","ax"
.thumb
.set VTOR_REG, 0xE000ED08
.align 2

.globl Reset_Handler
Reset_Handler:
.globl _start
_start:
/*****************************************************/
/* Skip normal entry point as nothing is initialized */
/*****************************************************/
 mov   r0, #0
 mov   r1, #0
 mov   r2, #0
 mov   r3, #0
 mov   r4, #0
 mov   r5, #0
 mov   r6, #0
 mov   r7, #0


/*******************************************************************/
/* Freescale Guidance 1 - Init registers to avoid lock-step issues */
/* N/A                                                             */
/*******************************************************************/

/*******************************************************************/
/* Freescale Guidance 2 - MMU Initialization for CPU               */
/*  TLB0 - PbridgeB                                                */
/*  TLB1 - Internal Flash                                          */
/*  TLB2 - External SRAM                                           */
/*  TLB3 - Internal SRAM                                           */
/*  TLB4 - PbridgeA                                                */
/*******************************************************************/

/******************************************************************/
/* Autosar Guidance 1 - The start-up code shall initialize the    */
/* base addresses for interrupt and trap vector tables. These base*/
/* addresses are provided as configuration parameters or          */
/* linker/locator setting.                                        */
/******************************************************************/

/* relocate vector table to RAM */
ldr  r0, =VTOR_REG
ldr  r1, =VTABLE
ldr  r2, =(1 << 29)
orr  r1, r2 /* r1 = r1 | r2 */
str  r1,[r0]

/******************************************************************/
/* Autosar Guidance 2 - The start-up code shall initialize the    */
/* interrupt stack pointer, if an interrupt stack is              */
/* supported by the MCU. The interrupt stack pointer base address */
/* and the stack size are provided as configuration parameter or  */
/* linker/locator setting.                                        */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 3 - The start-up code shall initialize the    */
/* user stack pointer. The user stack pointer base address and    */
/* the stack size are provided as configuration parameter or      */
/* linker/locator setting.                                        */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 4 - If the MCU supports context save          */
/* operation, the start-up code shall initialize the memory which */
/* is used for context save operation. The maximum amount of      */
/* consecutive context save operations is provided as             */
/* configuration parameter or linker/locator setting.             */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 5 - The start-up code shall ensure that the   */
/* MCU internal watchdog shall not be serviced until the watchdog */
/* is initialized from the MCAL watchdog driver. This can be      */
/* done for example by increasing the watchdog service time.      */
/*                                                                */
/******************************************************************/

/* SWT disable on VDK and S32G board */
#if !defined(FPGA)

/* disable SWT0 */
ldr  r0, =0x40100010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40100000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT1 */
ldr  r0, =0x40104010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40104000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT2 */
ldr  r0, =0x40108010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40108000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT3 */
ldr  r0, =0x4010C010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x4010C000
ldr  r1, =0xFF000040
str  r1, [r0]


/* disable SWT4 */
ldr  r0, =0x40200000
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40200000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT5 */
ldr  r0, =0x40204000
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40204000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT6 */
ldr  r0, =0x40208000
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40208000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT7 */
ldr  r0, =0x4020C000
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x4020C000
ldr  r1, =0xFF000040
str  r1, [r0]

#else /* FPGA */

/* disable SWT0 */
ldr  r0, =0x4001E010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x4001E000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT1 */
ldr  r0, =0x4001F010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x4001F000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT2 */
ldr  r0, =0x40117010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40117000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT3 */
ldr  r0, =0x40118010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40118000
ldr  r1, =0xFF000040
str  r1, [r0]

/* disable SWT4 */
ldr  r0, =0x40119010
ldr  r1, =0xC520
str  r1, [r0]
ldr  r1, =0xD928
str  r1, [r0]
ldr  r0, =0x40119000
ldr  r1, =0xFF000040
str  r1, [r0]
#endif /* !defined(FPGA) */

/* Init .bss section */
bl S32G274A_ram_init_64bit

/******************************************************************/
/* Autosar Guidance 6 - If the MCU supports cache memory for data */
/* and/or code, it shall be initialized and enabled in the        */
/* start-up code.                                                 */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 7 - The start-up code shall initialize MCU    */
/* specific features of internal memory like memory protection.   */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 8 - If external memory is used, the memory    */
/* shall be initialized in the start-up code. The start-up code   */
/* shall be prepared to support different memory configurations   */
/* depending on code location. Different configuration options    */
/* shall be taken into account for code execution from            */
/* external/internal memory.                                      */
/* N/A - external memory is not used                              */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 9 - The settings of the different memories    */
/* shall be provided to the start-up code as configuration        */
/* parameters.                                                    */
/* N/A - all memories are already configured                      */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 10 - In the start-up code a default           */
/* initialization of the MCU clock system shall be performed      */
/* including global clock prescalers.                             */
/******************************************************************/
bl SystemInit

/******************************************************************/
/* Autosar Guidance 5 - The start-up code shall ensure that the   */
/* MCU internal watchdog shall not be serviced until the watchdog */
/* is initialized from the MCAL watchdog driver. This can be      */
/* done for example by increasing the watchdog service time.      */
/*                                                                */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 11 - The start-up code shall enable           */
/* protection mechanisms for special function registers(SFR's),   */
/* if supported by the MCU.                                       */
/* N/A - will be handled by Autosar OS                            */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 12 - The start-up code shall initialize all   */
/* necessary write once registers or registers common to several  */
/* drivers where one write, rather than repeated writes, to the   */
/* register is required or highly desirable.                      */
/******************************************************************/

/******************************************************************/
/* Autosar Guidance 13 - The start-up code shall initialize a     */
/* minimum amount of RAM in order to allow proper execution of    */
/* the MCU driver services and the caller of these services.      */
/******************************************************************/


/*********************************/
/* Set the small ro data pointer */
/*********************************/


/*********************************/
/* Set the small rw data pointer */
/*********************************/

/******************************************************************/
/* Call Main Routine                                              */
/******************************************************************/
bl main

/******************************************************************/
/* Init runtime check data space                                  */
/******************************************************************/

    BKPT #1 /* last instruction for the debugger to dump results data */

    b .

.endf Reset_Handler

.globl S32G274A_ram_init_64bit
S32G274A_ram_init_64bit:
    ldr r0, =__RAM_START_ADDR
    ldr r1, =__RAM_END_ADDR
    mov r2, #0
    mov r3, #0

    cmp r0, r1
    beq 2f
    sub r1, r1, r0
1:
    stmia r0!, {r2,r3}
    sub r1,r1, #0x8
    mov r4, #0x00
    cmp r1, r4
    bne 1b
2:
    bx  lr
.endf S32G274A_ram_init_64bit

; Allocate 8kiB Stack space
.section .stack,"aw"
.align 8
.space 0x2000
