/**
*   @file    hse_flash.c
*
*   @brief   Flash operations API.
*   @details Flash operations abstraction.
*
*   @addtogroup [FLASH]
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

#include "flash.h"
#include <string.h>

#if defined (FLASH_SUPPORT)

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/* RAM buffer used for data transfer from RAM/FLASH to FLASH */
static uint8_t buf[FLASH_PAGE_SIZE];
/* RAM buffer used for reading data from FLASH (e.g. validation of data transfer after writting to FLASH) */
static uint8_t bufRead[FLASH_PAGE_SIZE];

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

static void Flash_EraseWriteVerifyPage(uint32_t addr);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description: Write one block/page in Flash
*******************************************************************************/
static void Flash_EraseWriteVerifyPage(uint32_t addr)
{
    FLASH_RET_TYPE flsResponse;

    /* Sanity check (address should be aligned to PAGE SIZE) */
    ASSERT(ALIGN_BOTTOM(addr, FLASH_PAGE_SIZE) == addr);

    /* Erase - Write - Verify page */
    ASSERT(FLASH_OP_OK == (flsResponse = Flash_ErasePage(addr)));
    ASSERT(FLASH_OP_OK == (flsResponse = Flash_WritePage(addr, buf)));
    ASSERT(FLASH_OP_OK == (flsResponse = Flash_ReadPage(addr, bufRead)));
    ASSERT(0 == memcmp(buf, bufRead, FLASH_PAGE_SIZE));

    (void)flsResponse;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

FLASH_RET_TYPE Flash_Read(uint32_t srcAddr, uint8_t *pDestBuff, uint32_t len)
{
#if defined(FLASH_QSPI)
    return Fls_Qspi_Read(srcAddr, pDestBuff, len , FALSE, QSPI_MODE);
#else
    return FLASH_E_FAILED;
    #error "Only QSPI supported"
#endif
}

/*******************************************************************************
 * Description: Read one block/page from Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_ReadPage(uint32_t srcAddr, uint8_t *pDestBuff)
{
#if defined(FLASH_QSPI)
    return Fls_Qspi_Read(srcAddr, pDestBuff, FLASH_PAGE_SIZE , FALSE, QSPI_MODE);
#else
    return FLASH_E_FAILED;
    #error "Only QSPI supported"
#endif
}

/*******************************************************************************
 * Description: Erase one block/page from Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_ErasePage(uint32_t addr)
{
#if defined(FLASH_QSPI)
    return Fls_Qspi_EraseBlock(addr, FLASH_PAGE_SIZE, FALSE, QSPI_MODE);
#else
    return FLASH_E_FAILED;
    #error "Only QSPI supported"
#endif
}

/*******************************************************************************
 * Description: Write one block/page in Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_WritePage(uint32_t destAddr, uint8_t *pSrcBuff)
{
#if defined(FLASH_QSPI)
    return Fls_Qspi_Program(destAddr, pSrcBuff, FLASH_PAGE_SIZE, FALSE, QSPI_MODE);
#else
    return FLASH_E_FAILED;
    #error "Only QSPI supported"
#endif
}


/*******************************************************************************
 * Description: Write one block/page in Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_WriteData_FromFlash(uint32_t dstAddr, uint32_t srcAddr, uint32_t len)
{
    /* Currently only addresses aligned to FLASH_PAGE_SIZE are supported */
    ASSERT(ALIGN_BOTTOM(srcAddr, FLASH_PAGE_SIZE) == srcAddr);
    ASSERT(ALIGN_BOTTOM(dstAddr, FLASH_PAGE_SIZE) == dstAddr);

    FLASH_RET_TYPE flsResponse;
    uint32_t currentDstPage = dstAddr;
    uint32_t currentSrcPage = srcAddr;
    uint32_t numberOfPages = len / FLASH_PAGE_SIZE;
    uint32_t bytesInLastPage = len % FLASH_PAGE_SIZE;

    /* Transfer data from source to destination page by page */
    while((numberOfPages--) > 0UL)
    {
        ASSERT(FLASH_OP_OK == (flsResponse = Flash_ReadPage(currentSrcPage, buf)));
        Flash_EraseWriteVerifyPage(currentDstPage);

        currentSrcPage += FLASH_PAGE_SIZE;
        currentDstPage += FLASH_PAGE_SIZE;
    }

    /* Transfer remaining bytes in last page (if any) */
    if (bytesInLastPage > 0UL)
    {
        ASSERT(FLASH_OP_OK == (flsResponse = Flash_ReadPage(currentSrcPage, buf)));
        ASSERT(FLASH_OP_OK == (flsResponse = Flash_ReadPage(currentDstPage, bufRead)));
        (void)memcpy(&buf[bytesInLastPage], &bufRead[bytesInLastPage], FLASH_PAGE_SIZE - bytesInLastPage);
        Flash_EraseWriteVerifyPage(currentDstPage);
    }


    (void)flsResponse;

    return FLASH_OP_OK;
}

