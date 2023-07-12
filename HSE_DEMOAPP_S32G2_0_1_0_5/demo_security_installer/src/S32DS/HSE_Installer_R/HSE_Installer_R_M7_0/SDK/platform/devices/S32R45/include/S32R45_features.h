/*
** ###################################################################
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright 2019 NXP
**     All rights reserved.
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**
** ###################################################################
*/

/*!
 * @file S32R45_features.h
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.3, Global typedef not referenced.
 * Type used only in some modules of the SDK.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The macros defined are used to define features for each driver, so this might be reported
 * when the analysis is made only on one driver.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
 * These are very simple macros used for abstracting hw implementation.
 * They help make the code easy to understand.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.1, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.2, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.4, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.5, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 */

#if !defined(S32R45_FEATURES_H)
#define S32R45_FEATURES_H

/* include device_registers.h for SIUL2 module configuration structures */
#include "device_registers.h"

/* ERRATA sections*/

/* Clock features */


/* @brief Slow IRC trimmed clock frequency(32KHz). */
#define FEATURE_IRCOSC0_FREQ (32000U)

/* @brief Fast IRC trimmed clock frequency(48MHz). */
#define FEATURE_IRCOSC1_FREQ  (48000000U)

/* @brief Fast IRC AE trimmed clock frequency(16MHz). */
#define FEATURE_IRCOSC2_FREQ  (16000000U)



#define FEATURE_HAS_FIRC_CLK             (1U)
#define FEATURE_HAS_FXOSC_CLK            (1U)
#define FEATURE_HAS_SIRC_CLK             (1U)
#define FEATURE_HAS_COREPLL_PHI0_CLK     (1U)
#define FEATURE_HAS_COREPLL_PHI1_CLK     (1U)
#define FEATURE_HAS_COREPLL_DFS1_CLK     (1U)
#define FEATURE_HAS_COREPLL_DFS2_CLK     (1U)
#define FEATURE_HAS_COREPLL_DFS3_CLK     (1U)
#define FEATURE_HAS_COREPLL_DFS4_CLK     (1U)
#define FEATURE_HAS_COREPLL_DFS5_CLK     (1U)
#define FEATURE_HAS_COREPLL_DFS6_CLK     (1U)
#define FEATURE_HAS_PERIPHPLL_PHI0_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI1_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI2_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI3_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI4_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI5_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI6_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_PHI7_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_DFS1_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_DFS2_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_DFS3_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_DFS4_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_DFS5_CLK   (1U)
#define FEATURE_HAS_PERIPHPLL_DFS6_CLK   (1U)
#define FEATURE_HAS_AURORAPLL_PHI0_CLK   (1U)
#define FEATURE_HAS_DDRPLL_PHI0_CLK      (1U)
#define FEATURE_HAS_ACCELPLL_PHI0_CLK    (1U)
#define FEATURE_HAS_ACCELPLL_PHI1_CLK    (1U)


/*! @brief Clock names. */
typedef enum {
    FIRC_CLK                         = 0x0U,         /*!< FIRC_CLK_CLK clock source              */
    FXOSC_CLK                        = 0x1U,         /*!< FXOSC_CLK_CLK clock source             */
    SIRC_CLK                         = 0x2U,         /*!< SIRC_CLK_CLK clock source              */
    CORE_PLL_PHI0_CLK                = 0x3U,         /*!< CORE_PLL_PHI0_CLK_CLK clock source     */
    CORE_PLL_PHI1_CLK                = 0x4U,         /*!< CORE_PLL_PHI1_CLK_CLK clock source     */
    CORE_PLL_DFS1_CLK                = 0x5U,         /*!< CORE_PLL_DFS1_CLK_CLK clock source     */
    CORE_PLL_DFS2_CLK                = 0x6U,         /*!< CORE_PLL_DFS2_CLK_CLK clock source     */
    CORE_PLL_DFS3_CLK                = 0x7U,         /*!< CORE_PLL_DFS3_CLK_CLK clock source     */
    CORE_PLL_DFS4_CLK                = 0x8U,         /*!< CORE_PLL_DFS4_CLK_CLK clock source     */
    CORE_PLL_DFS5_CLK                = 0x9U,         /*!< CORE_PLL_DFS5_CLK_CLK clock source     */
    CORE_PLL_DFS6_CLK                = 0xaU,         /*!< CORE_PLL_DFS6_CLK_CLK clock source     */
    PERIPH_PLL_PHI0_CLK              = 0xbU,         /*!< PERIPH_PLL_PHI0_CLK_CLK clock source   */
    PERIPH_PLL_PHI1_CLK              = 0xcU,         /*!< PERIPH_PLL_PHI1_CLK_CLK clock source   */
    PERIPH_PLL_PHI2_CLK              = 0xdU,         /*!< PERIPH_PLL_PHI2_CLK_CLK clock source   */
    PERIPH_PLL_PHI3_CLK              = 0xeU,         /*!< PERIPH_PLL_PHI3_CLK_CLK clock source   */
    PERIPH_PLL_PHI4_CLK              = 0xfU,         /*!< PERIPH_PLL_PHI4_CLK_CLK clock source   */
    PERIPH_PLL_PHI5_CLK              = 0x10U,         /*!< PERIPH_PLL_PHI5_CLK_CLK clock source   */
    PERIPH_PLL_PHI6_CLK              = 0x11U,         /*!< PERIPH_PLL_PHI6_CLK_CLK clock source   */
    PERIPH_PLL_PHI7_CLK              = 0x12U,         /*!< PERIPH_PLL_PHI7_CLK_CLK clock source   */
    PERIPH_PLL_DFS1_CLK              = 0x13U,         /*!< PERIPH_PLL_DFS1_CLK_CLK clock source   */
    PERIPH_PLL_DFS2_CLK              = 0x14U,         /*!< PERIPH_PLL_DFS2_CLK_CLK clock source   */
    PERIPH_PLL_DFS3_CLK              = 0x15U,         /*!< PERIPH_PLL_DFS3_CLK_CLK clock source   */
    PERIPH_PLL_DFS4_CLK              = 0x16U,         /*!< PERIPH_PLL_DFS4_CLK_CLK clock source   */
    PERIPH_PLL_DFS5_CLK              = 0x17U,         /*!< PERIPH_PLL_DFS5_CLK_CLK clock source   */
    PERIPH_PLL_DFS6_CLK              = 0x18U,         /*!< PERIPH_PLL_DFS6_CLK_CLK clock source   */
    AURORA_PLL_PHI0_CLK              = 0x19U,         /*!< AURORA_PLL_PHI0_CLK_CLK clock source   */
    DDR_PLL_PHI0_CLK                 = 0x1aU,         /*!< DDR_PLL_PHI0_CLK_CLK clock source      */
    ACCEL_PLL_PHI0_CLK               = 0x1bU,         /*!< ACCEL_PLL_PHI0_CLK_CLK clock source    */
    ACCEL_PLL_PHI1_CLK               = 0x1cU,         /*!< ACCEL_PLL_PHI1_CLK_CLK clock source    */
    FTM_0_EXT_REF_CLK                = 0x1dU,         /*!< ftm_0_ext_ref_CLK external source      */
    FTM_1_EXT_REF_CLK                = 0x1eU,         /*!< ftm_1_ext_ref_CLK external source      */
    GMAC0_EXT_REF_CLK                = 0x1fU,         /*!< gmac0_ext_ref_CLK external source      */
    GMAC0_EXT_RX_REF_CLK             = 0x20U,         /*!< gmac0_ext_rx_ref_CLK external source   */
    GMAC0_EXT_TX_REF_CLK             = 0x21U,         /*!< gmac0_ext_tx_ref_CLK external source   */
    GMAC1_EXT_REF_CLK                = 0x22U,         /*!< gmac1_ext_ref_CLK external source      */
    GMAC1_EXT_RX_REF_CLK             = 0x23U,         /*!< gmac1_ext_rx_ref_CLK external source   */
    GMAC1_EXT_TX_REF_CLK             = 0x24U,         /*!< gmac1_ext_tx_ref_CLK external source   */
    PFEMAC0_EXT_REF_CLK              = 0x25U,         /*!< pfemac0_ext_ref_CLK external source    */
    PFEMAC0_EXT_RX_REF_CLK           = 0x26U,         /*!< pfemac0_ext_rx_ref_CLK external source */
    XBAR_2X_CLK                      = 0x27U,         /*!< XBAR_2X_CLK common clock           */
    XBAR_CLK                         = 0x28U,         /*!< XBAR_CLK common clock              */
    XBAR_DIV2_CLK                    = 0x29U,         /*!< XBAR_DIV2_CLK common clock         */
    XBAR_DIV3_CLK                    = 0x2aU,         /*!< XBAR_DIV3_CLK common clock         */
    XBAR_DIV4_CLK                    = 0x2bU,         /*!< XBAR_DIV4_CLK common clock         */
    XBAR_DIV6_CLK                    = 0x2cU,         /*!< XBAR_DIV6_CLK common clock         */
    A53_CORE_CLK                     = 0x2dU,         /*!< A53_CORE_CLK common clock          */
    A53_CORE_DIV2_CLK                = 0x2eU,         /*!< A53_CORE_DIV2_CLK common clock     */
    A53_CORE_DIV10_CLK               = 0x2fU,         /*!< A53_CORE_DIV10_CLK common clock    */
    ACCEL3_CLK                       = 0x30U,         /*!< ACCEL3_CLK common clock            */
    ACCEL3_DIV3_CLK                  = 0x31U,         /*!< ACCEL3_DIV3_CLK common clock       */
    ACCEL4_CLK                       = 0x32U,         /*!< ACCEL4_CLK common clock            */
    DDR_CLK                          = 0x33U,         /*!< DDR_CLK common clock               */
    PER_CLK                          = 0x34U,         /*!< PER_CLK common clock               */
    GMAC0_REF_DIV_CLK                = 0x35U,         /*!< GMAC0_REF_DIV_CLK common clock     */
    GMAC1_REF_DIV_CLK                = 0x36U,         /*!< GMAC1_REF_DIV_CLK common clock     */
    ADC0_CLK                         = 0x37U,         /*!< ADC0_CLK clock source                  */
    ADC1_CLK                         = 0x38U,         /*!< ADC1_CLK clock source                  */
    CLKOUT0_CLK                      = 0x39U,         /*!< CLKOUT0_CLK clock source               */
    CLKOUT1_CLK                      = 0x3aU,         /*!< CLKOUT1_CLK clock source               */
    CRC0_CLK                         = 0x3bU,         /*!< CRC0_CLK clock source                  */
    CTU0_CLK                         = 0x3cU,         /*!< CTU0_CLK clock source                  */
    DABP_CLK                         = 0x3dU,         /*!< DABP_CLK clock source                  */
    DMA0_CLK                         = 0x3eU,         /*!< DMA0_CLK clock source                  */
    DMA1_CLK                         = 0x3fU,         /*!< DMA1_CLK clock source                  */
    DMAMUX0_CLK                      = 0x40U,         /*!< DMAMUX0_CLK clock source               */
    DMAMUX1_CLK                      = 0x41U,         /*!< DMAMUX1_CLK clock source               */
    DMAMUX2_CLK                      = 0x42U,         /*!< DMAMUX2_CLK clock source               */
    DMAMUX3_CLK                      = 0x43U,         /*!< DMAMUX3_CLK clock source               */
    DMA_CRC0_CLK                     = 0x44U,         /*!< DMA_CRC0_CLK clock source              */
    DMA_CRC1_CLK                     = 0x45U,         /*!< DMA_CRC1_CLK clock source              */
    EIM0_CLK                         = 0x46U,         /*!< EIM0_CLK clock source                  */
    EIM1_CLK                         = 0x47U,         /*!< EIM1_CLK clock source                  */
    EIM2_CLK                         = 0x48U,         /*!< EIM2_CLK clock source                  */
    EIM3_CLK                         = 0x49U,         /*!< EIM3_CLK clock source                  */
    EIM_BBE32DSP_CLK                 = 0x4aU,         /*!< EIM_BBE32DSP_CLK clock source          */
    EIM_CLK                          = 0x4bU,         /*!< EIM_CLK clock source                   */
    EIM_LAX0_CLK                     = 0x4cU,         /*!< EIM_LAX0_CLK clock source              */
    EIM_LAX1_CLK                     = 0x4dU,         /*!< EIM_LAX1_CLK clock source              */
    EIM_PER1_CLK                     = 0x4eU,         /*!< EIM_PER1_CLK clock source              */
    ERM_CLK                          = 0x4fU,         /*!< ERM_CLK clock source                   */
    ERM_CPU0_CLK                     = 0x50U,         /*!< ERM_CPU0_CLK clock source              */
    ERM_CPU1_CLK                     = 0x51U,         /*!< ERM_CPU1_CLK clock source              */
    ERM_CPU2_CLK                     = 0x52U,         /*!< ERM_CPU2_CLK clock source              */
    ERM_EDMA0_CLK                    = 0x53U,         /*!< ERM_EDMA0_CLK clock source             */
    ERM_EDMA1_CLK                    = 0x54U,         /*!< ERM_EDMA1_CLK clock source             */
    ERM_LAX0_CLK                     = 0x55U,         /*!< ERM_LAX0_CLK clock source              */
    ERM_LAX1_CLK                     = 0x56U,         /*!< ERM_LAX1_CLK clock source              */
    ERM_PER1_CLK                     = 0x57U,         /*!< ERM_PER1_CLK clock source              */
    ERM_PER_CLK                      = 0x58U,         /*!< ERM_PER_CLK clock source               */
    FDMA0_CLK                        = 0x59U,         /*!< FDMA0_CLK clock source                 */
    FLEXCAN0_CLK                     = 0x5aU,         /*!< FLEXCAN0_CLK clock source              */
    FLEXCAN1_CLK                     = 0x5bU,         /*!< FLEXCAN1_CLK clock source              */
    FLEXCAN2_CLK                     = 0x5cU,         /*!< FLEXCAN2_CLK clock source              */
    FLEXCAN3_CLK                     = 0x5dU,         /*!< FLEXCAN3_CLK clock source              */
    FLEXCAN4_CLK                     = 0x5eU,         /*!< FLEXCAN4_CLK clock source              */
    FLEXCAN5_CLK                     = 0x5fU,         /*!< FLEXCAN5_CLK clock source              */
    FLEXCAN6_CLK                     = 0x60U,         /*!< FLEXCAN6_CLK clock source              */
    FLEXCAN7_CLK                     = 0x61U,         /*!< FLEXCAN7_CLK clock source              */
    FRAY0_CLK                        = 0x62U,         /*!< FRAY0_CLK clock source                 */
    FTIMER0_CLK                      = 0x63U,         /*!< FTIMER0_CLK clock source               */
    FTIMER1_CLK                      = 0x64U,         /*!< FTIMER1_CLK clock source               */
    GMAC0_RX_CLK                     = 0x65U,         /*!< GMAC0_RX_CLK clock source              */
    GMAC0_TS_CLK                     = 0x66U,         /*!< GMAC0_TS_CLK clock source              */
    GMAC0_TX_CLK                     = 0x67U,         /*!< GMAC0_TX_CLK clock source              */
    GMAC1_RX_CLK                     = 0x68U,         /*!< GMAC1_RX_CLK clock source              */
    GMAC1_TS_CLK                     = 0x69U,         /*!< GMAC1_TS_CLK clock source              */
    GMAC1_TX_CLK                     = 0x6aU,         /*!< GMAC1_TX_CLK clock source              */
    IIC0_CLK                         = 0x6bU,         /*!< IIC0_CLK clock source                  */
    IIC1_CLK                         = 0x6cU,         /*!< IIC1_CLK clock source                  */
    LBIST0_CLK                       = 0x6dU,         /*!< LBIST0_CLK clock source                */
    LBIST1_CLK                       = 0x6eU,         /*!< LBIST1_CLK clock source                */
    LBIST2_CLK                       = 0x6fU,         /*!< LBIST2_CLK clock source                */
    LBIST3_CLK                       = 0x70U,         /*!< LBIST3_CLK clock source                */
    LBIST4_CLK                       = 0x71U,         /*!< LBIST4_CLK clock source                */
    LBIST5_CLK                       = 0x72U,         /*!< LBIST5_CLK clock source                */
    LBIST6_CLK                       = 0x73U,         /*!< LBIST6_CLK clock source                */
    LBIST7_CLK                       = 0x74U,         /*!< LBIST7_CLK clock source                */
    LIN0_CLK                         = 0x75U,         /*!< LIN0_CLK clock source                  */
    LIN1_CLK                         = 0x76U,         /*!< LIN1_CLK clock source                  */
    LIN2_CLK                         = 0x77U,         /*!< LIN2_CLK clock source                  */
    OCOTP0_CLK                       = 0x78U,         /*!< OCOTP0_CLK clock source                */
    PIT0_CLK                         = 0x79U,         /*!< PIT0_CLK clock source                  */
    PIT1_CLK                         = 0x7aU,         /*!< PIT1_CLK clock source                  */
    QSPI0_CLK                        = 0x7bU,         /*!< QSPI0_CLK clock source                 */
    SIUL0_CLK                        = 0x7cU,         /*!< SIUL0_CLK clock source                 */
    SIUL1_CLK                        = 0x7dU,         /*!< SIUL1_CLK clock source                 */
    SPI0_CLK                         = 0x7eU,         /*!< SPI0_CLK clock source                  */
    SPI1_CLK                         = 0x7fU,         /*!< SPI1_CLK clock source                  */
    SPI2_CLK                         = 0x80U,         /*!< SPI2_CLK clock source                  */
    SPI3_CLK                         = 0x81U,         /*!< SPI3_CLK clock source                  */
    SPI4_CLK                         = 0x82U,         /*!< SPI4_CLK clock source                  */
    SPI5_CLK                         = 0x83U,         /*!< SPI5_CLK clock source                  */
    STM0_CLK                         = 0x84U,         /*!< STM0_CLK clock source                  */
    STM1_CLK                         = 0x85U,         /*!< STM1_CLK clock source                  */
    STM2_CLK                         = 0x86U,         /*!< STM2_CLK clock source                  */
    STM3_CLK                         = 0x87U,         /*!< STM3_CLK clock source                  */
    STM4_CLK                         = 0x88U,         /*!< STM4_CLK clock source                  */
    STM6_CLK                         = 0x89U,         /*!< STM6_CLK clock source                  */
    STM7_CLK                         = 0x8aU,         /*!< STM7_CLK clock source                  */
    SWT0_CLK                         = 0x8bU,         /*!< SWT0_CLK clock source                  */
    SWT1_CLK                         = 0x8cU,         /*!< SWT1_CLK clock source                  */
    SWT2_CLK                         = 0x8dU,         /*!< SWT2_CLK clock source                  */
    SWT3_CLK                         = 0x8eU,         /*!< SWT3_CLK clock source                  */
    SWT4_CLK                         = 0x8fU,         /*!< SWT4_CLK clock source                  */
    SWT5_CLK                         = 0x90U,         /*!< SWT5_CLK clock source                  */
    SWT6_CLK                         = 0x91U,         /*!< SWT6_CLK clock source                  */
    USDHC0_CLK                       = 0x92U,         /*!< USDHC0_CLK clock source                */
    WKPU0_CLK                        = 0x93U,         /*!< WKPU0_CLK clock source                 */
    CLOCK_NAME_COUNT      = 0x94U
} clock_names_t;

