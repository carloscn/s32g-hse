/**
 *   @file    Serial.c
 *
 *   @brief   HSE Serial implementation.
 *
 *   @addtogroup serial_c
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
extern "C" {
#endif

/*==================================================================================================
 *                                        INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *  ==============================================================================================*/

#include "Serial.h"

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *  ==============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *  ==============================================================================================*/
/* MSCR_OP_SETTINGS MACROS */
#define IOMUXC_MSCR_OBE_MASK                               (0x01UL)
#define IOMUXC_MSCR_OBE_SHIFT                              (21UL)

#define IOMUXC_MSCR_ODE_MASK                               (0x01UL)
#define IOMUXC_MSCR_ODE_SHIFT                              (20UL)

#define IOMUXC_MSCR_IBE_MASK                               (0x01UL)
#define IOMUXC_MSCR_IBE_SHIFT                              (19UL)

#define IOMUXC_MSCR_SLP_MASK                               (0x01UL)
#define IOMUXC_MSCR_SLP_SHIFT                              (18UL)

#define IOMUXC_MSCR_INV_MASK                               (0x01UL)
#define IOMUXC_MSCR_INV_SHIFT                              (17UL)

#define IOMUXC_MSCR_SRE_MASK                               (0x07UL)
#define IOMUXC_MSCR_SRE_SHIFT                              (14UL)

#define IOMUXC_MSCR_PUE_MASK                               (0x01UL)
#define IOMUXC_MSCR_PUE_SHIFT                              (13UL)

#define IOMUXC_MSCR_PUS_MASK                               (0x01UL)
#define IOMUXC_MSCR_PUS_SHIFT                              (12UL)

#define IOMUXC_MSCR_DSE_MASK                               (0x01UL)
#define IOMUXC_MSCR_DSE_SHIFT                              (11UL)

#define IOMUXC_MSCR_RCVR_MASK                              (0x01UL)
#define IOMUXC_MSCR_RCVR_SHIFT                             (10UL)

#define IOMUXC_MSCR_SMC_MASK                               (0x01UL)
#define IOMUXC_MSCR_SMC_SHIFT                              (5UL)

#define MSCR_SETTINGS(obe, ode, ibe, slp, inv, sre, pue, pus, dse, rcvr, smc)   \
    (uint32_t)(((obe) & IOMUXC_MSCR_OBE_MASK) << IOMUXC_MSCR_OBE_SHIFT) |   \
    (uint32_t)(((ode) & IOMUXC_MSCR_ODE_MASK) << IOMUXC_MSCR_ODE_SHIFT) |   \
    (uint32_t)(((ibe) & IOMUXC_MSCR_IBE_MASK) << IOMUXC_MSCR_IBE_SHIFT) |   \
    (uint32_t)(((slp) & IOMUXC_MSCR_SLP_MASK) << IOMUXC_MSCR_SLP_SHIFT) |   \
    (uint32_t)(((inv) & IOMUXC_MSCR_INV_MASK) << IOMUXC_MSCR_INV_SHIFT) |   \
    (uint32_t)(((sre) & IOMUXC_MSCR_SRE_MASK) << IOMUXC_MSCR_SRE_SHIFT) |   \
    (uint32_t)(((pue) & IOMUXC_MSCR_PUE_MASK) << IOMUXC_MSCR_PUE_SHIFT) |   \
    (uint32_t)(((pus) & IOMUXC_MSCR_PUS_MASK) << IOMUXC_MSCR_PUS_SHIFT) |   \
    (uint32_t)(((dse) & IOMUXC_MSCR_DSE_MASK) << IOMUXC_MSCR_DSE_SHIFT) |   \
    (uint32_t)(((rcvr)& IOMUXC_MSCR_RCVR_MASK)<< IOMUXC_MSCR_RCVR_SHIFT)|   \
    (uint32_t)(((smc) & IOMUXC_MSCR_SMC_MASK) << IOMUXC_MSCR_SMC_SHIFT)

#define SIUL2_BASE_ADDR                                     (0x4009C000UL)
#define WRITE_SIUL2_MSCR(pin_no,value)                      (*(uint32_t*)(SIUL2_BASE_ADDR + (0x240UL + (4UL * (pin_no)))) = (value))

#define LINFLEX_TXD_PAD_VAL                                 (MSCR_SETTINGS(1UL, 0UL, 0UL, 0UL, 0UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL))
#define LINFLEX_RXD_PAD_VAL                                 (MSCR_SETTINGS(0UL, 0UL, 1UL, 0UL, 0UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL))

/* LINFLEX0 TX*/
#define LINFLEX_0_TXD_PAD                                   (41U)   /* PC9_PAD_VALUE */
#define LINFLEX_0_TXD_MSCR_SSS_VAL                          (1UL)   /* PC9_MSCR_SSS_LINTX_PAD_VAL */
/* LINFLEX0 RX*/
#define LINFLEX_0_RXD_PAD                                   (42U)   /* PC10_PAD_VALUE */
#define LINFLEX_0_RXD_MSCR_VAL                              (512UL) /* PC10_MSCR_LINFLEX_PAD_VAL */
#define LINFLEX_0_RXD_MSCR_SSS_VAL                          (2UL)   /* PC10_MSCR_SSS_LINRX_PAD_VAL */