/*******************************************************************************
 * Description: Write one block/page in Flash
*******************************************************************************/
FLASH_RET_TYPE Flash_WriteData_FromRam(uint32_t dstAddr, uint8_t *pSrcBuffer, uint32_t len)
{
    FLASH_RET_TYPE flsResponse;

    uint32_t firstPageAddr = ALIGN_BOTTOM(dstAddr, FLASH_PAGE_SIZE);
    uint32_t lastPageAddr = ALIGN_TOP(dstAddr + len, FLASH_PAGE_SIZE);
    uint32_t numberOfPages = ((lastPageAddr - firstPageAddr) / FLASH_PAGE_SIZE);
    uint32_t currentPage = firstPageAddr;

    uint32_t offsetInFirstPage = dstAddr - firstPageAddr;
    uint32_t bytesToWrite, bufferOffset;

    /* Read first page */
    ASSERT(FLASH_OP_OK == (flsResponse = Flash_ReadPage(currentPage, buf)));

    /* Contents within first page */
    if (numberOfPages == 1UL)
    {
        /* Update page contents with data from RAM */
        memcpy(&buf[offsetInFirstPage], &pSrcBuffer[0U], len);

        /* Write the updated page in flash */
        Flash_EraseWriteVerifyPage(currentPage);
        return FLASH_OP_OK;
    }

    /* Contents is on 2 or more pages */

    /* Write contents in first page */
    bufferOffset = 0UL;
    bytesToWrite = FLASH_PAGE_SIZE - offsetInFirstPage;
    memcpy(&buf[offsetInFirstPage], &pSrcBuffer[bufferOffset], bytesToWrite);
    Flash_EraseWriteVerifyPage(currentPage);

    /* Advance to next page (and in RAM, by number of bytes written) */
    bufferOffset += bytesToWrite;
    currentPage += FLASH_PAGE_SIZE;

    /* Write contents in second to one before last pages */
    while((--numberOfPages) > 1UL)
    {
        /* Write page from contents in RAM */
        memcpy(&buf[0U], &pSrcBuffer[bufferOffset], FLASH_PAGE_SIZE);
        Flash_EraseWriteVerifyPage(currentPage);

        bufferOffset += FLASH_PAGE_SIZE;
        currentPage += FLASH_PAGE_SIZE;
    }

    /* Write contents in last page */
    ASSERT(FLASH_OP_OK == (flsResponse = Flash_ReadPage(currentPage, buf)));
    memcpy(&buf[0U], &pSrcBuffer[bufferOffset], len - bufferOffset);
    Flash_EraseWriteVerifyPage(currentPage);

    (void)flsResponse;

    return FLASH_OP_OK;
}

#endif /* #if defined FLASH_SUPPORT */

#ifdef __cplusplus
}
#endif

/** @} */