#define FIRST_MODULE_CLOCK        ADC0_CLK
#define MC_ME_INVALID_INDEX       255U
#define MODULE_CLOCKS_TABLE_SIZE  93U


  /*! @brief Module clocks table
   *  This table contains interface clocks and pctl indexes.
   */
#define MODULE_CLOCKS_TABLE \
{                                                                           \
{PER_CLK,                    MC_ME_INVALID_INDEX},         /*   ADC0 clock                  */ \
{PER_CLK,                    MC_ME_INVALID_INDEX},         /*   ADC1 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   CLKOUT0 clock               */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   CLKOUT1 clock               */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   CRC0 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   CTU0 clock                  */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   DABP clock                  */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   DMA0 clock                  */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   DMA1 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   DMAMUX0 clock               */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   DMAMUX1 clock               */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   DMAMUX2 clock               */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   DMAMUX3 clock               */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   DMA_CRC0 clock              */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   DMA_CRC1 clock              */ \
{A53_CORE_DIV10_CLK,         MC_ME_INVALID_INDEX},         /*   EIM0 clock                  */ \
{XBAR_DIV6_CLK,              MC_ME_INVALID_INDEX},         /*   EIM1 clock                  */ \
{XBAR_DIV6_CLK,              MC_ME_INVALID_INDEX},         /*   EIM2 clock                  */ \
{XBAR_DIV6_CLK,              MC_ME_INVALID_INDEX},         /*   EIM3 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   EIM_BBE32DSP clock          */ \
{XBAR_DIV6_CLK,              MC_ME_INVALID_INDEX},         /*   EIM clock                   */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   EIM_LAX0 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   EIM_LAX1 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   EIM_PER1 clock              */ \
{XBAR_DIV6_CLK,              MC_ME_INVALID_INDEX},         /*   ERM clock                   */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_CPU0 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_CPU1 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_CPU2 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_EDMA0 clock             */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_EDMA1 clock             */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_LAX0 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_LAX1 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_PER1 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   ERM_PER clock               */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FDMA0 clock                 */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN0 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN1 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN2 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN3 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN4 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN5 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN6 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FLEXCAN7 clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   FRAY0 clock                 */ \
{PER_CLK,                    MC_ME_INVALID_INDEX},         /*   FTIMER0 clock               */ \
{PER_CLK,                    MC_ME_INVALID_INDEX},         /*   FTIMER1 clock               */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   GMAC0_RX clock              */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   GMAC0_TS clock              */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   GMAC0_TX clock              */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   GMAC1_RX clock              */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   GMAC1_TS clock              */ \
{XBAR_CLK,                   MC_ME_INVALID_INDEX},         /*   GMAC1_TX clock              */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   IIC0 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   IIC1 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST0 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST1 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST2 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST3 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST4 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST5 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST6 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   LBIST7 clock                */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   LIN0 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   LIN1 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   LIN2 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   OCOTP0 clock                */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   PIT0 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   PIT1 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   QSPI0 clock                 */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SIUL0 clock                 */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SIUL1 clock                 */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   SPI0 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   SPI1 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   SPI2 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   SPI3 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   SPI4 clock                  */ \
{CLOCK_NAME_COUNT,           MC_ME_INVALID_INDEX},         /*   SPI5 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM0 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM1 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM2 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM3 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM4 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM6 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   STM7 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT0 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT1 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT2 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT3 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT4 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT5 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   SWT6 clock                  */ \
{XBAR_DIV3_CLK,              MC_ME_INVALID_INDEX},         /*   USDHC0 clock                */ \
{XBAR_DIV6_CLK,              MC_ME_INVALID_INDEX},         /*   WKPU0 clock                 */ \
}




/* Module features */
/**********************************************************************
 *           ADC_SAR module features
 **********************************************************************/
#define FEATURE_ADC_HAS_CTU_TRIGGER_MODE (1)
#define FEATURE_ADC_HAS_EXT_TRIGGER      (1)
#define FEATURE_ADC_HAS_INJ_TRIGGER_SEL  (1)
#define FEATURE_ADC_HAS_THRHLR_ARRAY     (0)
#define FEATURE_ADC_HAS_CTU              (1)
#define FEATURE_ADC_HAS_CALIBRATION_ALT  (1)
#define FEATURE_ADC_CTR1_HAS_TSENSOR_SEL (0)
#define FEATURE_ADC_HAS_CLKSEL_EXTENDED  (0)
#define FEATURE_ADC_HAS_CWSELR_UNROLLED  (1)

#define FEATURE_ADC_HAS_CWSELR0          (1)
#define FEATURE_ADC_HAS_CWSELR1          (0)
#define FEATURE_ADC_HAS_CWSELR2          (0)
#define FEATURE_ADC_HAS_CWSELR3          (0)
#define FEATURE_ADC_HAS_CWSELR4          (1)
#define FEATURE_ADC_HAS_CWSELR5          (1)
#define FEATURE_ADC_HAS_CWSELR6          (0)
#define FEATURE_ADC_HAS_CWSELR7          (0)
#define FEATURE_ADC_HAS_CWSELR8          (0)
#define FEATURE_ADC_HAS_CWSELR9          (0)
#define FEATURE_ADC_HAS_CWSELR10         (0)
#define FEATURE_ADC_HAS_CWSELR11         (0)

#define ADC_PRESAMPLE_DVDD1P0_DIV_2     (ADC_PRESAMPLE_SRC0)     /* Presampling from VSS_HV_ADC0 */
#define ADC_PRESAMPLE_AVDD1p8_DIV_4     (ADC_PRESAMPLE_SRC1)     /* Presampling from VDD_HV/ 8 */
#define ADC_PRESAMPLE_VREFL_1p8         (ADC_PRESAMPLE_SRC2)     /* Presampling from VREFL */
#define ADC_PRESAMPLE_VREFH_1p8         (ADC_PRESAMPLE_SRC3)     /* Presampling from VDD_HV ADC1 */

#define ADC_CLOCKS                      {PER_CLK, PER_CLK}

#define FEATURE_ADC_BAD_ACCESS_PROT_FEATURE  (0)
#define FEATURE_ADC_BAD_ACCESS_PROT_CHANNEL  (1)
                                      /* 31-28   3-0  63-60  35-32 95-92  68-65
                                          \_/    \_/   \_/    \_/   \_/    \_/
                                           |......|     |......|     |......| */
#define FEATURE_ADC_CHN_AVAIL_BITMAP   {{0x000000FFu, 0x00000079u, 0x00000000u}, /* 0 */ \
                                        {0x000000FFu, 0x00000079u, 0x00000000u}, /* 1 */ \
                                       }

/* @brief Number of THRHLR registers. */
#define ADC_THRHLR_COUNT                (8u)
/* @brief Default values for sample time. */
#define ADC_DEF_SAMPLE_TIME_0           (0x14U)
#define ADC_DEF_SAMPLE_TIME_1           (0x14U)
#define ADC_DEF_SAMPLE_TIME_2           (0x14U)

#define ADC_MCR_ABORT_CHAIN ADC_MCR_ABORTCHAIN

/* Define SARADC interrupts as ADC EOC interrupts to be compatible with driver code. */
#define ADC0_EOC_IRQn           SAR_ADC0_INT_IRQn
#define ADC1_EOC_IRQn           SAR_ADC1_INT_IRQn

/**********************************************************************
 *           MC_RGM module features
 **********************************************************************/

typedef enum
{
    POWER_ON_RESET                = 0U,    /* POR watchdog timeout | POR_B pin assertio | Critical SPD error */
    NC_SPD_RST                    = 1U,    /* Non-critical supply presence detector fail */
    FCCU_FTR                      = 3U,    /* FCCU failure to react          */
    STCU_URF                      = 4U,    /* STCU unrecoverable fault       */
    MC_RGM_FRE                    = 6U,    /* Functional reset escalation    */
    FXOSC_FAIL                    = 8U,    /* FXOSC failure                  */
    CORE_LOL                      = 9U,    /* CORE_PLL loss of lock          */
    PERIPH_LOL                    = 10U,   /* PERIPH_PLL loss of lock        */
    DDR_LOL                       = 11U,   /* DDR_PLL loss of lock           */
    ACC_LOL                       = 12U,   /* ACCEL_PLL loss of lock         */
    XBAR_DIV3_C                   = 13U,   /* XBAR_DIV3_CLK failure          */
    HSE_LC_RST                    = 16U,   /* Life-cycle error               */
    HSE_SNVS_RS                   = 17U,   /* HSE SNVS tamper detected       */
    HSE_SWT_RS                    = 18U,   /* HSE SWT timeout                */
    SW_DEST                       = 30U,   /* Software Destructive reset     */
    DEBUG_DEST                    = 31U    /* Debug Destructive reset        */
}destructive_reset_sources_t;

typedef enum
{
    FCCU_RST                      = 3,    /* FCCU reset reaction         */
    ST_DONE                       = 4,    /* Self-test done              */
    SWT0_RST                      = 6,    /* SWT0 timeout                */
    HSE_RAM_ECC_RST               = 18,   /* HSE_H memory ECC error      */
    HSE_BOOT_ERR_RS               = 20,   /* Boot failure error          */
    HSE_CORE_LOCK_RST             = 21,   /* HSE_H M7 core lock          */
    SW_FUNC                       = 30,   /* Software Functional reset   */
    DEBUG_FUNC                    = 31    /* Debug Functional reset      */
}functional_reset_sources_t;


/**********************************************************************
 *           CPU module features
 **********************************************************************/
/* @brief Key and inverted key values so write access to MCTL register is permitted */
#define FEATURE_MC_ME_KEY           (0x5AF0U)
#define FEATURE_MC_ME_KEY_INV       (0xA50FU)

/* Standby mode is not supported on this derivative */
#define FEATURE_MC_ME_HAS_STANDBY_MODE  0U

/* @brief Number of cores. */
#define NUMBER_OF_CORES (7u)
#define FEATURE_CPU_SOFTWARE_CORE_ID_SUPPORT (0x70U)
/* @brief ICACHE should be invalidated */
#define FEATURE_CPU_ICACHE_INVALIDATION
/* @brief DCACHE enable bit mask */
#define FEATURE_CPU_DCACHE_EN_MASK (0x10000U)
/* @brief ICACHE enable bit mask */
#define FEATURE_CPU_ICACHE_EN_MASK (0x20000U)
/* @brief Number of cache sets shift */
#define FEATURE_CPU_DCACHE_SET_CNT_SHIFT (13U)
/* @brief Number of cache sets mask */
#define FEATURE_CPU_DCACHE_SET_CNT_MASK (0xFFFE000U)
/* @brief Number of cache ways shift */
#define FEATURE_CPU_DCACHE_WAY_CNT_SHIFT (3U)
/* @brief Number of cache ways mask */
#define FEATURE_CPU_DCACHE_WAY_CNT_MASK (0x1FF8U)
/* @brief Cache way bitfield shift */
#define FEATURE_CPU_DCACHE_WAY_SHIFT (30U)
/* @brief Cache way bitfield mask */
#define FEATURE_CPU_DCACHE_WAY_MASK (0xC0000000U)
/* @brief Cache set bitfield shift */
#define FEATURE_CPU_DCACHE_SET_SHIFT (5U)
/* @brief Cache set bitfield mask */
#define FEATURE_CPU_DCACHE_SET_MASK (0x3FE0U)
/* @brief VECTKEY value so that AIRCR register write is not ignored. */
#define FEATURE_SCB_VECTKEY               (0x05FAU)
#define S32_SCB_AIRCR_VECTKEY_MASK        (0xFFFF0000U)
#define S32_SCB_AIRCR_VECTKEY_SHIFT       (16U)
#define S32_SCB_AIRCR_VECTKEY(x)          (((uint32_t)(((uint32_t)(x))<<S32_SCB_AIRCR_VECTKEY_SHIFT))&S32_SCB_AIRCR_VECTKEY_MASK)
/* @brief System reset request mask. */
#define S32_SCB_AIRCR_SYSRESETREQ_MASK    (0x4U)
/* @brief S32_SCB Coprocessor Access Control Register. */
#define S32_SCB_CPACR_CP10_MASK           (0x300000U)
#define S32_SCB_CPACR_CP11_MASK           (0xC00000U)

