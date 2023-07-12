/**
*   @file    flash.h
*
*   @version 1.0.0
*   @brief   Flash API functions.
*   @details This file contains the function for handling data transfers to/from flash.
*
*   @addtogroup FLASH
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

#ifndef FLASH_H
#define FLASH_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "global_defs.h"
#include "config.h"

#if defined (FLASH_SUPPORT)

#if defined(FLASH_QSPI)
#include "Fls_Qspi_Api.h"
#endif

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

#define FLASH_ABSTR

#if defined(FLASH_QSPI)

#define FLASH_PAGE_SIZE (1024U * 4U)
#define FLASH_RET_TYPE  Fls_LLDReturnType
#define FLASH_OP_OK     FLASH_E_OK
/**< @brief QuadSPI configuration mode */
#define QSPI_MODE       (FLASH_SPI_MODE)

#else
#error "Only QSPI supported"
#endif

/* Utils */
#define ALIGN_BOTTOM(value, alignment)      ((value) & (~((alignment) - 1U)))
#define ALIGN_TOP(value, alignment)         (((value) + (alignment) - 1U) & (~((alignment) - 1U)))

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

/*******************************************************************************
 * Description: Read any amount of bytes from flash
*******************************************************************************/
FLASH_RET_TYPE Flash_Read(uint32_t srcAddr, uint8_t *pDestBuff, uint32_t len);

/*******************************************************************************
 * Description: Read one block/page from Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_ReadPage(uint32_t srcAddr, uint8_t *pDestBuff);

/*******************************************************************************
 * Description: Erase one block/page from Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_ErasePage(uint32_t addr);

/*******************************************************************************
 * Description: Write one block/page in Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_WritePage(uint32_t destAddr, uint8_t *pSrcBuff);

/*******************************************************************************
 * Description: Write one block/page in Flash
 * NOTE:        Only addresses aligned to FLASH_PAGE_SIZE supported
*******************************************************************************/
FLASH_RET_TYPE Flash_WriteData_FromFlash(uint32_t dstAddr, uint32_t srcAddr, uint32_t len);

/*******************************************************************************
 * Description: Write one block/page in Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_WriteData_FromRam(uint32_t dstAddr, uint8_t *pSrcBuffer, uint32_t len);

#endif /* #ifdef FLASH_SUPPORT */

#ifdef __cplusplus
}
#endif

#endif /* FLASH_H */

/** @} */
