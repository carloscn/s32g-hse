/**
*   @file    Vector_core.s
*
*   @brief   This file contains the vector table
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

.section  ".intc_vector","ax"
.align 2
.thumb
.globl undefined_handler
.globl undefined_handler
.globl VTABLE
.globl _Stack_start              /* Top of Stack for Initial Stack Pointer */
.globl Reset_Handler             /* Reset Handler */
.globl NMI_Handler               /* NMI Handler */
.globl HardFault_Handler         /* Hard Fault Handler */
.globl MemManage_Handler         /* Reserved */
.globl BusFault_Handler          /* Bus Fault Handler */
.globl UsageFault_Handler        /* Usage Fault Handler */
.globl SVC_Handler               /* SVCall Handler */
.globl DebugMon_Handler          /* Debug Monitor Handler */
.globl PendSV_Handler            /* PendSV Handler */
.globl SysTick_Handler           /* SysTick Handler */ /* 15*/

VTABLE:

.long _Stack_start              /* Top of Stack for Initial Stack Pointer */
.long Reset_Handler             /* Reset Handler */
.long NMI_Handler               /* NMI Handler */
.long HardFault_Handler         /* Hard Fault Handler */
.long MemManage_Handler         /* Reserved */
.long BusFault_Handler          /* Bus Fault Handler */
.long UsageFault_Handler        /* Usage Fault Handler */
.long 0                         /* Reserved */
.long 0                         /* Reserved */
.long 0                         /* Reserved */
.long 0                         /* Reserved */
.long SVC_Handler               /* SVCall Handler */
.long DebugMon_Handler          /* Debug Monitor Handler */
.long 0                         /* Reserved */
.long PendSV_Handler            /* PendSV Handler */
.long SysTick_Handler           /* SysTick Handler */ /* 15*/

.long undefined_handler /*0*/
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler /*10*/
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler /*20*/
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler /*30*/
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler     /*39*/
.long undefined_handler /*40*/
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler

/* External interrupts */
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler

/* External interrupts */
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler

/* External interrupts */
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler

/* External interrupts */
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler
.long undefined_handler




.size VTABLE, . - VTABLE