/**********************************************************************
 *           CTU module features
 **********************************************************************/
/*! @brief Number of ADC instances which can be triggered by CTU */
#define FEATURE_CTU_NUM_ADC                 (2u)
#define FEATURE_CTU_HAS_TCR_UNROLLED        (0u)
#define CTU_FDCR_TYPE                       uint16_t

/* On this platform the CLR register has big endian format */
#define FEATURE_CTU_CLR_LITTLE_ENDIAN       (0u)

/* On this platform CTU has all FIFOs status flags at the same address */
#define FEATURE_CTU_HAS_FIFO_IRQ_ROLLED     (1u)

/* Mark if there is an external trigger pin available */
#define FEATURE_CTU_EXT_TRIG_PRESENT        (0u)

/* Available input triggers */
#define FEATURE_CTU_INPUT_TRIG_PWM_REL      (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_ODD_0    (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_ODD_1    (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_ODD_2    (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_ODD_3    (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_EVEN_0   (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_EVEN_1   (1u)
#define FEATURE_CTU_INPUT_TRIG_PWM_EVEN_2   (0u)
#define FEATURE_CTU_INPUT_TRIG_PWM_EVEN_3   (0u)
#define FEATURE_CTU_INPUT_TRIG_RPWM_0       (0u)
#define FEATURE_CTU_INPUT_TRIG_RPWM_1       (0u)
#define FEATURE_CTU_INPUT_TRIG_RPWM_2       (0u)
#define FEATURE_CTU_INPUT_TRIG_RPWM_3       (0u)
#define FEATURE_CTU_INPUT_TRIG_ETIMER_IN1   (0u)
#define FEATURE_CTU_INPUT_TRIG_ETIMER_IN2   (0u)
#define FEATURE_CTU_INPUT_TRIG_EXT_IN       (1u)

/* NOTE: Defines added only to allow definition of CTU_OUTPUT_TRIG_ALL_EN with value set dynamically
 * depending on which ETIMER instances are connected to CTU for the current device */
#ifdef CTU_THCR1_T0_T1E_MASK
#define CTU_OUTPUT_TRIG_TIMER_1_EN_LOCAL    (CTU_THCR1_T0_T1E_MASK) /* define used only for CTU_OUTPUT_TRIG_ALL_EN */
#else
#define CTU_OUTPUT_TRIG_TIMER_1_EN_LOCAL    (0u) /* INSTANCE NOT AVAILABLE */
#endif /* CTU_THCR1_T0_T1E_MASK */
#ifdef CTU_THCR1_T0_T2E_MASK
#define CTU_OUTPUT_TRIG_TIMER_2_EN_LOCAL    (CTU_THCR1_T0_T2E_MASK) /* define used only for CTU_OUTPUT_TRIG_ALL_EN */
#else
#define CTU_OUTPUT_TRIG_TIMER_2_EN_LOCAL    (0u) /* INSTANCE NOT AVAILABLE */
#endif /* CTU_THCR1_T0_T2E_MASK */
#ifdef CTU_THCR1_T0_T3E_MASK
#define CTU_OUTPUT_TRIG_TIMER_3_EN_LOCAL    (CTU_THCR1_T0_T3E_MASK) /* define used only for CTU_OUTPUT_TRIG_ALL_EN */
#else
#define CTU_OUTPUT_TRIG_TIMER_3_EN_LOCAL    (0u) /* INSTANCE NOT AVAILABLE */
#endif /* CTU_THCR1_T0_T3E_MASK */
#ifdef CTU_THCR1_T0_T4E_MASK
#define CTU_OUTPUT_TRIG_TIMER_4_EN_LOCAL    (CTU_THCR1_T0_T4E_MASK) /* define used only for CTU_OUTPUT_TRIG_ALL_EN */
#else
#define CTU_OUTPUT_TRIG_TIMER_4_EN_LOCAL    (0u) /* INSTANCE NOT AVAILABLE */
#endif /* CTU_THCR1_T0_T4E_MASK */
#ifdef CTU_THCR1_T0_ETE_MASK
#define CTU_OUTPUT_TRIG_EXT_EN_LOCAL        (CTU_THCR1_T0_ETE_MASK)  /* define used only for CTU_OUTPUT_TRIG_ALL_EN */
#else
#define CTU_OUTPUT_TRIG_EXT_EN_LOCAL        (0u)  /* External Trigger output Enable is not present */
#endif /* CTU_THCR1_T0_ETE_MASK */

/* NOTE: Defines added only to allow definition of CTU_ERROR_FLAG_ALL with value set dynamically
 * depending on which ETIMER instances are connected to CTU for the current device */
#ifdef CTU_EFR_T1_OE_MASK
#define CTU_ERROR_FLAG_TIMER_1_OVERRUN_LOCAL      (CTU_EFR_T1_OE_MASK)
#else
#define CTU_ERROR_FLAG_TIMER_1_OVERRUN_LOCAL      (0u)
#endif /* CTU_EFR_T1_OE_MASK */
#ifdef CTU_EFR_T2_OE_MASK
#define CTU_ERROR_FLAG_TIMER_2_OVERRUN_LOCAL      (CTU_EFR_T2_OE_MASK)
#else
#define CTU_ERROR_FLAG_TIMER_2_OVERRUN_LOCAL      (0u)
#endif /* CTU_EFR_T2_OE_MASK */
#ifdef CTU_EFR_T3_OE_MASK
#define CTU_ERROR_FLAG_TIMER_3_OVERRUN_LOCAL      (CTU_EFR_T3_OE_MASK)
#else
#define CTU_ERROR_FLAG_TIMER_3_OVERRUN_LOCAL      (0u)
#endif /* CTU_EFR_T3_OE_MASK */
#ifdef CTU_EFR_T4_OE_MASK
#define CTU_ERROR_FLAG_TIMER_4_OVERRUN_LOCAL      (CTU_EFR_T4_OE_MASK)
#else
#define CTU_ERROR_FLAG_TIMER_4_OVERRUN_LOCAL      (0u)
#endif /* CTU_EFR_T4_OE_MASK */
#ifdef CTU_EFR_ET_OE_MASK
#define CTU_ERROR_FLAG_EXT_TRIG_OVERRUN_LOCAL     (CTU_EFR_ET_OE_MASK)
#else
#define CTU_ERROR_FLAG_EXT_TRIG_OVERRUN_LOCAL     (0u)
#endif /* CTU_EFR_ET_OE_MASK */

#ifdef CTU_FIFO_FULL_EMPTY_IRQn
#define CTU_FIFO_IRQn                             (CTU_FIFO_FULL_EMPTY_IRQn)
#endif /* CTU_FIFO_FULL_EMPTY_IRQn */

/**********************************************************************
 *           DMA module features
 **********************************************************************/
/* @brief DMA hardware version 3. */
#define FEATURE_DMA_HWV3
/* @brief Number of DMA channels. */
#define FEATURE_DMA_CHANNELS (DMA_TCD_TCD_COUNT)
/* @brief Number of DMA virtual channels. */
#define FEATURE_DMA_VIRTUAL_CHANNELS (FEATURE_DMA_CHANNELS * DMA_INSTANCE_COUNT)
/* @brief Number of DMA interrupt lines. */
#define FEATURE_DMA_CHANNELS_INTERRUPT_LINES (2U)
/* @brief Number of DMA virtual interrupt lines. */
#define FEATURE_DMA_VIRTUAL_CHANNELS_INTERRUPT_LINES ((uint32_t)FEATURE_DMA_CHANNELS_INTERRUPT_LINES * (uint32_t)DMA_INSTANCE_COUNT)
/* @brief Number of DMA error interrupt lines. */
#define FEATURE_DMA_ERROR_INTERRUPT_LINES (1U)
/* @brief Number of DMA virtual error interrupt lines. */
#define FEATURE_DMA_VIRTUAL_ERROR_INTERRUPT_LINES ((uint32_t)FEATURE_DMA_ERROR_INTERRUPT_LINES * (uint32_t)DMA_INSTANCE_COUNT)
/* @brief DMA module has error interrupt. */
#define FEATURE_DMA_HAS_ERROR_IRQ
/* @brief DMA module 'ORed' intrerupt line for specific channels */
#define FEATURE_DMA0_CH0_CH15_ORED_IRQ_LINES
#define FEATURE_DMA0_CH16_CH31_ORED_IRQ_LINES
#define FEATURE_DMA1_CH0_CH15_ORED_IRQ_LINES
#define FEATURE_DMA1_CH16_CH31_ORED_IRQ_LINES
/* @brief Conversion from channel index to DCHPRI index. */
#define FEATURE_DMA_CHN_TO_DCHPRI_INDEX(x) (x)
/* @brief Clock name for DMA */
#define FEATURE_DMA_CLOCK_NAMES {DMA0_CLK, DMA0_CLK}
/* @brief DMA channel width based on number of TCDs: 2^N, N=4,5,... */
#define FEATURE_DMA_CH_WIDTH (5U)
/* @brief DMA channel to instance */
#define FEATURE_DMA_VCH_TO_INSTANCE(x)  ((x) >> (uint32_t)FEATURE_DMA_CH_WIDTH)
/* @brief DMA virtual channel to channel */
#define FEATURE_DMA_VCH_TO_CH(x)        ((x) & ((uint32_t)FEATURE_DMA_CHANNELS - 1U))
/* @brief DMA not supports buffer write. */
#define FEATURE_DMA_NOT_SUPPORT_BUFFER_WRITE
/* @brief DMA supports the following particular transfer size: */
#define FEATURE_DMA_TRANSFER_SIZE_8B
#define FEATURE_DMA_TRANSFER_SIZE_16B
#define FEATURE_DMA_TRANSFER_SIZE_32B
#define FEATURE_DMA_TRANSFER_SIZE_64B
/* @brief DMA supports the following particular channel priorities. */
#define FEATURE_DMA_8_CH_PRIORITIES
/* @brief DMA supports the CRC functionality */
#define FEATURE_DMA_SUPPORT_CRC
/* @brief Number of DMA CRC channels. */
#define FEATURE_DMA_CRC_CHANNELS (DMA_CRC_CONTROL_REGISTER_COUNT)
/* @brief Number of polynomial of DMA CRC */
#define FEATURE_DMA_CRC_NUMBER_OF_POLYNOMIAL (6u)

/*!
@brief Structure for the DMA register
Defines one structure for the DMA hardware registers composed of DMA_MP registers and DMA_TCD register.
*/
typedef struct {
  DMA_MP_Type MP;
  uint8_t RESERVED_0[16000];
  DMA_TCD_Type CH;
} DMA_Type, *DMA_MemMapPtr;
/* @brief DMA register mapping for MP and TCD: */
#define BASE_TCD(addr,x) addr->CH.TCD[x]
#define BASE_MP(addr,x) addr->MP.x
/** Peripheral DMA_0 base pointer */
#define DMA_0                                ((DMA_Type *)DMA_0_MP_BASE)
/** Peripheral DMA_1_MP base pointer */
#define DMA_1                                ((DMA_Type *)DMA_1_MP_BASE)
/** Array initializer of DMA_MP peripheral base addresses */
#define DMA_BASE_ADDRS                          { DMA_0_MP_BASE, DMA_1_MP_BASE }
/** Array initializer of DMA_MP peripheral base pointers */
#define DMA_BASE_PTRS                           { DMA_0, DMA_1 }

/**********************************************************************
 *           DMAMUX module features
 **********************************************************************/
/* @brief DMAMUX peripheral is available in silicon. */
#define FEATURE_DMAMUX_AVAILABLE
/* @brief Number of DMA channels. */
#define FEATURE_DMAMUX_CHANNELS (16U)
/* @brief Has the periodic trigger capability */
#define FEATURE_DMAMUX_HAS_TRIG (1)
/* @brief Conversion from request source to the actual DMAMUX channel */
#define FEATURE_DMAMUX_REQ_SRC_TO_CH(x) ((x) & DMAMUX_CHCFG_SOURCE_MASK)
/* @brief Mapping between request source and DMAMUX instance */
#define FEATURE_DMAMUX_REQ_SRC_TO_INSTANCE(x) (((uint32_t)x) >> (uint32_t)DMAMUX_CHCFG_SOURCE_WIDTH)
/* @brief Conversion from eDMA channel index to DMAMUX channel. */
#define FEATURE_DMAMUX_DMA_CH_TO_CH(x) ((x) & (FEATURE_DMAMUX_CHANNELS - 1U))
/* @brief Conversion from DMAMUX channel DMAMUX register index. */
#define FEATURE_DMAMUX_CHN_REG_INDEX(x) ((uint32_t)(x) ^ 3U)
/* @brief Clock names for DMAMUX */
#define FEATURE_DMAMUX_CLOCK_NAMES {DMAMUX0_CLK, DMAMUX1_CLK, DMAMUX2_CLK, DMAMUX3_CLK}
/*!
 * @brief Structure for the DMA hardware request
 *
 * Defines the structure for the DMA hardware request collections. The user can configure the
 * hardware request into DMAMUX to trigger the DMA transfer accordingly. The index
 * of the hardware request varies according  to the to SoC.
 */