#if defined (__GNUC__)
#define NOP() __asm volatile ("nop")
#else
#define NOP() __asm("nop")
#endif

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *  ==============================================================================================*/

static const uint32_t baudRate[] = {
    9600UL,
    19200UL,
    38400UL,
    57600UL,
    115200UL,
    256000UL
};

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

/* Configuring MSCR pins for Linflex_0 */
static void Linflex_ConfigurePins(void)
{
    WRITE_SIUL2_MSCR(LINFLEX_0_TXD_PAD, (LINFLEX_TXD_PAD_VAL | LINFLEX_0_TXD_MSCR_SSS_VAL));
    WRITE_SIUL2_MSCR(LINFLEX_0_RXD_PAD, LINFLEX_RXD_PAD_VAL);
    WRITE_SIUL2_MSCR(LINFLEX_0_RXD_MSCR_VAL, LINFLEX_0_RXD_MSCR_SSS_VAL);
}

/* Setting the baud rate registers */
static void Linflex_SetSpeed(uint32_t baudrate)
{
    uint32_t mantissa;
    uint32_t fraction;
    uint32_t numerator;

    /* Baudrate =      LIN_BAUD_CLK
     *            --------------------
     *                    16 * LDIV
     */
    numerator = (LIN_BAUD_CLK * 1000UL * 1000UL) / 16UL; /* Freq In Hz */
    mantissa = numerator / baudrate;

    /* As fraction is in the format of 1/16 */
    fraction = numerator * 16UL / baudrate - mantissa * 16UL;

    LINFLEXD_0.LINIBRR.R = mantissa;
    LINFLEXD_0.LINFBRR.B.FBR = fraction;
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *  ==============================================================================================*/


/********************************************************************
 *	UART_0
 ********************************************************************/
char uart_0_getchar (char *ch)
{
    /* Wait for the reception to complete */
    if (!LINFLEXD_0.UARTSR.B.DRFRFE)
       return 0;

    while (LINFLEXD_0.UARTSR.B.RMB == 0)
        ;

    /* Retrieve data received from LinFlex */
    *ch = (vuint8_t) LINFLEXD_0.BDRM.R;

    /* Clear RMB (Release Message Buffer) and DRF (Data Reception Completed) */
    /* flags, which are set when receiving data in UART mode */

    LINFLEXD_0.UARTSR.B.RMB = 1;
    LINFLEXD_0.UARTSR.B.DRFRFE = 1;

    return 1;
}

/********************************************************************/
void uart_0_putchar (char ch)
{
    LINFLEXD_0.UARTCR.B.TXEN = 1;
    LINFLEXD_0.BDRL.B.DATA0 = ch;       /* Start transmission by writing the data  */

    /* Wait for the transmission to complete */
    while (LINFLEXD_0.UARTSR.B.DTFTFF == 0)
        NOP();

    LINFLEXD_0.UARTSR.B.DTFTFF = 1;    /* clear the transmission completed flag	 */
    LINFLEXD_0.UARTCR.B.TXEN = 0;      /* Disable transmission */
}
/********************************************************************/

void uart_txstr(char *str, uint32_t len)
{
    /* Variables for loop and string length */
    uint32_t i = 0;

    if(! len)
        while(*(str + (len++)));

    /* Loop for each char in string */
    for (i = 0; i < len; ++i)
        /* Send Char in str[i] */
        uart_0_putchar(str[i]);
}

/*********************************************************
*	Initialise serial port for tb_printf using LINFLexD_0
*	No par / 8 data bits / 1 stop bit
*********************************************************/
void UART_init(void)
{
    /* Configure pins */
    Linflex_ConfigurePins();

    /* Enter initialization mode by setting INIT bit */
    LINFLEXD_0.LINCR1.B.SLEEP = 0x0;     /* Disable sleep mode sp */
    LINFLEXD_0.LINCR1.R = 0x1;
    LINFLEXD_0.UARTCR.B.UART = 0x1;      /* Linflex working in UART mode */
    LINFLEXD_0.UARTCR.B.TDFL_TFC = 0x0;  /* Buffer size = 1 sp */
    LINFLEXD_0.UARTCR.B.RDFL_RFC = 0x0;  /* Buffer size = 1 sp */
    LINFLEXD_0.UARTCR.B.TXEN = 0x1;      /* Enable transmission of data now */
    LINFLEXD_0.UARTCR.B.RXEN = 0x1;      /* Receiver enabled */
    LINFLEXD_0.UARTCR.B.WL0 = 0x1;       /* 8 bit data */
    LINFLEXD_0.UARTCR.B.PCE = 0x0;       /* No parity */

    /* Disable interrupts */
    LINFLEXD_0.LINIER.B.DRIE = 0x0;      /* data reception complete interrupt disabled sp */
    LINFLEXD_0.LINIER.B.DTIE = 0x0;      /* data transmission complete interrupt disabled sp */

    /* Set the baud rate (default - 115200) */
    Linflex_SetSpeed(baudRate[UART_BAUDRATE]);

    /* Leave initialization mode by clearing INIT bit */
    LINFLEXD_0.LINCR1.R = 0x0;
}

#ifdef __cplusplus
}
#endif

/** @} */