typedef enum {
    EDMA_REQ_MUX_0_DISABLED                     = 0U,
    EDMA_REQ_MUX_0_CAN_FD_0                     = 1U,
    EDMA_REQ_MUX_0_CAN_FD_1                     = 2U,
    EDMA_REQ_MUX_0_LIN_0_TX                     = 3U,
    EDMA_REQ_MUX_0_LIN_0_RX                     = 4U,
    EDMA_REQ_MUX_0_LIN_1_TX                     = 5U,
    EDMA_REQ_MUX_0_LIN_1_RX                     = 6U,
    EDMA_REQ_MUX_0_DSPI_0_TX_FIFO_F             = 7U,
    EDMA_REQ_MUX_0_DSPI_0_RX_FIFO_D             = 8U,
    EDMA_REQ_MUX_0_DSPI_0_CMD_FIFO_F            = 9U,
    EDMA_REQ_MUX_0_DSPI_1_TX_FIFO_F             = 10U,
    EDMA_REQ_MUX_0_DSPI_1_RX_FIFO_D             = 11U,
    EDMA_REQ_MUX_0_DSPI_1_CMD_FIFO_F            = 12U,
    EDMA_REQ_MUX_0_DSPI_2_TX_FIFO_F             = 13U,
    EDMA_REQ_MUX_0_DSPI_2_RX_FIFO_D             = 14U,
    EDMA_REQ_MUX_0_DSPI_2_CMD_FIFO_F            = 15U,
    EDMA_REQ_MUX_0_I2C_0_RX                     = 16U,
    EDMA_REQ_MUX_0_I2C_0_TX                     = 17U,
    EDMA_REQ_MUX_0_I2C_1_RX                     = 18U,
    EDMA_REQ_MUX_0_I2C_1_TX                     = 19U,
    EDMA_REQ_MUX_0_CTU_FIFO0                    = 20U,
    EDMA_REQ_MUX_0_CTU_FIFO1                    = 21U,
    EDMA_REQ_MUX_0_CTU_FIFO2                    = 22U,
    EDMA_REQ_MUX_0_CTU_FIFO3                    = 23U,
    EDMA_REQ_MUX_0_CTU_COMMAND_REQUEST          = 24U,
    EDMA_REQ_MUX_0_SARADC_0                     = 32U,
    EDMA_REQ_MUX_0_FTM_0_CH_0                   = 36U,
    EDMA_REQ_MUX_0_FTM_0_CH_1                   = 37U,
    EDMA_REQ_MUX_0_CTE                          = 38U,
    EDMA_REQ_MUX_0_CAN_FD_4                     = 41U,
    EDMA_REQ_MUX_0_CAN_FD_5                     = 42U,
    EDMA_REQ_MUX_0_SIUL2_ORED_3_0               = 43U,
    EDMA_REQ_MUX_0_SIUL2_ORED_7_4               = 44U,
    EDMA_REQ_MUX_0_SIUL2_ORED_11_8              = 45U,
    EDMA_REQ_MUX_0_SIUL2_ORED_15_12             = 46U,
    EDMA_REQ_MUX_0_CORESIGHT_DEBUG_0            = 47U,
    EDMA_REQ_MUX_0_CORESIGHT_DEBUG_1            = 48U,
    EDMA_REQ_MUX_0_MIPICSI2_0                   = 49U,
    EDMA_REQ_MUX_0_MIPICSI2_1                   = 50U,
    EDMA_REQ_MUX_0_MIPICSI2_2                   = 51U,
    EDMA_REQ_MUX_0_MIPICSI2_3                   = 52U,
    EDMA_REQ_MUX_0_FTM_0_CH_2                   = 53U,
    EDMA_REQ_MUX_0_FTM_0_CH_3                   = 54U,
    EDMA_REQ_MUX_0_FTM_0_CH_4                   = 55U,
    EDMA_REQ_MUX_0_FTM_0_CH_5                   = 56U,
    EDMA_REQ_MUX_0_FTM_0_CH_6                   = 57U,
    EDMA_REQ_MUX_0_FTM_0_CH_7                   = 58U,
    EDMA_REQ_MUX_0_ALWAYS_ENABLED_0             = 60U,
    EDMA_REQ_MUX_0_ALWAYS_ENABLED_1             = 61U,
    EDMA_REQ_MUX_0_ALWAYS_ENABLED_2             = 62U,
    EDMA_REQ_MUX_0_ALWAYS_ENABLED_3             = 63U,
    EDMA_REQ_MUX_1_DISABLED                     = 64U,
    EDMA_REQ_MUX_1_CAN_FD_2                     = 65U,
    EDMA_REQ_MUX_1_CAN_FD_3                     = 66U,
    EDMA_REQ_MUX_1_QUADSPI_TX                   = 69U,
    EDMA_REQ_MUX_1_QUADSPI_RX                   = 70U,
    EDMA_REQ_MUX_1_DSPI_3_TX_FIFO_F             = 71U,
    EDMA_REQ_MUX_1_DSPI_3_RX_FIFO_D             = 72U,
    EDMA_REQ_MUX_1_DSPI_3_CMD_FIFO_F            = 73U,
    EDMA_REQ_MUX_1_DSPI_4_TX_FIFO_F             = 74U,
    EDMA_REQ_MUX_1_DSPI_4_RX_FIFO_D             = 75U,
    EDMA_REQ_MUX_1_DSPI_4_CMD_FIFO_F            = 76U,
    EDMA_REQ_MUX_1_DSPI_5_TX_FIFO_F             = 77U,
    EDMA_REQ_MUX_1_DSPI_5_RX_FIFO_D             = 78U,
    EDMA_REQ_MUX_1_DSPI_5_CMD_FIFO_F            = 79U,
    EDMA_REQ_MUX_1_GMAC0_CH_0                   = 86U,
    EDMA_REQ_MUX_1_GMAC0_CH_1                   = 87U,
    EDMA_REQ_MUX_1_GMAC0_CH_2                   = 88U,
    EDMA_REQ_MUX_1_SARADC_1                     = 96U,
    EDMA_REQ_MUX_1_GMAC0_CH_3                   = 97U,
    EDMA_REQ_MUX_1_CAN_FD_6                     = 104U,
    EDMA_REQ_MUX_1_CAN_FD_7                     = 105U,
    EDMA_REQ_MUX_1_GMAC1_CH_0                   = 106U,
    EDMA_REQ_MUX_1_GMAC1_CH_1                   = 107U,
    EDMA_REQ_MUX_1_GMAC1_CH_2                   = 108U,
    EDMA_REQ_MUX_1_GMAC1_CH_3                   = 109U,
    EDMA_REQ_MUX_1_SIUL2_ORED_19_16             = 110U,
    EDMA_REQ_MUX_1_SIUL2_ORED_23_20             = 111U,
    EDMA_REQ_MUX_1_SIUL2_ORED_27_24             = 112U,
    EDMA_REQ_MUX_1_SIUL2_ORED_31_28             = 113U,
    EDMA_REQ_MUX_1_FTM_1_CH_0                   = 114U,
    EDMA_REQ_MUX_1_FTM_1_CH_1                   = 115U,
    EDMA_REQ_MUX_1_FTM_1_CH_2                   = 116U,
    EDMA_REQ_MUX_1_FTM_1_CH_3                   = 117U,
    EDMA_REQ_MUX_1_FTM_1_CH_4                   = 118U,
    EDMA_REQ_MUX_1_FTM_1_CH_5                   = 119U,
    EDMA_REQ_MUX_1_FTM_1_CH_6                   = 120U,
    EDMA_REQ_MUX_1_FTM_1_CH_7                   = 121U,
    EDMA_REQ_MUX_1_ALWAYS_ENABLED_0             = 124U,
    EDMA_REQ_MUX_1_ALWAYS_ENABLED_1             = 125U,
    EDMA_REQ_MUX_1_ALWAYS_ENABLED_2             = 126U,
    EDMA_REQ_MUX_1_ALWAYS_ENABLED_3             = 127U,
    EDMA_REQ_MUX_2_DISABLED                     = 128U,
    EDMA_REQ_MUX_2_CANFD_0                      = 129U,
    EDMA_REQ_MUX_2_CANFD_1                      = 130U,
    EDMA_REQ_MUX_2_LIN_0_TX                     = 131U,
    EDMA_REQ_MUX_2_LIN_0_RX                     = 132U,
    EDMA_REQ_MUX_2_LIN_1_TX                     = 133U,
    EDMA_REQ_MUX_2_LIN_1_RX                     = 134U,
    EDMA_REQ_MUX_2_DSPI_0_TX_FIFO_F             = 135U,
    EDMA_REQ_MUX_2_DSPI_0_RX_FIFO_D             = 136U,
    EDMA_REQ_MUX_2_DSPI_0_CMD_FIFO_F            = 137U,
    EDMA_REQ_MUX_2_DSPI_1_TX_FIFO_F             = 138U,
    EDMA_REQ_MUX_2_DSPI_1_RX_FIFO_D             = 139U,
    EDMA_REQ_MUX_2_DSPI_1_CMD_FIFO_F            = 140U,
    EDMA_REQ_MUX_2_DSPI_2_TX_FIFO_F             = 141U,
    EDMA_REQ_MUX_2_DSPI_2_RX_FIFO_D             = 142U,
    EDMA_REQ_MUX_2_DSPI_2_CMD_FIFO_F            = 143U,
    EDMA_REQ_MUX_2_I2C_0_RX                     = 144U,
    EDMA_REQ_MUX_2_I2C_0_TX                     = 145U,
    EDMA_REQ_MUX_2_I2C_1_RX                     = 146U,
    EDMA_REQ_MUX_2_I2C_1_TX                     = 147U,
    EDMA_REQ_MUX_2_CTU_FIFO0                    = 148U,
    EDMA_REQ_MUX_2_CTU_FIFO1                    = 149U,
    EDMA_REQ_MUX_2_CTU_FIFO2                    = 150U,
    EDMA_REQ_MUX_2_CTU_FIFO3                    = 151U,
    EDMA_REQ_MUX_2_CTU_COMMAND_REQUEST          = 152U,
    EDMA_REQ_MUX_2_SARADC_0                     = 160U,
    EDMA_REQ_MUX_2_FTM_0_CH_0                   = 164U,
    EDMA_REQ_MUX_2_FTM_0_CH_1                   = 165U,
    EDMA_REQ_MUX_2_CTE                          = 166U,
    EDMA_REQ_MUX_2_CANFD_4                      = 169U,
    EDMA_REQ_MUX_2_CANFD_5                      = 170U,
    EDMA_REQ_MUX_2_SIUL2_ORED_3_0               = 171U,
    EDMA_REQ_MUX_2_SIUL2_ORED_7_4               = 172U,
    EDMA_REQ_MUX_2_SIUL2_ORED_11_8              = 173U,
    EDMA_REQ_MUX_2_SIUL2_ORED_15_12             = 174U,
    EDMA_REQ_MUX_2_CORESIGHT_DEBUG_0            = 175U,
    EDMA_REQ_MUX_2_CORESIGHT_DEBUG_1            = 176U,
    EDMA_REQ_MUX_2_MIPICSI2_0                   = 177U,
    EDMA_REQ_MUX_2_MIPICSI2_1                   = 178U,
    EDMA_REQ_MUX_2_MIPICSI2_2                   = 179U,
    EDMA_REQ_MUX_2_MIPICSI2_3                   = 180U,
    EDMA_REQ_MUX_2_FTM_0_CH_2                   = 181U,
    EDMA_REQ_MUX_2_FTM_0_CH_3                   = 182U,
    EDMA_REQ_MUX_2_FTM_0_CH_4                   = 183U,
    EDMA_REQ_MUX_2_FTM_0_CH_5                   = 184U,
    EDMA_REQ_MUX_2_FTM_0_CH_6                   = 185U,
    EDMA_REQ_MUX_2_FTM_0_CH_7                   = 186U,
    EDMA_REQ_MUX_2_ALWAYS_ENABLED_0             = 188U,
    EDMA_REQ_MUX_2_ALWAYS_ENABLED_1             = 189U,
    EDMA_REQ_MUX_2_ALWAYS_ENABLED_2             = 190U,
    EDMA_REQ_MUX_2_ALWAYS_ENABLED_3             = 191U,
    EDMA_REQ_MUX_3_DISABLED                     = 192U,
    EDMA_REQ_MUX_3_CAN_FD_2                     = 193U,
    EDMA_REQ_MUX_3_CAN_FD_3                     = 194U,
    EDMA_REQ_MUX_3_QUADSPI_TX                   = 197U,
    EDMA_REQ_MUX_3_QUADSPI_RX                   = 198U,
    EDMA_REQ_MUX_3_DSPI_3_TX_FIFO_F             = 199U,
    EDMA_REQ_MUX_3_DSPI_3_RX_FIFO_D             = 200U,
    EDMA_REQ_MUX_3_DSPI_3_CMD_FIFO_F            = 201U,
    EDMA_REQ_MUX_3_DSPI_4_TX_FIFO_F             = 202U,
    EDMA_REQ_MUX_3_DSPI_4_RX_FIFO_D             = 203U,
    EDMA_REQ_MUX_3_DSPI_4_CMD_FIFO_F            = 204U,
    EDMA_REQ_MUX_3_DSPI_5_TX_FIFO_F             = 205U,
    EDMA_REQ_MUX_3_DSPI_5_RX_FIFO_D             = 206U,
    EDMA_REQ_MUX_3_DSPI_5_CMD_FIFO_F            = 207U,
    EDMA_REQ_MUX_3_GMAC0_CH_0                   = 214U,
    EDMA_REQ_MUX_3_GMAC0_CH_1                   = 215U,
    EDMA_REQ_MUX_3_GMAC0_CH_2                   = 216U,
    EDMA_REQ_MUX_3_SARADC_1                     = 224U,
    EDMA_REQ_MUX_3_GMAC0_CH_3                   = 225U,
    EDMA_REQ_MUX_3_CAN_FD_6                     = 232U,
    EDMA_REQ_MUX_3_CAN_FD_7                     = 233U,
    EDMA_REQ_MUX_3_GMAC1_CH_0                   = 234U,
    EDMA_REQ_MUX_3_GMAC1_CH_1                   = 235U,
    EDMA_REQ_MUX_3_GMAC1_CH_2                   = 236U,
    EDMA_REQ_MUX_3_GMAC1_CH_3                   = 237U,
    EDMA_REQ_MUX_3_SIUL2_ORED_19_16             = 238U,
    EDMA_REQ_MUX_3_SIUL2_ORED_23_20             = 239U,
    EDMA_REQ_MUX_3_SIUL2_ORED_27_24             = 240U,
    EDMA_REQ_MUX_3_SIUL2_ORED_31_28             = 241U,
    EDMA_REQ_MUX_3_FTM_1_CH_0                   = 242U,
    EDMA_REQ_MUX_3_FTM_1_CH_1                   = 243U,
    EDMA_REQ_MUX_3_FTM_1_CH_2                   = 244U,
    EDMA_REQ_MUX_3_FTM_1_CH_3                   = 245U,
    EDMA_REQ_MUX_3_FTM_1_CH_4                   = 246U,
    EDMA_REQ_MUX_3_FTM_1_CH_5                   = 247U,
    EDMA_REQ_MUX_3_FTM_1_CH_6                   = 248U,
    EDMA_REQ_MUX_3_FTM_1_CH_7                   = 249U,
    EDMA_REQ_MUX_3_ALWAYS_ENABLED_0             = 252U,
    EDMA_REQ_MUX_3_ALWAYS_ENABLED_1             = 253U,
    EDMA_REQ_MUX_3_ALWAYS_ENABLED_2             = 254U,
    EDMA_REQ_MUX_3_ALWAYS_ENABLED_3             = 255U
} dma_request_source_t;

/**********************************************************************
 *           FTM module features
 **********************************************************************/

/* @brief Number of PWM channels */
#define FEATURE_FTM_CHANNEL_COUNT               (6U)
/* @brief Number of fault channels */
#define FTM_FEATURE_FAULT_CHANNELS              (0U)
/* @brief Width of control channel */
#define FTM_FEATURE_COMBINE_CHAN_CTRL_WIDTH     (8U)
/* @brief Output channel offset */
#define FTM_FEATURE_OUTPUT_CHANNEL_OFFSET       (16U)
/* @brief Max counter value */
#define FTM_FEATURE_CNT_MAX_VALUE_U32           (0x0000FFFFU)
/* @brief Input capture for single shot */
#define FTM_FEATURE_INPUT_CAPTURE_SINGLE_SHOT   (2U)
/* @brief Dithering has supported on the generated PWM signals */
#define FEATURE_FTM_HAS_SUPPORTED_DITHERING     (1U)
/* @brief Number of interrupt vector for channels of the FTM module */
#define FEATURE_FTM_HAS_NUM_IRQS_CHANS          (1U)
/* @brief Pair channel has deadtime on the PWM signal */
#define FEATURE_FTM_HAS_PAIR_DEADTIME           (0U)
/* @brief The modified combine feature on the PWM signal */
#define FEATURE_FTM_HAS_MODIFIED_COMBINE_MODE   (1U)
/* @brief The FTM half cycle reload feature */
#define FEATURE_FTM_HALF_CYCLE_RELOAD           (1U)
/* @brief The FTM has reload point feature */
#define FEATURE_FTM_HAS_RELOAD_POINT            (1U)
/* @brief The FTM has the filter prescaler for the clock srource */
#define FEATURE_FTM_HAS_FILTER_PRESCALER        (1U)
/* @brief The FTM has the trigger mode control on channel output */
#define FEATURE_FTM_HAS_TRIGGER_MODE            (1U)
/* @brief The FTM has the value of the channel output or channel input */
#define FEATURE_FTM_HAS_OUTPUT_INPUT_STATE      (1U)
/* @brief The FTM configure the hardware trigger source */
#define FEATURE_FTM_HARDWARE_TRIGGER_SOURCE     (0U)
/* @brief The FTM has the global load mechanism feature */
#define FEATURE_FTM_HAS_GLOBAL_LOAD_MECHANISM   (1U)
/* @brief The FTM has the fixed clock source */
#define FEATURE_FTM_HAS_FIXED_CLOCK_SOURCE      (0U)
/* @brief The FTM has the external clock source */
#define FEATURE_FTM_HAS_EXTERNAL_CLOCK          (1U)
/* @brief The FTM has the system intergaration modue to select the external clock */
#define FEATURE_FTM_HAS_SIM_EXT_CLK             (0U)
/* @brief The peripheral clock which is used the system clock for the FTM counter */
#define FEATURE_FTM_PERIPHERAL_CLOCK
/* @brief Re-define the peripheral clock name */
#define PERI_CLK                                (PER_CLK)
/* @brief The quadrature decoder is available on the instance 0 */
#define FEATURE_FTM_QUADRATURE_HAS_INSTANCE0
/* @brief The FTM has the PWM channel output is enabled or disabled */
#define FEATURE_FTM_HAS_CHANNEL_PWM_ENABLE      (1U)
/* @brief The dithering is available on the instance 0 */
#define FEATURE_FTM_DITHERING_HAS_INSTANCE0
/* @brief Re-define the external clock name for flexTimer 0 */
#define FTIMER0_EXT_CLK                         (FTIMER0_CLK)
/* @brief Re-define the external clock name for flexTimer 1 */
#define FTIMER1_EXT_CLK                         (FTIMER1_CLK)




/**********************************************************************
 *           Flash module features
 **********************************************************************/





/**********************************************************************
 *           FlexCAN module features
 **********************************************************************/

/* @brief Frames available in Rx FIFO flag shift */
#define FEATURE_CAN_RXFIFO_FRAME_AVAILABLE  (5U)
/* @brief Rx FIFO warning flag shift */
#define FEATURE_CAN_RXFIFO_WARNING          (6U)
/* @brief Rx FIFO overflow flag shift */
#define FEATURE_CAN_RXFIFO_OVERFLOW         (7U)
/* @brief Frames available in Enhanced Rx FIFO flag shift */
#define FEATURE_CAN_ENHANCED_RXFIFO_FRAME_AVAILABLE     (28U)
/* @brief Enhanced Rx FIFO Watermark Indication flag shift */
#define FEATURE_CAN_ENHANCED_RXFIFO_WATERMARK           (29U)
/* @brief Enhanced Rx FIFO Overflow  flag shift */
#define FEATURE_CAN_ENHANCED_RXFIFO_OVERFLOW            (30U)
/* @brief Enhanced Rx FIFO Underflow flag shift */
#define FEATURE_CAN_ENHANCED_RXFIFO_UNDERFLOW           (31U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN0 */
#define FEATURE_CAN0_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN1 */
#define FEATURE_CAN1_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN2 */
#define FEATURE_CAN2_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN3 */
#define FEATURE_CAN3_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN4 */
#define FEATURE_CAN4_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN5 */
#define FEATURE_CAN5_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN6 */
#define FEATURE_CAN6_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN7 */
#define FEATURE_CAN7_MAX_MB_NUM             (128U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for any of the CAN instances */
#define FEATURE_CAN_MAX_MB_NUM              (128U)
/* @brief Array of maximum number of Message Buffers supported for payload size 8 for all the CAN instances */
#define FEATURE_CAN_MAX_MB_NUM_ARRAY        { FEATURE_CAN0_MAX_MB_NUM, \
                                              FEATURE_CAN1_MAX_MB_NUM, \
                                              FEATURE_CAN2_MAX_MB_NUM, \
                                              FEATURE_CAN3_MAX_MB_NUM, \
                                              FEATURE_CAN4_MAX_MB_NUM, \
                                              FEATURE_CAN5_MAX_MB_NUM, \
                                              FEATURE_CAN6_MAX_MB_NUM, \
                                              FEATURE_CAN7_MAX_MB_NUM}
/* @brief Has PE clock source select (bit field CAN_CTRL1[CLKSRC]). */
#define FEATURE_CAN_HAS_PE_CLKSRC_SELECT            (0)
/* @brief Has DMA enable (bit field MCR[DMA]). */
#define FEATURE_CAN_HAS_DMA_ENABLE                  (1)
/*! @brief FlexCAN Embedded RAM start address offset of the region used to store
SMBs when the CAN FD feature is enabled */
#define FEATURE_CAN_SMB_FD_START_ADDRESS_OFFSET     (0x0)
/*! @brief FlexCAN Embedded RAM end address offset of the region used to store
SMBs when the CAN FD feature is enabled */
#define FEATURE_CAN_SMB_FD_END_ADDRESS_OFFSET       (0x1)
/* @brief Has Stuff Bit Count Enable Bit */
#define FEATURE_CAN_HAS_STFCNTEN_ENABLE             (0)
/* @brief Has ISO CAN FD Enable Bit */
#define FEATURE_CAN_HAS_ISOCANFDEN_ENABLE           (1)
/* @brief Has Message Buffer Data Size Region 1 */
#define FEATURE_CAN_HAS_MBDSR1                      (1)
/* @brief Has Message Buffer Data Size Region 2 */
#define FEATURE_CAN_HAS_MBDSR2                      (1)
/* @brief Has Message Buffer Data Size Region 3 */
#define FEATURE_CAN_HAS_MBDSR3                      (1)
/* @brief Has Supervisor Mode MCR[SUPV] */
#define FEATURE_CAN_HAS_SUPV                        (0)
/*! @brief FlexCAN Embedded RAM address offset of the region used for RXMGMASK mapping */
#define FEATURE_CAN_RXMGMASK_RAM_ADDRESS_OFFSET     (0x288)
/*! @brief FlexCAN Embedded RAM address offset of the region used for RXFGMASK mapping */
#define FEATURE_CAN_RXFGMASK_RAM_ADDRESS_OFFSET     (0x289)
/*! @brief FlexCAN Embedded RAM address offset of the region used for RX14MASK mapping */
#define FEATURE_CAN_RX14MASK_RAM_ADDRESS_OFFSET     (0x28A)
/*! @brief FlexCAN Embedded RAM address offset of the region used for RX15MASK mapping */
#define FEATURE_CAN_RX15MASK_RAM_ADDRESS_OFFSET     (0x28B)
/* @brief Has Pretending Networking mode */
#define FEATURE_CAN_HAS_PRETENDED_NETWORKING        (0)
/* @brief DMA hardware requests for all FlexCAN instances */
#define FEATURE_CAN_EDMA_REQUESTS                   { EDMA_REQ_MUX_0_CAN_FD_0, \
                                                      EDMA_REQ_MUX_0_CAN_FD_1, \
                                                      EDMA_REQ_MUX_0_CAN_FD_4, \
                                                      EDMA_REQ_MUX_0_CAN_FD_5, \
                                                      EDMA_REQ_MUX_1_CAN_FD_2, \
                                                      EDMA_REQ_MUX_1_CAN_FD_3, \
                                                      EDMA_REQ_MUX_1_CAN_FD_6, \
                                                      EDMA_REQ_MUX_1_CAN_FD_7  }
/* @brief Maximum number of Message Buffers IRQs */
#define FEATURE_CAN_MB_IRQS_MAX_COUNT               (2U)
/* @brief Message Buffers IRQs */
#define FEATURE_CAN_MB_IRQS                         { CAN_ORED_0_7_MB_IRQn, \
                                                      CAN_ORED_8_127_MB_IRQn }
/* @brief Has Wake Up Irq channels (CAN_Wake_Up_IRQS_CH_COUNT > 0u) */
#define FEATURE_CAN_HAS_WAKE_UP_IRQ                 (0)
/*! @brief FlexCAN Embedded RAM address offset */
#define FEATURE_CAN_RAM_OFFSET                      (0x00000080u)
/* @brief Has Self Wake Up mode */
#define FEATURE_CAN_HAS_SELF_WAKE_UP                (0)
/* @brief Has Flexible Data Rate */
#define FEATURE_CAN_HAS_FD                          (1)
/* @brief Clock name for the PE oscillator clock source */
#define FEATURE_CAN_PE_OSC_CLK_NAME                 FLEXCAN0_CLK
/* @bried FlexCAN has Detection And Correction of Memory Errors */
#define FEATURE_CAN_HAS_MEM_ERR_DET                 (1)
/* @bried FlexCAN has ECC requires clear of RXMASKs reg */
#define FEATURE_CAN_ECC_CLEAR_RXMASKS               (1)
/* @brief Has FlexCAN Enhanced Rx FIFO mode */
#define FEATURE_CAN_HAS_ENHANCED_RX_FIFO            (1)
/* @brief Has FlexCAN expandable memory */
#define FEATURE_CAN_HAS_EXPANDABLE_MEMORY           (1)
/* @brief number of CAN peripheral has Enhanced Rx FIFO mode */
#define FEATURE_CAN_ENHANCED_RX_FIFO_NUM            (8u)
/* @brief number of CAN peripheral has expandable memory */
#define FEATURE_CAN_EXPANDABLE_MEMORY_NUM           (8u)
/* @brief Maximum number of FIFO Message */
#define FEATURE_CAN_MAX_FIFO_MSG_NUM                (32u)
/* @brief Has FlexCAN High Resolution Timer for Time stamp CAN Message */
#define FEATURE_CAN_HAS_HR_TIMER                    (1)
/* @brief Has FlexCAN High Resolution Timer Timestamp Control Register
in System Resource Controller (SRC) and Timer Source in CTRL2 Register */
#define FEATURE_CAN_HAS_HR_TIMER_SRC                (1)
/* @brief Has FlexCAN Enhanced Rx FIFO has interrupts available */
#define FEATURE_CAN_HAS_ENHANCED_RX_FIFO_INTERRUPT  (1U)

/**********************************************************************
 *           FlexRay module features
 **********************************************************************/

/* @brief FR endian type */
#define FLEXRAY_LITTLE_ENDIAN
/* @brief NOT support to select protocol engine clock Source */
#define FR_NOT_BE_SELECTED_PE_SOURCE_CLK
/* @brief Combined CHI error interrupt*/
#define FR_CHIF_IRQn              FLEXRAY_CMBERR_IRQn
/* @brief Combined protocol status and error interrupt */
#define FR_PRIF_IRQn              FLEXRAY_STATUS_IRQn
/* @brief Wakeup interrupt */
#define FR_WUPIF_IRQn             FLEXRAY_WKUP_IRQn
/* @brief Receive FIFO channel A almost full interrupt */
#define FR_FAFAIF_IRQn            FLEXRAY_CH0_RX_FIFO_IRQn
/* @brief Receive FIFO channel B almost full interrupt */
#define FR_FAFBIF_IRQn            FLEXRAY_CH1_RX_FIFO_IRQn
/* @brief Combined transmit message buffer interrupt */
#define FR_TBIF_IRQn              FLEXRAY_TX_BUFF_IRQn
/* @brief Combined receive message buffer interrupt */
#define FR_RBIF_IRQn              FLEXRAY_RX_BUFF_IRQn



/**********************************************************************
 *           GMAC module features
 **********************************************************************/

/*! @brief Number of instances */
#define FEATURE_GMAC_NUM_INSTANCES  (2U)
/*! @brief Number of channels */
#define FEATURE_GMAC_NUM_CHANNELS   (5U)
/*! @brief The common interrupts */
#define FEATURE_GMAC_COMMON_IRQS    { GMAC0_Common_IRQn, GMAC1_Common_IRQn }
/*! @brief The transmission interrupts */
#define FEATURE_GMAC_TX_IRQS        { { GMAC0_CH0_TX_IRQn, GMAC0_CH1_TX_IRQn, GMAC0_CH2_TX_IRQn, GMAC0_CH3_TX_IRQn, GMAC0_CH4_TX_IRQn }, \
                                      { GMAC1_CH0_TX_IRQn, GMAC1_CH1_TX_IRQn, GMAC1_CH2_TX_IRQn, GMAC1_CH3_TX_IRQn, GMAC1_CH4_TX_IRQn } }
/*! @brief The reception interrupts */
#define FEATURE_GMAC_RX_IRQS        { { GMAC0_CH0_RX_IRQn, GMAC0_CH1_RX_IRQn, GMAC0_CH2_RX_IRQn, GMAC0_CH3_RX_IRQn, GMAC0_CH4_RX_IRQn }, \
                                      { GMAC1_CH0_RX_IRQn, GMAC1_CH1_RX_IRQn, GMAC1_CH2_RX_IRQn, GMAC1_CH3_RX_IRQn, GMAC1_CH4_RX_IRQn } }
/*! @brief CSR clock source */
#define FEATURE_GMAC_CLOCK_NAMES    { XBAR_CLK }
/*! @brief Definitions used for aligning the buffer descriptors */
#define FEATURE_GMAC_BUFFDESCR_ALIGNMENT (64UL)
/*! @brief Definitions used for descriptor skip length */
#define FEATURE_GMAC_DSL_VALUE           (2U)
/*! @brief Definition used for SGMII mode availability */
#define FEATURE_GMAC_HAS_SGMII           (0U)
/*! @brief Default configuration for the PHY interface */
#define FEATURE_GMAC_DEFAULT_PHY_IF      GMAC_RGMII_MODE

typedef struct
{
  volatile uint32_t DMA_CONTROL;
  volatile uint32_t DMA_TX_CONTROL;
  volatile uint32_t DMA_RX_CONTROL;
  volatile uint8_t RESERVED_1[8];
  volatile uint32_t DMA_TXDESC_LIST_ADDRESS;
  volatile uint8_t RESERVED_2[4];
  volatile uint32_t DMA_RXDESC_LIST_ADDRESS;
  volatile uint32_t DMA_TXDESC_TAIL_POINTER;
  volatile uint8_t RESERVED_3[4];
  volatile uint32_t DMA_RXDESC_TAIL_POINTER;
  volatile uint32_t DMA_TXDESC_RING_LENGTH;
  volatile uint32_t DMA_RXDESC_RING_LENGTH;
  volatile uint32_t DMA_INTERRUPT_ENABLE;
  volatile uint32_t DMA_RX_INTERRUPT_WATCHDOG_TIMER;
  volatile uint32_t DMA_SLOT_FUNCTION_CONTROL_STATUS;
  volatile uint8_t RESERVED_4[4];
  volatile uint32_t DMA_CURRENT_APP_TXDESC;
  volatile uint8_t RESERVED_5[4];
  volatile uint32_t DMA_CURRENT_APP_RXDESC;
  volatile uint8_t RESERVED_6[4];
  volatile uint32_t DMA_CURRENT_APP_TXBUFFER;
  volatile uint8_t RESERVED_7[4];
  volatile uint32_t DMA_CURRENT_APP_RXBUFFER;
  volatile uint32_t DMA_STATUS;
  volatile uint32_t DMA_MISS_FRAME_CNT;
  volatile uint32_t DMA_RXP_ACCEPT_CNT;
  volatile uint32_t DMA_RX_ERI_CNT;
  volatile uint8_t RESERVED_8[16];
} gmac_ch_type_t;

/*! @brief Base addresses for the DMA channels */
#define FEATURE_GMAC_CH_BASE \
{ { \
    (gmac_ch_type_t *)((uint32_t)&GMAC_0->DMA_CH0_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_0->DMA_CH1_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_0->DMA_CH2_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_0->DMA_CH3_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_0->DMA_CH4_CONTROL)  \
  }, \
  {  \
    (gmac_ch_type_t *)((uint32_t)&GMAC_1->DMA_CH0_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_1->DMA_CH1_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_1->DMA_CH2_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_1->DMA_CH3_CONTROL), \
    (gmac_ch_type_t *)((uint32_t)&GMAC_1->DMA_CH4_CONTROL)  \
  } \
}

/**********************************************************************
 *           QuadSPI module features
 **********************************************************************/

/*! @brief First address of QuadSPI Rx Buffer on system memory map. */
#define FEATURE_QSPI_ARDB_BASE  0x41000000U
/*! @brief Last address of QuadSPI Rx Buffer on system memory map. */
#define FEATURE_QSPI_ARDB_END   0x417FFFFFU
/*! @brief First address of the serial flash device on the AHB bus. */
#define FEATURE_QSPI_AMBA_BASE  0x00000000U
/*! @brief Last address of the serial flash device on the AHB bus. */
#define FEATURE_QSPI_AMBA_END   0x1FFFFFFFU
 /*! @brief Size of AHB buffer. */
#define FEATURE_QSPI_AHB_BUF_SIZE   1024U
 /*! @brief Size of Tx buffer. */
#define FEATURE_QSPI_TX_BUF_SIZE    1024U

 /*! @brief List of DMA Tx requests */
#define FEATURE_QSPI_DMA_TX_REQ   {(uint8_t)EDMA_REQ_MUX_1_QUADSPI_TX}
 /*! @brief List of DMA Rx requests */
#define FEATURE_QSPI_DMA_RX_REQ   {(uint8_t)EDMA_REQ_MUX_1_QUADSPI_RX}
 /*! @brief List of interrupts */
#define FEATURE_QSPI_IRQS { QUADSPI_ORED_IRQ }
 /*! @brief Chip-specific options */
#define FEATURE_QSPI_CHIP_OPTIONS_S32R45
 /*! @brief Fixed DMA channels for QSPI Tx/Rx */
#define FEATURE_QSPI_FIXED_DMA_CHANNELS   0
 /*! @brief Configurable Idle Signal Drive */
#define FEATURE_QSPI_HAS_SIDE_B   1
 /*! @brief Configurable Idle Signal Drive */
#define FEATURE_QSPI_CONFIGURABLE_ISD   1
 /*! @brief Configurable Doze Mode */
#define FEATURE_QSPI_CONFIGURABLE_DOZE   0
 /*! @brief Byte swap in octal DDR mode */
#define FEATURE_QSPI_BYTE_SWAP   1
 /*! @brief Configurable DQS Enable */
#define FEATURE_QSPI_CONFIGURABLE_DQS   1
 /*! @brief Configurable Endianess */
#define FEATURE_QSPI_CONFIGURABLE_ENDIAN   0
 /*! @brief FR register re-named FRr due to conflict with FR module */
#define FEATURE_QSPI_FRR_REG   0
 /*! @brief Supports loopback DQS (Use loopback clock from PAD as strobe signal) */
#define FEATURE_QSPI_LOOPBACK_DQS   1
 /*! @brief Supports internal sampling read mode  */
#define FEATURE_QSPI_INTERNAL_SAMPLING   0
 /*! @brief Contains CFG_BIT bit in MCR register */
#define FEATURE_QSPI_CFG_BIT   0
 /*! @brief Contains HP_EN_BIT bit in BUF0CR register */
#define FEATURE_QSPI_HP_EN_BIT   0
 /*! @brief Supports DQS coarse delay configuration */
#define FEATURE_QSPI_COARSE_DELAY   0
 /*! @brief Supports 4x serial flash half clock */
#define FEATURE_QSPI_4X_CLOCK       0
 /*! @brief Supports multiple flash devices at the same time */
#define FEATURE_QSPI_MULTIPLE_DEVICES   1
 /*! @brief Number of LUT registers that make up a LUT sequence */
#define FEATURE_QSPI_LUT_SEQUENCE_SIZE   5U
 /*! @brief Supports DLL feature */
#define FEATURE_QSPI_HAS_DLL       1
 /*! @brief Supports center-aligned read strobe */
#define FEATURE_QSPI_CENTER_ALIGNED_READ_STROBE    1
 /*! @brief Supports differential clock */
#define FEATURE_QSPI_DIFFERENTIAL_CLOCK    1
 /*! @brief Contains SOCCR register */
#define FEATURE_QSPI_HAS_SOCCR       0
 /*! @brief Contains DQS_FA_SEL field in MCR register for DQS selection */
#define FEATURE_QSPI_HAS_DQS_FA_SEL       1

/**********************************************************************
 *           HSE module features
 **********************************************************************/





/**********************************************************************
 *           I2C module features
 **********************************************************************/
/* I2C module features */

/* @brief DMA instance used for I2C module */
#define I2C_DMA_INSTANCE                    (0U)

/* @brief I2C on S32G274A platform */
#define I2C_ON_S32R45_PLATFORM

/* @brief DMA instance used for I2C module */
#define I2C_DMA_REQ                         {{(uint8_t)EDMA_REQ_MUX_0_I2C_0_TX,(uint8_t)EDMA_REQ_MUX_0_I2C_0_RX}, \
                                             {(uint8_t)EDMA_REQ_MUX_0_I2C_1_TX, (uint8_t)EDMA_REQ_MUX_0_I2C_1_RX}}

/* @brief Interrupt vectors for the I2C peripheral type */
#define I2C_IRQS                            {I2C0_IRQn, I2C1_IRQn}

/* @brief PCC clocks for I2C peripheral */
#define I2C_CLOCKS                          {IIC0_CLK, IIC1_CLK}

/* @brief SCL divider values */
#define NO_I2C_SCL_DIVIDERS                    71U

/* @brief SCL divider values */
#define I2C_SCL_DIVIDER                     {{0x0, 20U}, {0x1, 22U}, {0x2, 24U}, {0x3, 26U}, {0x4, 28U}, {0x5, 30U}, {0x9, 32U}, {0x6, 34U}, {0x0A, 36U}, {0x7, 40U}, \
                                            {0x0C, 44U}, {0x0D, 48U}, {0x43, 52U}, {0x0E, 56U}, {0x45, 60U}, {0x12, 64U}, {0x0F, 68U}, {0x13, 72U}, {0x14, 80U}, {0x15, 88U}, \
                                            {0x19, 96U}, {0x16, 104U}, {0x1A, 112U}, {0x85, 120U}, {0x17, 128U}, {0x4F, 136U}, {0x1C, 144U}, {0x1D, 160U}, {0x55, 176U}, \
                                            {0x1E, 192U}, {0x56, 208U}, {0x22, 224U}, {0x1F, 240U}, {0x23, 256U}, {0x8F, 272U}, {0x24, 288U}, {0x25, 320U}, {0x95, 352U}, \
                                            {0x26, 384U}, {0x96, 416U}, {0x2A, 448U}, {0x27, 480U}, {0x2B, 512U}, {0x2C, 576U}, {0x2D, 640U}, {0x2E, 768U}, {0x32, 896U}, \
                                            {0x2F, 960U}, {0x33, 1024U}, {0x34, 1152U}, {0x35, 1280U}, {0x36, 1536U}, {0x3A, 1792U}, {0x37, 1920U}, {0x3B, 2048U}, {0x3C, 2304U}, \
                                            {0x3D, 2560U}, {0x3E, 3072U}, {0x7A, 3584U}, {0x3F, 3840U}, {0x7B, 4096U}, {0x7C, 4608U}, {0x7D, 5120U}, {0x7E, 6144U}, {0xBA, 7168U}, \
                                            {0x7F, 7680U}, {0xBB, 8192U}, {0xBC, 9216U}, {0xBD, 10240U}, {0xBE, 12288U}, {0xBF, 15360U}}


/**********************************************************************
 *           Interrupt Manager module features
 **********************************************************************/
/* @brief Lowest interrupt request number. */
#define FEATURE_INTERRUPT_IRQ_MIN         (NonMaskableInt_IRQn)
/* @brief Highest interrupt request number. */
#define FEATURE_INTERRUPT_IRQ_MAX         (LAX1_ORED_FUNC_IRQn)
/**< Number of priority bits implemented in the NVIC */
#define FEATURE_NVIC_PRIO_BITS            (3U)
/* @brief Has software interrupt. */
#define FEATURE_INTERRUPT_HAS_SOFTWARE_IRQ  (0u)
/* @brief Has pending interrupt state. */
#define FEATURE_INTERRUPT_HAS_PENDING_STATE (1u)
/* @brief Has active interrupt state. */
#define FEATURE_INTERRUPT_HAS_ACTIVE_STATE  (1u)
/* @brief Multicore support for interrupts */
#define FEATURE_INTERRUPT_MULTICORE_SUPPORT  (0u)
/* @brief Registers in which the start of interrupt vector table needs to be configured */
#define FEATURE_INTERRUPT_INT_VECTORS {NULL, NULL, NULL, NULL, \
                                       &S32_SCB->VTOR, &S32_SCB->VTOR, &S32_SCB->VTOR}

/**********************************************************************
 *           LINFlexd_UART module features
 **********************************************************************/
/* @brief LINFlexD rx/tx/error interrupt lines ored toghether. */
#define FEATURE_LINFLEXD_ORED_INT_LINES
/* @brief Clock names for LINFlexD */
#define LINFLEXD_CLOCK_NAMES {LIN0_CLK, LIN1_CLK}
/* @brief LINFlexD interrupt vectors (defined in header file) */
#define LINFLEXD_IRQS {LINFLEXD0_IRQn, LINFLEXD1_IRQn}
/* @brief Address of the least significant byte in a 32-bit register (depends on endianness) */
#define FEATURE_LINFLEXD_LSB_ADDR(reg)  ((uint32_t)(&(reg)))
/* @brief Address of the least significant word in a 32-bit register (depends on endianness) */
#define FEATURE_LINFLEXD_LSW_ADDR(reg)  ((uint32_t)(&(reg)))
/* @brief LINFlexD DMA support */
#define FEATURE_LINFLEXD_HAS_DMA_ENABLED (1U)
/* @brief LINFlexD DMA enabled instances */
#define FEATURE_LINFLEXD_INST_HAS_DMA {true, true}




/**********************************************************************
 *           MPU_M7 module features
 **********************************************************************/
/* @brief Number of MPU_M7 supported regions */
#define FEATURE_MPU_M7_MAX_REGIONS (16u)
/* @brief MPU_M7 subregion smallest size */
#define FEATURE_MPU_M7_SMALLEST_SUBREGION (256u)
/* @brief MPU_M7 execute rights mask */
#define FEATURE_MPU_M7_EXECUTE_RIGHT_MASK (0x10u)
/**********************************************************************
 *           MU module features
 **********************************************************************/





/**********************************************************************
 *           MSCM module features
 **********************************************************************/
/* @brief Has interrupt router control registers (IRSPRCn). */
#define FEATURE_MSCM_HAS_INTERRUPT_ROUTER                (0)
/* @brief Has directed CPU interrupt router registers (IRCPxxx). */
#define FEATURE_MSCM_HAS_CPU_INTERRUPT_ROUTER            (1)
/**< Supported directed interrupts */
#define FEATURE_DIRECTED_CPU_INT_MIN                     (INT0_IRQn)
#define FEATURE_DIRECTED_CPU_INT_MAX                     (INT2_IRQn)

/**********************************************************************
 *           OCOTP module features
 **********************************************************************/

 /*OCOTP on S32R45 platform */
 #define OCOTP_ON_S32R45_PLATFORM

 /* Define for PRPW and SHPW registers */
#define OCOTP_PRPW_AND_SHPW_REG_ENABLED

/* Number of eFuses on chip */
#define OCOTP_FUSE_WORDS                        162U

/* Number of Shadow Registers */
#define OCOTP_SHADOW_COUNT                      256U

/* ECC is on 7-bit            */
#define ECC_LENGTH                              7U

/* ECC G[i] values */
#define ECC_VALUES                              {0xC14840FFU, 0x2124FF90U, 0x6CFF0808U, 0xFF01A444U, 0x16F092A6U, 0x101F7161U, 0x8A820F1BU}


/**********************************************************************
 *           OSIF module features
 **********************************************************************/
#define FEATURE_OSIF_USE_SYSTICK                         (1)
#define FEATURE_OSIF_USE_PIT                             (0)
#define FEATURE_OSIF_FREERTOS_ISR_CONTEXT_METHOD         (1) /* Cortex M device */
#define OSIF_CLK XBAR_CLK

/**********************************************************************
 *           PHY module features
 **********************************************************************/





/**********************************************************************
 *           PIT module features
 **********************************************************************/
/*! @brief PIT module has RTI channel */
#define FEATURE_PIT_HAS_RTI_CHANNEL            (0U)
/*! @brief Number of interrupt vector for channels of the PIT module */
#define FEATURE_PIT_HAS_NUM_IRQS_CHANS         (1U)
/*! @brief PIT module has a peculiar instance */
#define FEATURE_PIT_HAS_PECULIAR_INSTANCE   (1U)
/*! @brief Number of PIT instance without lifetime timer */
#define FEATURE_PIT_NUM_INST_WITHOUT_LIFETIME_TIMER     (0U)
/*! @brief Each channel of PIT module has a separate interrupt */
#define FEATURE_PIT_CHANNEL_HAS_SEPARATE_INTERRUPT      (0U)

#if FEATURE_PIT_NUM_INST_WITHOUT_LIFETIME_TIMER
/*! @brief PIT instance base without lifetime timer */
#define PIT_INST_BASE_WITHOUT_LIFETIME_TIMER   (PIT_0)
#endif

#if FEATURE_PIT_HAS_PECULIAR_INSTANCE
/*! @brief The peculiar instance */
#define PIT_PECULIAR_INSTANCE_1    (1U)
/*! @brief The number channel of the peculiar instance */
#define PIT_CHAN_NUM_OF_PECULIAR_INSTANCE_1   (6U)
#endif

#if FEATURE_PIT_HAS_RTI_CHANNEL
/*! @brief Clock names for RTI. */
#define RTI_CLOCK_NAMES    {FXOSC_CLK}
#endif
/*! @brief Clock names for PIT. */
#define PIT_CLOCK_NAMES    {PIT0_CLK,PIT1_CLK}




/**********************************************************************
 *           Pins module features
 **********************************************************************/
/*! @brief SIUL2 module maximum number of input signal on a pin */
#define FEATURE_SIUL2_MAX_NUMBER_OF_INPUT        (4U)
/*! @brief SIUL2 module input interrupt numbers for main SIUL2 base */
#define FEATURE_SIUL2_NUM_OF_INTERRUPT           (32U)
/** Index instance for SIUL2_0 */
#define SIUL2_INSTANCE_0                          0U
/** Index instance for SIUL2_1 */
#define SIUL2_INSTANCE_1                          1U

/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint16_t PGPDO;          /**< SIUL2 Parallel GPIO Pad Data Out Register, array offset: 0x1700, array step: 0x2 */
       uint16_t RESERVED_1[31];
  __I  uint16_t PGPDI;          /**< SIUL2 Parallel GPIO Pad Data In Register, array offset: 0x1740, array step: 0x2 */
} GPIO_Type;

/** Number of instances of the SIUL2 module. */
#define GPIO_INSTANCE_COUNT (9u)
/** Index instance for SIUL2_0 */
#define SIUL2_INSTANCE_0           0U
/** Index instance for SIUL2_1 */
#define SIUL2_INSTANCE_1           1U

/* SIUL2 - GPIO Peripheral instance base addresses */
/** SIUL2_0 */
/** Peripheral PTB base address */
#define PTB_BASE                         (0x4009D700u)
/** Peripheral PTB base pointer */
#define PTB                              ((GPIO_Type *)PTB_BASE)
/** Peripheral PTA base address */
#define PTA_BASE                         (0x4009D702u)
/** Peripheral PTA base pointer */
#define PTA                              ((GPIO_Type *)PTA_BASE)
/** Peripheral PTD base address */
#define PTD_BASE                         (0x4009D704u)
/** Peripheral PTD base pointer */
#define PTD                              ((GPIO_Type *)PTD_BASE)
/** Peripheral PTC base address */
#define PTC_BASE                         (0x4009D706u)
/** Peripheral PTC base pointer */
#define PTC                              ((GPIO_Type *)PTC_BASE)
/** Peripheral PTF base address */
#define PTF_BASE                         (0x4009D708u)
/** Peripheral PTF base pointer */
#define PTF                              ((GPIO_Type *)PTF_BASE)
/** Peripheral PTE base address */
#define PTE_BASE                         (0x4009D70Au)
/** Peripheral PTE base pointer */
#define PTE                              ((GPIO_Type *)PTE_BASE)
/** Peripheral PTG base address */
#define PTG_BASE                         (0x4009D70Eu)
/** Peripheral PTG base pointer */
#define PTG                              ((GPIO_Type *)PTG_BASE)

/** SIUL2_1 */
/** Peripheral PTH base address */
#define PTH_BASE                         (0x4403D70Eu)
/** Peripheral PTH base pointer */
#define PTH                              ((GPIO_Type *)PTH_BASE)
/** Peripheral PTJ base address */
#define PTJ_BASE                         (0x4403D70Cu)
/** Peripheral PTJ base pointer */
#define PTJ                              ((GPIO_Type *)PTJ_BASE)
/** Peripheral PTK base address */
#define PTK_BASE                         (0x4403D712u)
/** Peripheral PTK base pointer */
#define PTK                              ((GPIO_Type *)PTK_BASE)

/** Number of instances of the GPIO module. */
#define GPIO_INSTANCE_COUNT              (9u)
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                   {{ PTA , PTB , PTC , PTD , PTE , PTF , PTG , NULL, NULL }, \
                                          { NULL, NULL, NULL, NULL, NULL, NULL, PTH , PTJ , PTK  }}

/** PORT - Register Layout Typedef */
typedef struct {
  __IO  uint32_t MSCR[16];
} PORT_Type;

#define SIUL2_0_MSCR_BASE                (SIUL2_0->MSCR)
#define SIUL2_1_MSCR_BASE                (SIUL2_1->MSCR)
#define SIUL2_0_IMCR_BASE                (SIUL2_0->IMCR)
#define SIUL2_1_IMCR_BASE                (SIUL2_1->IMCR)

/** SIUL2_0 */
/** Peripheral PORTA base pointer */
#define PORTA                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x00))
/** Peripheral PORTB base pointer */
#define PORTB                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x10))
/** Peripheral PORTC base pointer */
#define PORTC                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x20))
/** Peripheral PORTD base pointer */
#define PORTD                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x30))
/** Peripheral PORTE base pointer */
#define PORTE                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x40))
/** Peripheral PORTF base pointer */
#define PORTF                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x50))
/** Peripheral PORTG base pointer */
#define PORTG                            ((PORT_Type *)(SIUL2_0_MSCR_BASE + 0x60))

/** SIUL2_1 */
/** Peripheral PORTH base pointer */
#define PORTH                            ((PORT_Type *)(SIUL2_1_MSCR_BASE + 0x60))
/** Peripheral PORTJ base pointer */
#define PORTJ                            ((PORT_Type *)(SIUL2_1_MSCR_BASE + 0x70))
/** Peripheral PORTK base pointer */
#define PORTK                            ((PORT_Type *)(SIUL2_1_MSCR_BASE + 0x80))

#define PORT_BASE_PTRS                   { PORTA, PORTB, PORTC, PORTD, PORTE, PORTF, \
                                           PORTG, PORTH, PORTJ, PORTK }

/**********************************************************************
 *           Power Manager module features
 **********************************************************************/





/**********************************************************************
 *           QSPI module features
 **********************************************************************/





/**********************************************************************
 *           REG_PROT module features
 **********************************************************************/
/* @brief The default address of module which need to protect */
#define REG_PROT_DEFAULT_ADDRESS               (STM_0_BASE)
/* @brief The default value of the register base address of module */
#define REG_PROT_DEFAULT_REGISTER_BASE_ADDRESS (STM_0_BASE)
/* @brief The offest address of GCR register with protection memory as 1KB */
#define REG_PROT_GCR_1KB_OFFSET       (0x900U)
/* @brief The offest address of GCR register with protection memory as 2KB */
#define REG_PROT_GCR_2KB_OFFSET       (0x1200U)
/* @brief The offest address of GCR register with protection memory as 4KB */
#define REG_PROT_GCR_4KB_OFFSET       (0x2400U)
/* @brief The offest address of GCR register with protection memory as 8KB */
#define REG_PROT_GCR_8KB_OFFSET       (0x4800U)
/* @brief The offest address of GCR register with protection memory as 16KB */
#define REG_PROT_GCR_16KB_OFFSET      (0x9000U)
/* @brief The offest address of GCR register with protection memory as 32KB */
#define REG_PROT_GCR_32KB_OFFSET      (0x12000U)

/* @brief The offest address of SLBR register with protection memory as 1KB */
#define REG_PROT_SLBR_1KB_OFFSET      (0x800U)
/* @brief The offest address of SLBR register with protection memory as 2KB */
#define REG_PROT_SLBR_2KB_OFFSET      (0x1000U)
/* @brief The offest address of SLBR register with protection memory as 4KB */
#define REG_PROT_SLBR_4KB_OFFSET      (0x2000U)
/* @brief The offest address of SLBR register with protection memory as 8KB */
#define REG_PROT_SLBR_8KB_OFFSET      (0x4000U)
/* @brief The offest address of SLBR register with protection memory as 16KB */
#define REG_PROT_SLBR_16KB_OFFSET     (0x8000U)
/* @brief The offest address of SLBR register with protection memory as 32KB */
#define REG_PROT_SLBR_32KB_OFFSET     (0x10000U)

/* @brief The offest address of lock bit register with protection memory as 1KB */
#define REG_PROT_LOCK_1KB_OFFSET      (0x400U)
/* @brief The offest address of lock bit register with protection memory as 2KB */
#define REG_PROT_LOCK_2KB_OFFSET      (0x800U)
/* @brief The offest address of lock bit register with protection memory as 4KB */
#define REG_PROT_LOCK_4KB_OFFSET      (0x1000U)
/* @brief The offest address of lock bit register with protection memory as 8KB */
#define REG_PROT_LOCK_8KB_OFFSET      (0x2000U)
/* @brief The offest address of lock bit register with protection memory as 16KB */
#define REG_PROT_LOCK_16KB_OFFSET     (0x4000U)
/* @brief The offest address of lock bit register with protection memory as 32KB */
#define REG_PROT_LOCK_32KB_OFFSET     (0x8000U)

/* @brief The address mask with protection memory as 1KB */
#define REG_PROT_ADDR_BLOCK_1KB_MASK  (0xFFFU)
/* @brief The address mask with protection memory as 2KB */
#define REG_PROT_ADDR_BLOCK_2KB_MASK  (0xFFFU)
/* @brief The address mask with protection memory as 4KB */
#define REG_PROT_ADDR_BLOCK_4KB_MASK  (0xFFFU)
/* @brief The address mask with protection memory as 8KB */
#define REG_PROT_ADDR_BLOCK_8KB_MASK  (0x3FFFU)
/* @brief The address mask with protection memory as 16KB */
#define REG_PROT_ADDR_BLOCK_16KB_MASK (0xFFFU)
/* @brief The address mask with protection memory as 32KB */
#define REG_PROT_ADDR_BLOCK_32KB_MASK (0xFFFU)
/* @brief The register protection has 2KB reserved */
#define REG_PROT_FEATURE_HAS_2KB_RESERVED (0U)
/* @brief The register protection has little endian or big endian */
#define REG_PROT_FEATURE_HAS_LITTLE_ENDIAN (1U)


/**********************************************************************
 *           SEMA42 module features
 **********************************************************************/
/* SEMA42 module features */

/* @brief The SEMA42 Logical Bus Master Number for Core M7 master */
#define FEATURE_SEMA42_MASTER_CORE_M7_0         (0U)
#define FEATURE_SEMA42_MASTER_CORE_M7_1         (1U)
#define FEATURE_SEMA42_MASTER_CORE_M7_2         (2U)

/* @brief Number of core supported by S32 SDK */
#define FEATURE_SEMA42_NUMBER_OF_CORES (3U)
/* @brief First core id */
#define FEATURE_SEMA42_COREID_OFFSET (4U)

/* @brief The SEMA42 Logical Bus Masters */
#define FEATURE_SEMA42_MASTER                        \
{                                                    \
FEATURE_SEMA42_MASTER_CORE_M7_0,                     \
FEATURE_SEMA42_MASTER_CORE_M7_1,                     \
FEATURE_SEMA42_MASTER_CORE_M7_2                     \
}

#define FEATURE_SEMA42_LAST_BITS_INVERTED

#if defined (FEATURE_SEMA42_LAST_BITS_INVERTED)
#define FEATURE_SEMA42_INVERTED_BITS_MASK    (0xFCU)
#define FEATURE_SEMA42_INVERTED_BITS_SHIFT   (0U)
#define FEATURE_SEMA42_INVERTED_BITS_WIDTH   (2U)
#define FEATURE_SEMA42_CLEAR_LAST_BITS(x)    (((uint8_t)(((uint8_t)(x))<<FEATURE_SEMA42_INVERTED_BITS_SHIFT))&FEATURE_SEMA42_INVERTED_BITS_MASK)
#define FEATURE_SEMA42_INVERT_LAST_BITS(x)   (((uint8_t)(((uint8_t)(~x))<<FEATURE_SEMA42_INVERTED_BITS_SHIFT))&(~FEATURE_SEMA42_INVERTED_BITS_MASK))
#endif /* defined (FEATURE_SEMA42_LAST_BITS_INVERTED) */

/**********************************************************************
 *           SPI module features
 **********************************************************************/

 #define DSPI_Type                SPI_Type

/* Define the PCS allocation for each DSPI/SPI module */
#define FEATURE_SPI_0_PCS_NUMBER 5
#define FEATURE_SPI_1_PCS_NUMBER 5
#define FEATURE_SPI_2_PCS_NUMBER 5
#define FEATURE_SPI_3_PCS_NUMBER 5
#define FEATURE_SPI_4_PCS_NUMBER 5
#define FEATURE_SPI_5_PCS_NUMBER 5

#define FEATURE_DSPI_PCS_MAPPING {FEATURE_SPI_0_PCS_NUMBER, FEATURE_SPI_1_PCS_NUMBER, FEATURE_SPI_2_PCS_NUMBER, \
                                  FEATURE_SPI_3_PCS_NUMBER, FEATURE_SPI_4_PCS_NUMBER, FEATURE_SPI_5_PCS_NUMBER}

/* Define the instance relocation */
#define FEATURE_DSPI_INSTANCES  {(DSPI_Type *)SPI_0_BASE, (DSPI_Type *)SPI_1_BASE, \
                                 (DSPI_Type *)SPI_2_BASE, (DSPI_Type *)SPI_3_BASE, (DSPI_Type *)SPI_4_BASE, (DSPI_Type *)SPI_5_BASE}

/* Define the initial values for state structures */
#define FEATURE_DSPI_INITIAL_STATE {NULL, NULL, NULL, NULL, NULL, NULL}

/* Define clock sources for SPI/DSPI instances */
#define FEATURE_DSPI_CLOCK_MAPPING {SPI0_CLK, SPI1_CLK, SPI2_CLK, SPI3_CLK, SPI4_CLK, SPI5_CLK}

/* Define margins of instances interval */
#define SPI_LOWEST_INSTANCE 0U
#define SPI_HIGHEST_INSTANCE 5U

/* On this platform we have only SPI devices */
#define DSPI_INSTANCE_COUNT 0U

/* Define FIFO size */
#define DSPI_FIFO_SIZE 5U

/* Define bases for DSPI interrupts */
#define FEATURES_DSPI_INTERUPT_BASE 85U

/* All interrupts shares the same interrupt index */
#define FEATIRES_DSPI_HAS_SHARED_INTERRUPTS 0U

/* On this platform DSPI in extended mode is supported */
#define FEATURE_DSPI_HAS_EXTENDED_MODE 0U

/* Use this define if it is little endian format */
#define FEATIRES_DSPI_LITTLE_ENDIAN_FORMAT  0U


/**********************************************************************
 *           STM module features
 **********************************************************************/

/*! @brief STM module CR register has CSL bit-field */
#define FEATURE_STM_HAS_CLOCK_SELECTION        (0U)
/*! @brief Number of interrupt vector for channels of the STM module */
#define FEATURE_STM_HAS_NUM_IRQS_CHANS  (1U)
/*! @brief Clock names for STM. */
#define STM_CLOCK_NAMES    { XBAR_DIV3_CLK }




/**********************************************************************
 *           SWT module features
 **********************************************************************/

/* @brief Support service mode watch-point input */
#define FEATURE_SWT_SUPPORT_WATCHPOINT      (0U)
/* @brief Support for clock selection */
#define FEATURE_SWT_HAS_CLOCK_SELECT        (0U)
/* @brief Support for running in stop mode */
#define FEATURE_SWT_HAS_STOP_MODE           (1U)
/* @brief Support for Self Reset
 * Only SWT instances 1-6 can support this feature
 * SWT_0 instance reset request is tied to system reset
 * bits set are for instances that support this feature
 */
#define FEATURE_SWT_RRR_SUPPORT             (0x0000007EUL)
/* @brief The key values to clear Soft Lock bit */
#define FEATURE_SWT_UNLOCK_VALUE1           (0xC520U)
#define FEATURE_SWT_UNLOCK_VALUE2           (0xD928U)
/* @brief The key values used for resetting the SWT counter in Fixed Service Sequence Mode */
#define FEATURE_SWT_FIXED_SERVICE_VALUE1    (0xA602U)
#define FEATURE_SWT_FIXED_SERVICE_VALUE2    (0xB480U)
/* @brief The reset value of the control register */
#define FEATURE_SWT_CR_RESET_VALUE          (0xFF00010AU)
/* @brief The reset value of the timeout register */
#define FEATURE_SWT_TO_RESET_VALUE          (0x0073FDE0U)
/* @brief The reset value of the window register */
#define FEATURE_SWT_WN_RESET_VALUE          (0x0U)
/* @brief The reset value of the service key register */
#define FEATURE_SWT_SK_RESET_VALUE          (0x0U)
/* @brief The minimum timeout value */
#define FEATURE_SWT_TO_MINIMUM_VALUE        (0x100U)
/* @brief Sets the master access protection field */
#define FEATURE_SWT_MAP_MASK                (0xFF000000U)
#define FEATURE_SWT_MAP_SHIFT               (24U)
#define FEATURE_SWT_MAP(x)                  (((uint32_t)(((uint32_t)(x)) << FEATURE_SWT_MAP_SHIFT)) & FEATURE_SWT_MAP_MASK)




/**********************************************************************
 *           TMU module features
 **********************************************************************/





/**********************************************************************
 *           WKPU module features
 **********************************************************************/
/* @brief WKPU core source. */
typedef enum
{
    WKPU_CORE0    = 0U    /*!< Core 0 */
} wkpu_core_t;

/* @brief The WKPU core array */
#define FEATURE_WKPU_CORE_ARRAY     \
{                                   \
    WKPU_CORE0    /*!< Core 0 */    \
}

/*! @brief The number core support for WKPU module */
#define FEATURE_WKPU_NMI_NUM_CORES                      (1U)
/*! @brief The distance between cores */
#define FEATURE_WKPU_CORE_OFFSET_SIZE                   (8U)
/*! @brief WKPU support non-maskable interrupt */
#define FEATURE_WKPU_SUPPORT_NON_MASK_INT               (1U)

/**********************************************************************
 *           uSDHC module features
 **********************************************************************/
/*! @brief USDHC peripheral clock names */
#define FEATURE_USDHC_CLOCK_NAMES           { USDHC0_CLK }
/*! @brief USDHC supports MMC boot */
#define FEATURE_USDHC_HAS_MMC_BOOT          (1U)


/**********************************************************************
 *           ADC_PAL module features
 **********************************************************************/





/**********************************************************************
 *           CAN_PAL module features
 **********************************************************************/





/**********************************************************************
 *           I2C_PAL module features
 **********************************************************************/





/**********************************************************************
 *           IC_PAL module features
 **********************************************************************/





/**********************************************************************
 *           XRDC module features
 **********************************************************************/
/* @brief XRDC hardware revision */
#define FEATURE_XRDC_HARDWARE_REVISION_LEVEL        (0x5U)
/* @brief Support virtualization aware */
#define FEATURE_XRDC_HAS_VIRTUALIZATION_AWARE       (0U)
/* @brief The special memory instance mask */
#define FEATURE_XRDC_SPECIAL_MEM_INSTANCE_MASK      (0x0U)
/* @brief Maximal number of peripheral access controllers */
#define FEATURE_XRDC_MAX_PAC_COUNT                  (4U)
/* @brief Maximal number of slots in peripheral access controller */
#define FEATURE_XRDC_PAC_MAX_SLOT_COUNT             (128U)
/* @brief Maximal number of memory region controllers */
#define FEATURE_XRDC_MAX_MRC_COUNT                  (14U)
/* @brief Maximal number of regions in memory region controller */
#define FEATURE_XRDC_MRC_MAX_REGION_COUNT           (16U)
/* @brief Number of supported domains */
#define FEATURE_XRDC_DOMAIN_COUNT                   (8U)
/* @brief Number of supported domains */
#define FEATURE_XRDC_HAS_HIGHER_ADDRESS             (0x3U)

/* @brief Number of processor domain assignments */
#define FEATURE_XRDC_PROC_COUNT                     (8U)
/* @brief Processor Cortex A53 Cluster 0 */
#define FEATURE_XRDC_PROC_CORTEX_A53_C0             (0U)
/* @brief Processor Cortex A53 Cluster 1 */
#define FEATURE_XRDC_PROC_CORTEX_A53_C1             (1U)
/* @brief Processor Cortex M7 Core 0, AXI */
#define FEATURE_XRDC_PROC_CORTEX_M7_0_AXI           (8U)
/* @brief Processor Cortex M7 Core 1, AXI */
#define FEATURE_XRDC_PROC_CORTEX_M7_1_AXI           (9U)
/* @brief Processor Cortex M7 Core 2, AXI */
#define FEATURE_XRDC_PROC_CORTEX_M7_2_AXI           (10U)
/* @brief Processor Cortex M7 Core 0, AXI */
#define FEATURE_XRDC_PROC_CORTEX_M7_0_AHB           (16U)
/* @brief Processor Cortex M7 Core 1, AHB */
#define FEATURE_XRDC_PROC_CORTEX_M7_1_AHB           (17U)
/* @brief Processor Cortex M7 Core 2, AHB */
#define FEATURE_XRDC_PROC_CORTEX_M7_2_AHB           (18U)

/* @brief Number of nonprocessor domain assignments */
#define FEATURE_XRDC_NONPROC_COUNT                  (22U)
/* @brief Nonprocessor DEBUG ETR  */
#define FEATURE_XRDC_NONPROC_DEBUG_ETR              (2U)
/* @brief Nonprocessor GIC-500 */
#define FEATURE_XRDC_NONPROC_GIC_500                (3U)
/* @brief Nonprocessor SerDes 0 */
#define FEATURE_XRDC_NONPROC_SERDES0                (5U)
/* @brief Nonprocessor eDMA 0  */
#define FEATURE_XRDC_NONPROC_DMA0                   (6U)
/* @brief Nonprocessor eDMA 1 */
#define FEATURE_XRDC_NONPROC_DMA1                   (7U)
/* @brief Nonprocessor HSE */
#define FEATURE_XRDC_NONPROC_HSE                    (11U)
/* @brief Nonprocessor GMAC 0 (Ethernet) */
#define FEATURE_XRDC_NONPROC_GMAC0                  (12U)
/* @brief Nonprocessor FlexRay */
#define FEATURE_XRDC_NONPROC_FLEXRAY                (15U)
/* @brief Nonprocessor uSDHC */
#define FEATURE_XRDC_NONPROC_USDHC                  (20U)
/* @brief Nonprocessor Debug Trace */
#define FEATURE_XRDC_NONPROC_DEBUG_TRACE            (21U)
/* @brief Nonprocessor MIPICSI2_0 */
#define FEATURE_XRDC_NONPROC_MIPICSI2_0             (32U)
/* @brief Nonprocessor MIPICSI2_1 */
#define FEATURE_XRDC_NONPROC_MIPICSI2_1             (33U)
/* @brief Nonprocessor MIPICSI2_2 */
#define FEATURE_XRDC_NONPROC_MIPICSI2_2             (34U)
/* @brief Nonprocessor MIPICSI2_3 */
#define FEATURE_XRDC_NONPROC_MIPICSI2_3             (35U)
/* @brief Nonprocessor BBE32 DSP */
#define FEATURE_XRDC_NONPROC_BBE32_DSP              (36U)
/* @brief Nonprocessor SPT */
#define FEATURE_XRDC_NONPROC_SPT                    (37U)
/* @brief Nonprocessor LAX 0 */
#define FEATURE_XRDC_NONPROC_LAX0                   (38U)
/* @brief Nonprocessor GMAC 1 (Ethernet) */
#define FEATURE_XRDC_NONPROC_GMAC1                  (39U)
/* @brief Nonprocessor SerDes 1 */
#define FEATURE_XRDC_NONPROC_SERDES1                (40U)
/* @brief Nonprocessor FastDMA to DRAM0 */
#define FEATURE_XRDC_NONPROC_DRAM0_FDMA             (41U)
/* @brief Nonprocessor FastDMA to SRAM */
#define FEATURE_XRDC_NONPROC_SRAM_FDMA              (42U)
/* @brief Nonprocessor LAX 1 */
#define FEATURE_XRDC_NONPROC_LAX1                   (43U)

/* @brief Number of master domain assignments */
#define FEATURE_XRDC_MASTER_COUNT                   (30U)
/* @brief Master domain assignments */
#define FEATURE_XRDC_MASTER             \
{                                       \
FEATURE_XRDC_PROC_CORTEX_A53_C0,        \
FEATURE_XRDC_PROC_CORTEX_A53_C1,        \
FEATURE_XRDC_PROC_CORTEX_M7_0_AXI,      \
FEATURE_XRDC_PROC_CORTEX_M7_1_AXI,      \
FEATURE_XRDC_PROC_CORTEX_M7_2_AXI,      \
FEATURE_XRDC_PROC_CORTEX_M7_0_AHB,      \
FEATURE_XRDC_PROC_CORTEX_M7_1_AHB,      \
FEATURE_XRDC_PROC_CORTEX_M7_2_AHB,      \
FEATURE_XRDC_NONPROC_DEBUG_ETR,         \
FEATURE_XRDC_NONPROC_GIC_500,           \
FEATURE_XRDC_NONPROC_SERDES0,           \
FEATURE_XRDC_NONPROC_DMA0,              \
FEATURE_XRDC_NONPROC_DMA1,              \
FEATURE_XRDC_NONPROC_HSE,               \
FEATURE_XRDC_NONPROC_GMAC0,             \
FEATURE_XRDC_NONPROC_FLEXRAY,           \
FEATURE_XRDC_NONPROC_USDHC,             \
FEATURE_XRDC_NONPROC_DEBUG_TRACE,       \
FEATURE_XRDC_NONPROC_MIPICSI2_0,        \
FEATURE_XRDC_NONPROC_MIPICSI2_1,        \
FEATURE_XRDC_NONPROC_MIPICSI2_2,        \
FEATURE_XRDC_NONPROC_MIPICSI2_3,        \
FEATURE_XRDC_NONPROC_BBE32_DSP,         \
FEATURE_XRDC_NONPROC_SPT,               \
FEATURE_XRDC_NONPROC_LAX0,              \
FEATURE_XRDC_NONPROC_GMAC1,             \
FEATURE_XRDC_NONPROC_SERDES1,           \
FEATURE_XRDC_NONPROC_DRAM0_FDMA,        \
FEATURE_XRDC_NONPROC_SRAM_FDMA,         \
FEATURE_XRDC_NONPROC_LAX1,              \
}
/*!
 * @brief Available master mask for XRDC instances
 * 0xMMMMMMMM: supported master mask
 */
#define FEATURE_XRDC_MASTER_SUPPORTED_TYPE uint64_t
#define FEATURE_XRDC_MASTER_SUPPORTED \
{                                    \
0x0000000000379FEFU,                 \
0x00000FFF00000000U,                 \
}

/* @brief The number of slave instances */
#define FEATURE_XRDC_SLAVE_COUNT                    (17U)
/* @brief The memory index */
#define FEATURE_XRDC_SLAVE_MRC_INDEX                (0U)
/* @brief The number of slave memories */
#define FEATURE_XRDC_SLAVE_MRC_COUNT                (13U)
/* @brief The memory instance DRAM0_COHERENT(0), DRAM0_M7_EDMA(1), DRAM0_GENERAL(2) / LAX_0 Slave AXI */
#define FEATURE_XRDC_SLAVE_MRC0                     (0U)
/* @brief The memory instance 1 None / SerDes_1 Slave AXI */
#define FEATURE_XRDC_SLAVE_MRC1                     (1U)
/* @brief The memory instance 2 SRAM_1(0), SRAM_2(1), SRAM_3(2), SRAM_0(3) / Retention RAM */
#define FEATURE_XRDC_SLAVE_MRC2                     (2U)
/* @brief The memory instance 3 SRAM_5(0), SRAM_6(1), SRAM_7(2), SRAM_4(3) / NoC_1 User Service Registers */
#define FEATURE_XRDC_SLAVE_MRC3                     (3U)
/* @brief The memory instance 4 SRAM_9(0), SRAM_8(1), SRAM_11(2), SRAM_10(3) / BBE32-DSP Slave AXI */
#define FEATURE_XRDC_SLAVE_MRC4                     (4U)
/* @brief The memory instance 5 SRAM_12(0), SRAM_13(1), SRAM_14(2), SRAM_15(3) / NCore accesses for MIPICSI2[0:3], SPT, BBE32 DSP, LAX_0, LAX_1, SerDes_1, and GMAC_1 */
#define FEATURE_XRDC_SLAVE_MRC5                     (5U)
/* @brief The memory instance 6 Ncore registers(1) and coherent accesses of SerDes_0, GMAC_0, and other masters with access to this slave port(0) / LAX_1 Slave AXI */
#define FEATURE_XRDC_SLAVE_MRC6                     (6U)
/* @brief The memory instance 7 S_FLASH(0)(external) / Chirp Buffer RAM */
#define FEATURE_XRDC_SLAVE_MRC7                     (7U)
/* @brief The memory instance 9 S_GIC-500(0) / None */
#define FEATURE_XRDC_SLAVE_MRC9                     (9U)
/* @brief The memory instance 10 S_SerDes(0) / None */
#define FEATURE_XRDC_SLAVE_MRC10                    (10U)
/* @brief The memory instance 11 M7_TCM_0(0), M7_TCM_1(1), and M7_TCM_2(2) / None */
#define FEATURE_XRDC_SLAVE_MRC11                    (11U)
/* @brief The memory instance 12 NoC_0 registers(0) / None */
#define FEATURE_XRDC_SLAVE_MRC12                    (12U)
/* @brief The memory instance 13 S_DBG_APB(0) / None */
#define FEATURE_XRDC_SLAVE_MRC13                    (13U)
/* @brief The peripheral index */
#define FEATURE_XRDC_SLAVE_PAC_INDEX                (16U)
/* @brief The number of slave peripherals */
#define FEATURE_XRDC_SLAVE_PAC_COUNT                (4U)
/* @brief The peripheral instance 0 Peripheral Bridge 0 (Peripheral group 4 for instance 1) */
#define FEATURE_XRDC_SLAVE_PAC0                     (16U)
/* @brief The peripheral instance 1 Peripheral Bridge 1 */
#define FEATURE_XRDC_SLAVE_PAC1                     (17U)
/* @brief The peripheral instance 2 Peripheral Bridge 2 */
#define FEATURE_XRDC_SLAVE_PAC2                     (18U)
/* @brief The peripheral instance 3 Peripheral Bridge 3 */
#define FEATURE_XRDC_SLAVE_PAC3                     (19U)
/* @brief The slave instances */
#define FEATURE_XRDC_SLAVE \
{                          \
FEATURE_XRDC_SLAVE_MRC0,   \
FEATURE_XRDC_SLAVE_MRC1,   \
FEATURE_XRDC_SLAVE_MRC2,   \
FEATURE_XRDC_SLAVE_MRC3,   \
FEATURE_XRDC_SLAVE_MRC4,   \
FEATURE_XRDC_SLAVE_MRC5,   \
FEATURE_XRDC_SLAVE_MRC6,   \
FEATURE_XRDC_SLAVE_MRC7,   \
FEATURE_XRDC_SLAVE_MRC9,   \
FEATURE_XRDC_SLAVE_MRC10,  \
FEATURE_XRDC_SLAVE_MRC11,  \
FEATURE_XRDC_SLAVE_MRC12,  \
FEATURE_XRDC_SLAVE_MRC13,  \
FEATURE_XRDC_SLAVE_PAC0,   \
FEATURE_XRDC_SLAVE_PAC1,   \
FEATURE_XRDC_SLAVE_PAC2,   \
FEATURE_XRDC_SLAVE_PAC3,   \
}
/*!
 * @brief Available slave mask for XRDC instances
 * 0xPPPPMMMM: supported slave mask
 * - 0xPPPP: supported peripheral mask
 * - 0xMMMM: supported memory mask
 */
#define FEATURE_XRDC_SLAVE_MRC_MASK                 (0xFFFFU)
#define FEATURE_XRDC_SLAVE_PAC_MASK                 (0xFFFF0000U)
#define FEATURE_XRDC_SLAVE_SUPPORTED \
{                                    \
0x000F3EFDU,                         \
0x000100FFU,                         \
}

/**********************************************************************
 *           OC_PAL module features
 **********************************************************************/





/**********************************************************************
 *           PWM_PAL module features
 **********************************************************************/





/**********************************************************************
 *           SECURITY_PAL module features
 **********************************************************************/





/**********************************************************************
 *           SPI_PAL module features
 **********************************************************************/





/**********************************************************************
 *           TIMING_PAL module features
 **********************************************************************/
/* @brief FTM default handler */
#define FTM0_Ch0_7_IrqHandler FTM0_IRQHandler
#define FTM1_Ch0_7_IrqHandler FTM1_IRQHandler
/* @brief PIT default handler */
#define PIT_RTI0_IRQHandler PIT0_IRQHandler
#define PIT_RTI1_IRQHandler PIT1_IRQHandler

/**********************************************************************
 *           UART_PAL module features
 **********************************************************************/





/**********************************************************************
 *           WDG_PAL module features
 **********************************************************************/






#endif /* S32R45_FEATURES_H */

/*******************************************************************************
 * EOF
 ******************************************************************************/
