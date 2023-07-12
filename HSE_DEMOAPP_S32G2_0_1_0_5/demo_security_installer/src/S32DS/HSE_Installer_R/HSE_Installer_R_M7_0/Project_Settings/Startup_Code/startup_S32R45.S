/* ---------------------------------------------------------------------------------------*/
/*  @file:    startup_S32R45.s                                                            */
/*  @purpose: GNU Compiler Collection Startup File                                        */
/*            S32R45                                                                      */
/*  @version: 1.0                                                                         */
/*  @date:    2019-06-12                                                                  */
/*  @build:   b190612                                                                     */
/* ---------------------------------------------------------------------------------------*/
/*                                                                                        */
/* Copyright 2019-2020 NXP                                                                */
/* All rights reserved.                                                                   */
/*                                                                                        */
/* NXP Confidential.This software is owned or controlled by NXP and may only be           */
/* used strictly in accordance with the applicable license terms. By expressly            */
/* accepting such terms or by downloading, installing, activating and/or otherwise        */
/* using the software, you are agreeing that you have read, and that you agree to         */
/* comply with and are bound by, such license terms. If you do not agree to be            */
/* bound by the applicable license terms, then you may not retain, install,               */
/* activate or otherwise use the software. The production use license in                  */
/* Section 2.3 is expressly granted for this software.                                    */
/*****************************************************************************/
/* Version: GNU Compiler Collection                                          */
/* Implements : Startup_file_Class                                           */
/*****************************************************************************/
    .syntax unified
    .arch armv7-m

    .section .isr_vector, "a"
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                                      /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler */
    .long   HardFault_Handler                               /* Hard Fault Handler */
    .long   MemManage_Handler                               /* MPU Fault Handler */
    .long   BusFault_Handler                                /* Bus Fault Handler */
    .long   UsageFault_Handler                              /* Usage Fault Handler */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   SVC_Handler                                     /* SVCall Handler */
    .long   DebugMon_Handler                                /* Debug Monitor Handler */
    .long   0                                               /* Reserved */
    .long   PendSV_Handler                                  /* PendSV Handler */
    .long   SysTick_Handler                                 /* SysTick Handler */

    /* External Interrupts*/
    .long   PCIE_1_MSI_IRQHandler                           /* 0 PCIe_1 MSI interrupt to M7/A53 */
    .long   INT0_IRQHandler                                 /* 1 Software generated CPU interrupt to A53 core - interrupt#0 */
    .long   INT1_IRQHandler                                 /* 2 Software generated CPU interrupt to A53 core - interrupt#1 */
    .long   INT2_IRQHandler                                 /* 3 Software generated CPU interrupt to A53 core - interrupt#2 */
    .long   PCIE_0_MSI_IRQHandler                           /* 4 PCIe_0 MSI interrupt to M7/A53 */
    .long   CTI0_IRQHandler                                 /* 5 M7-only: CTI interrupt[0] */
    .long   CTI1_IRQHandler                                 /* 6 M7-only: CTI interrupt[1] */
    .long   MCM_IRQHandler                                  /* 7 Cortex M7 interrupt for FPU events and TCM errors */
    .long   DMA0_Ch0_Ch15_IRQHandler                        /* 8 eDMA0 - DMA interrupt CH0-15 */
    .long   DMA0_Ch16_Ch31_IRQHandler                       /* 9 eDMA0 - DMA interrupt CH16-31 */
    .long   DMA0_Ch0_Ch31_Error_IRQHandler                  /* 10 eDMA0 - DMA error interrupt */
    .long   DMA1_Ch0_Ch15_IRQHandler                        /* 11 eDMA1 - DMA interrupt  CH0-15 */
    .long   DMA1_Ch16_Ch31_IRQHandler                       /* 12 eDMA1 - DMA interrupt CH0-15 */
    .long   DMA1_Ch0_Ch31_Error_IRQHandler                  /* 13 eDMA1 - DMA error interrupt */
    .long   SWT0_IRQHandler                                 /* 14 Watchdog timer interrupt */
    .long   SWT1_IRQHandler                                 /* 15 Watchdog timer interrupt */
    .long   SWT2_IRQHandler                                 /* 16 Watchdog timer interrupt */
    .long   SWT3_IRQHandler                                 /* 17 Watchdog timer interrupt */
    .long   SWT4_IRQHandler                                 /* 18 Watchdog timer interrupt */
    .long   SWT5_IRQHandler                                 /* 19 Watchdog timer interrupt */
    .long   SWT6_IRQHandler                                 /* 20 Watchdog timer interrupt */
    .long   SWT7_IRQHandler                                 /* 21 Watchdog timer interrupt */
    .long   DefaultISR                                      /* 22 */
    .long   DefaultISR                                      /* 23 */
    .long   STM0_IRQHandler                                 /* 24 STM0 interrupt channel request 0, 1, 2, 3 */
    .long   STM1_IRQHandler                                 /* 25 STM1 interrupt channel request 0, 1, 2, 3 */
    .long   STM2_IRQHandler                                 /* 26 STM2 interrupt channel request 0, 1, 2, 3 */
    .long   STM3_IRQHandler                                 /* 27 STM3 interrupt channel request 0, 1, 2, 3 */
    .long   STM4_IRQHandler                                 /* 28 STM4 interrupt channel request 0, 1, 2, 3 */
    .long   STM5_IRQHandler                                 /* 29 STM5 interrupt channel request 0, 1, 2, 3 */
    .long   STM6_IRQHandler                                 /* 30 STM6 interrupt channel request 0, 1, 2, 3 */
    .long   STM7_IRQHandler                                 /* 31 STM7 interrupt channel request 0, 1, 2, 3 */
    .long   QUADSPI_Ored_IRQHandler                         /* 32 Quad Serial Peripheral Interface Rx Buffer Drain Interrupt */
    .long   QUADSPI_FlashA_IRQHandler                       /* 33 Quad Serial Peripheral Interface Tx Buffer Fill Interrupt */
    .long   QUADSPI_FlashB_IRQHandler                       /* 34 Quad Serial Peripheral Interface Buffer Overflow/ Underrun Error Interrupt */
    .long   STCU2_IRQHandler                                /* 35 LBIST + MBIST IRQ */
    .long   USDHC_IRQHandler                                /* 36 uSDHC Interrupt */
    .long   CAN0_ORED_IRQHandler                            /* 37 CAN0 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN0_ERR_IRQHandler                             /* 38 CAN0 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN0_ORED_0_7_MB_IRQHandler                     /* 39 CAN0 OR'ed Message buffer (0-7) */
    .long   CAN0_ORED_8_127_MB_IRQHandler                   /* 40 CAN0 OR'ed Message buffer (8-127) */
    .long   CAN1_ORED_IRQHandler                            /* 41 CAN1 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN1_ERR_IRQHandler                             /* 42 CAN1 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN1_ORED_0_7_MB_IRQHandler                     /* 43 CAN1 OR'ed Message buffer (0-7) */
    .long   CAN1_ORED_8_127_MB_IRQHandler                   /* 44 CAN1 OR'ed Message buffer (8-127) */
    .long   CAN2_ORED_IRQHandler                            /* 45 CAN2 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN2_ERR_IRQHandler                             /* 46 CAN2 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN2_ORED_0_7_MB_IRQHandler                     /* 47 CAN2 OR'ed Message buffer (0-7) */
    .long   CAN2_ORED_8_127_MB_IRQHandler                   /* 48 CAN2 OR'ed Message buffer (8-127) */
    .long   CAN3_ORED_IRQHandler                            /* 49 CAN3 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN3_ERR_IRQHandler                             /* 50 CAN3 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN3_ORED_0_7_MB_IRQHandler                     /* 51 CAN3 OR'ed Message buffer (0-7) */
    .long   CAN3_ORED_8_127_MB_IRQHandler                   /* 52 CAN3 OR'ed Message buffer (8-127) */
    .long   PIT0_IRQHandler                                 /* 53 PIT0 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, 6 */
    .long   PIT1_IRQHandler                                 /* 54 PIT1 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5 */
    .long   FTM0_IRQHandler                                 /* 55 FTM0 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
    .long   FTM1_IRQHandler                                 /* 56 FTM1 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
    .long   GMAC0_Common_IRQHandler                         /* 57 Gigabit ENET MAC Common Interrupt */
    .long   GMAC0_CH0_TX_IRQHandler                         /* 58 Gigabit ENET MAC Channel0 Tx Interrupt */
    .long   GMAC0_CH0_RX_IRQHandler                         /* 59 Gigabit ENET MAC Channel0 Rx Interrupt */
    .long   GMAC0_CH1_TX_IRQHandler                         /* 60 Gigabit ENET MAC Channel1 Tx Interrupt */
    .long   GMAC0_CH1_RX_IRQHandler                         /* 61 Gigabit ENET MAC Channel1 Rx Interrupt */
    .long   GMAC0_CH2_TX_IRQHandler                         /* 62 Gigabit ENET MAC Channel2 Tx Interrupt */
    .long   GMAC0_CH2_RX_IRQHandler                         /* 63 Gigabit ENET MAC Channel2 Rx Interrupt */
    .long   GMAC0_CH3_TX_IRQHandler                         /* 64 Gigabit ENET MAC Channel3 Tx Interrupt */
    .long   GMAC0_CH3_RX_IRQHandler                         /* 65 Gigabit ENET MAC Channel3 Rx Interrupt */
    .long   GMAC0_CH4_TX_IRQHandler                         /* 66 Gigabit ENET MAC Channel4 Tx Interrupt */
    .long   GMAC0_CH4_RX_IRQHandler                         /* 67 Gigabit ENET MAC Channel4 Rx Interrupt */
    .long   DefaultISR                                      /* 68 */
    .long   DefaultISR                                      /* 69 */
    .long   SARADC0_IRQHandler                              /* 70 SARADC0 EOC + ERR + Watchdog Interrupt */
    .long   SARADC1_IRQHandler                              /* 71 SARADC1 EOC + ERR + Watchdog Interrupt */
    .long   FR_NCERR_IRQHandler                             /* 72 FLEXRAY0 LRAM & DRAM Non-Corrected Error interrupt */
    .long   FR_CERR_IRQHandler                              /* 73 FLEXRAY0 LRAM & DRAM Corrected Error interrupt */
    .long   FR_Ch0_Rx_FIFO_IRQHandler                       /* 74 FLEXRAY0 Receive FIFO channel A not empty interrupt */
    .long   FR_Ch1_Rx_FIFO_IRQHandler                       /* 75 FLEXRAY0 Receive FIFO channel B not empty interrupt */
    .long   FR_WKUP_IRQHandler                              /* 76 FLEXRAY0 Wakeup interrupt */
    .long   FR_Status_IRQHandler                            /* 77 FLEXRAY0 Combined protocol status and error interrupt */
    .long   FR_CMBERR_IRQHandler                            /* 78 FLEXRAY0 Combined CHI error interrupt */
    .long   FR_Tx_BUFF_IRQHandler                           /* 79 FLEXRAY0 Combined transmit message buffer interrupt */
    .long   FR_Rx_BUFF_IRQHandler                           /* 80 FLEXRAY0 Combined receive message buffer interrupt */
    .long   FR_MODULE_IRQHandler                            /* 81 FLEXRAY0 Combined module interrupt */
    .long   LINFLEXD0_IRQHandler                            /* 82 LINFLEXD0 Internal all interrupt request */
    .long   LINFLEXD1_IRQHandler                            /* 83 LINFLEXD1 Internal all interrupt request */
    .long   DefaultISR                                      /* 84 */
    .long   SPI0_IRQHandler                                 /* 85 SPI0 OR'ed DSPI Global Interrupt */
    .long   SPI1_IRQHandler                                 /* 86 SPI1 OR'ed DSPI Global Interrupt */
    .long   SPI2_IRQHandler                                 /* 87 SPI2 OR'ed DSPI Global Interrupt */
    .long   SPI3_IRQHandler                                 /* 88 SPI3 OR'ed DSPI Global Interrupt */
    .long   SPI4_IRQHandler                                 /* 89 SPI4 OR'ed DSPI Global Interrupt */
    .long   SPI5_IRQHandler                                 /* 90 SPI5 OR'ed DSPI Global Interrupt */
    .long   DefaultISR                                      /* 91 */
    .long   I2C0_IRQHandler                                 /* 92 I2C0 Interrupt Request */
    .long   I2C1_IRQHandler                                 /* 93 I2C1 Interrupt Request */
    .long   DefaultISR                                      /* 94 */
    .long   DefaultISR                                      /* 95 */
    .long   DefaultISR                                      /* 96 */
    .long   DefaultISR                                      /* 97 */
    .long   MC_RGM_IRQHandler                               /* 98 MC_RGM Interrupt Request to System */
    .long   DefaultISR                                      /* 99 */
    .long   FCCU_ALARM_IRQHandler                           /* 100 FCCU Interrupt request (ALARM state) */
    .long   FCCU_MISC_IRQHandler                            /* 101 FCCU Interrupt request (miscellaneous conditions) */
    .long   SBSW_IRQHandler                                 /* 102 SBSW Interrupt triggered by writing to the TMWDP CONFG_ADDR Register */
    .long   HSE_MU0_Tx_IRQHandler                           /* 103 HSE Ored tx interrupt to MU-0 */
    .long   HSE_MU0_Rx_IRQHandler                           /* 104 HSE Ored rx interrupt to MU-0 */
    .long   HSE_MU0_Ored_IRQHandler                         /* 105 HSE Ored general purpose interrupt request to MU-0 */
    .long   HSE_MU1_Tx_IRQHandler                           /* 106 HSE Ored tx interrupt to MU-1 */
    .long   HSE_MU1_Rx_IRQHandler                           /* 107 HSE Ored rx interrupt to MU-1 */
    .long   HSE_MU1_Ored_IRQHandler                         /* 108 HSE Ored general purpose interrupt request to MU-1 */
    .long   HSE_MU2_Tx_IRQHandler                           /* 109 HSE Ored tx interrupt to MU-2 */
    .long   HSE_MU2_Rx_IRQHandler                           /* 110 HSE Ored rx interrupt to MU-2 */
    .long   HSE_MU2_Ored_IRQHandler                         /* 111 HSE Ored general purpose interrupt request to MU-2 */
    .long   HSE_MU3_Tx_IRQHandler                           /* 112 HSE Ored tx interrupt to MU-3 */
    .long   HSE_MU3_Rx_IRQHandler                           /* 113 HSE Ored rx interrupt to MU-3 */
    .long   HSE_MU3_Ored_IRQHandler                         /* 114 HSE Ored general purpose interrupt request to MU-3 */
    .long   DDR0_SCRUB_IRQHandler                           /* 115 DDR0 Scrubber interrupt indicating one full address range sweep */
    .long   DDR0_PHY_IRQHandler                             /* 116 DDR0 PHY address decoding error inside DDR SS, PHY interrupt */
    .long   CTU_FIFO_IRQHandler                             /* 117 CTU FIFO0 | FIFO1 | FIFO2 | FIFO3 Full or Empty or Overflow or Overrun */
    .long   CTU_TRIG_IRQHandler                             /* 118 CTU Master reload, Trigger 0-7, ADC cmd */
    .long   CTU_ERR_IRQHandler                              /* 119 CTU Error interrupt */
    .long   TMU_IRQHandler                                  /* 120 TMU Level sensitive temperature alarm interrupt | Level sensitive critical temperature alarm interrupt */
    .long   DefaultISR                                      /* 121 */
    .long   DefaultISR                                      /* 122 */
    .long   SERDES0_DMA_IRQHandler                          /* 123 SERDES0 Logical OR of PCIe DMA interrupts */
    .long   SERDES0_LINK_IRQHandler                         /* 124 SERDES0 Link request status interrupt */
    .long   SERDES0_DSP_IRQHandler                          /* 125 SERDES0 DSP AXI MSI Interrupt Detected */
    .long   DefaultISR                                      /* 126 */
    .long   DefaultISR                                      /* 127 */
    .long   DefaultISR                                      /* 128 */
    .long   DefaultISR                                      /* 129 */
    .long   DefaultISR                                      /* 130 */
    .long   DefaultISR                                      /* 131 */
    .long   DefaultISR                                      /* 132 */
    .long   DefaultISR                                      /* 133 */
    .long   DefaultISR                                      /* 134 */
    .long   DefaultISR                                      /* 135 */
    .long   DefaultISR                                      /* 136 */
    .long   DefaultISR                                      /* 137 */
    .long   DefaultISR                                      /* 138 */
    .long   DefaultISR                                      /* 139 */
    .long   DefaultISR                                      /* 140 */
    .long   DefaultISR                                      /* 141 */
    .long   DefaultISR                                      /* 142 */
    .long   DefaultISR                                      /* 143 */
    .long   DefaultISR                                      /* 144 */
    .long   DefaultISR                                      /* 145 */
    .long   DefaultISR                                      /* 146 */
    .long   DefaultISR                                      /* 147 */
    .long   DefaultISR                                      /* 148 */
    .long   DefaultISR                                      /* 149 */
    .long   DefaultISR                                      /* 150 */
    .long   DefaultISR                                      /* 151 */
    .long   DefaultISR                                      /* 152 */
    .long   DefaultISR                                      /* 153 */
    .long   DefaultISR                                      /* 154 */
    .long   DefaultISR                                      /* 155 */
    .long   DefaultISR                                      /* 156 */
    .long   DefaultISR                                      /* 157 */
    .long   DefaultISR                                      /* 158 */
    .long   DefaultISR                                      /* 159 */
    .long   DefaultISR                                      /* 160 */
    .long   DefaultISR                                      /* 161 */
    .long   DefaultISR                                      /* 162 */
    .long   DefaultISR                                      /* 163 */
    .long   DefaultISR                                      /* 164 */
    .long   DefaultISR                                      /* 165 */
    .long   DefaultISR                                      /* 166 */
    .long   DefaultISR                                      /* 167 */
    .long   DefaultISR                                      /* 168 */
    .long   DefaultISR                                      /* 169 */
    .long   FastDMA_TC_IRQHandler                           /* 170 FastDMA Transfer Complete */
    .long   FastDMA_ERR_IRQHandler                          /* 171 FastDMA error | CRC error */
    .long   MIPICSI2_0_INT0_IRQHandler                      /* 172 MIPI-CSI2_0 - Reports errors in the receive path */
    .long   MIPICSI2_0_INT1_IRQHandler                      /* 173 MIPI-CSI2_0 - Protocol and Packet Level Error Reporting */
    .long   MIPICSI2_0_INT2_IRQHandler                      /* 174 MIPI-CSI2_0 - Receive path errors like line length error */
    .long   MIPICSI2_0_INT3_IRQHandler                      /* 175 MIPI-CSI2_0 - Turnaround and Transmit related Errors and Events */
    .long   MIPICSI2_1_INT0_IRQHandler                      /* 176 MIPI-CSI2_1 - Reports errors in the receive path */
    .long   MIPICSI2_1_INT1_IRQHandler                      /* 177 MIPI-CSI2_1 - Protocol and Packet Level Error Reporting */
    .long   MIPICSI2_1_INT2_IRQHandler                      /* 178 MIPI-CSI2_1 - Receive path errors like line length error */
    .long   MIPICSI2_1_INT3_IRQHandler                      /* 179 MIPI-CSI2_1 - Turnaround and Transmit related Errors and Events */
    .long   MIPICSI2_2_INT0_IRQHandler                      /* 180 MIPI-CSI2_2 - Reports errors in the receive path */
    .long   MIPICSI2_2_INT1_IRQHandler                      /* 181 MIPI-CSI2_2 - Protocol and Packet Level Error Reporting */
    .long   MIPICSI2_2_INT2_IRQHandler                      /* 182 MIPI-CSI2_2 - Receive path errors like line length error */
    .long   MIPICSI2_2_INT3_IRQHandler                      /* 183 MIPI-CSI2_2 - Turnaround and Transmit related Errors and Events */
    .long   MIPICSI2_3_INT0_IRQHandler                      /* 184 MIPI-CSI2_3 - Reports errors in the receive path */
    .long   MIPICSI2_3_INT1_IRQHandler                      /* 185 MIPI-CSI2_3 - Protocol and Packet Level Error Reporting */
    .long   MIPICSI2_3_INT2_IRQHandler                      /* 186 MIPI-CSI2_3 - Receive path errors like line length error */
    .long   MIPICSI2_3_INT3_IRQHandler                      /* 187 MIPI-CSI2_3 - Turnaround and Transmit related Errors and Events */
    .long   SPT_DSP_ERR_IRQHandler                          /* 188 DSP error interrupt */
    .long   SPT_EVENT_IRQHandler                            /* 189 SPT Event IRQ */
    .long   SPT_ESC_IRQHandler                              /* 190 ECS IRQ */
    .long   SPT_DMA_COMPL_IRQHandler                        /* 191 Interrupt on DMA completion */
    .long   CAN4_ORED_IRQHandler                            /* 192 CAN4 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN4_ERR_IRQHandler                             /* 193 CAN4 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN4_ORED_0_7_MB_IRQHandler                     /* 194 CAN4 OR'ed Message buffer (0-7) */
    .long   CAN4_ORED_8_127_MB_IRQHandler                   /* 195 CAN4 OR'ed Message buffer (8-127) */
    .long   CAN5_ORED_IRQHandler                            /* 196 CAN5 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN5_ERR_IRQHandler                             /* 197 CAN5 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN5_ORED_0_7_MB_IRQHandler                     /* 198 CAN5 OR'ed Message buffer (0-7) */
    .long   CAN5_ORED_8_127_MB_IRQHandler                   /* 199 CAN5 OR'ed Message buffer (8-127) */
    .long   CAN6_ORED_IRQHandler                            /* 200 CAN6 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN6_ERR_IRQHandler                             /* 201 CAN6 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN6_ORED_0_7_MB_IRQHandler                     /* 202 CAN6 OR'ed Message buffer (0-7) */
    .long   CAN6_ORED_8_127_MB_IRQHandler                   /* 203 CAN6 OR'ed Message buffer (8-127) */
    .long   CAN7_ORED_IRQHandler                            /* 204 CAN7 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN7_ERR_IRQHandler                             /* 205 CAN7 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN7_ORED_0_7_MB_IRQHandler                     /* 206 CAN7 OR'ed Message buffer (0-7) */
    .long   CAN7_ORED_8_127_MB_IRQHandler                   /* 207 CAN7 OR'ed Message buffer (8-127) */
    .long   SERDES1_ORED_DMA_IRQHandler                     /* 208 SERDES1 Logical OR of PCIe DMA interrupts */
    .long   SERDES1_STAT_IRQHandler                         /* 209 SERDES1 Link request status interrupt */
    .long   SERDES1_AXI_MSI_IRQHandler                      /* 210 SERDES1 DSP AXI MSI Interrupt Detected */
    .long   SERDES1_PHY_LDOWN_IRQHandler                    /* 211 SERDES1 PHY link down interrupt */
    .long   SERDES1_PHY_LUP_IRQHandler                      /* 212 SERDES1 PHY link up interrupt */
    .long   SERDES1_INTA_IRQHandler                         /* 213 SERDES1 Interrupt indicating INTA message received */
    .long   SERDES1_INTB_IRQHandler                         /* 214 SERDES1 Interrupt indicating INTB message received */
    .long   SERDES1_INTC_IRQHandler                         /* 215 SERDES1 Interrupt indicating INTC message received */
    .long   SERDES1_INTD_IRQHandler                         /* 216 SERDES1 Interrupt indicating INTD message received */
    .long   SERDES1_MISC_IRQHandler                         /* 217 SERDES1 Miscellaneous interrupt generated by PCIe Subsystem */
    .long   SERDES1_PCS_IRQHandler                          /* 218 SERDES1 PCS interrupt */
    .long   SERDES1_TLP_IRQHandler                          /* 219 SERDES1 TLP request has not completed within the expected time window */
    .long   GMAC1_Common_IRQHandler                         /* 220 Gigabit ENET MAC Common Interrupt */
    .long   GMAC1_CH0_TX_IRQHandler                         /* 221 Gigabit ENET MAC Channel0 Tx Interrupt */
    .long   GMAC1_CH0_RX_IRQHandler                         /* 222 Gigabit ENET MAC Channel0 Rx Interrupt */
    .long   GMAC1_CH1_TX_IRQHandler                         /* 223 Gigabit ENET MAC Channel1 Tx Interrupt */
    .long   GMAC1_CH1_RX_IRQHandler                         /* 224 Gigabit ENET MAC Channel1 Rx Interrupt */
    .long   GMAC1_CH2_TX_IRQHandler                         /* 225 Gigabit ENET MAC Channel2 Tx Interrupt */
    .long   GMAC1_CH2_RX_IRQHandler                         /* 226 Gigabit ENET MAC Channel2 Rx Interrupt */
    .long   GMAC1_CH3_TX_IRQHandler                         /* 227 Gigabit ENET MAC Channel3 Tx Interrupt */
    .long   GMAC1_CH3_RX_IRQHandler                         /* 228 Gigabit ENET MAC Channel3 Rx Interrupt */
    .long   GMAC1_CH4_TX_IRQHandler                         /* 229 Gigabit ENET MAC Channel4 Tx Interrupt */
    .long   GMAC1_CH4_RX_IRQHandler                         /* 230 Gigabit ENET MAC Channel4 Rx Interrupt */
    .long   CTE_INT_IRQHandler                              /* 231 CTE Interrupt signal becomes high on the rising edge of the event defined in the interrupt status register at 0x0224 */
    .long   LAX1_ERR_IRQHandler                             /* 232 LAX1 LAX_DMA_ERR or VCPU_IIT interrupt */
    .long   LAX0_ERR_IRQHandler                             /* 233 LAX0 LAX_DMA_ERR or VCPU_IIT interrupt */
    .long   LAX0_ORED_FUNC_IRQHandler                       /* 234 LAX0 Ored Functional Interrupt */
    .long   LAX0_SOFT_INT_IRQHandler                        /* 235 LAX0 VSPA Software Interrupt 0, VSPA Software Interrupt 1 */
    .long   DefaultISR                                      /* 236 */
    .long   SIUL2_1_INT_IRQHandler                          /* 237 SIUL2_1 External Interrupt Vector 0, External Interrupt Vector 1, External Interrupt Vector 2, External Interrupt Vector 3 */
    .long   LAX1_ORED_FUNC_IRQHandler                       /* 238 LAX1 Ored Functional Interrupt */

    .size    __isr_vector, . - __isr_vector

/* Init table */
    .section .init_table, "a"
    .long 5
    .long __VECTOR_TABLE
    .long __VECTOR_RAM
    .long __VECTOR_TABLE_COPY_END
    .long __CUSTOM_ROM
    .long __CUSTOM_RAM
    .long __CUSTOM_END
    .long __DATA_NON_CACHEABLE_ROM
    .long __DATA_NON_CACHEABLE_RAM
    .long __DATA_NON_CACHEABLE_END
    .long __DATA_ROM
    .long __DATA_RAM
    .long __DATA_END
    .long __CODE_ROM
    .long __CODE_RAM
    .long __CODE_END
/* Zero table */
    .section .zero_table, "a"
    .long 2
    .long __BSS_NON_CACHEABLE_START
    .long __BSS_NON_CACHEABLE_END
    .long __BSS_START
    .long __BSS_END

    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */

    /* Init the rest of the registers */
    ldr     r1,=0
    ldr     r2,=0
    ldr     r3,=0
    ldr     r4,=0
    ldr     r5,=0
    ldr     r6,=0
    ldr     r7,=0
    mov     r8,r7
    mov     r9,r7
    mov     r10,r7
    mov     r11,r7
    mov     r12,r7

    /* Initialize the stack pointer */
    ldr     r0,=__StackTop
    mov     r13,r0

    /* Init DTCM */
    ldr r11, =0xE000EF94
    ldr r0, [r11]
    orr r0, r0, #0x1
    str r0, [r11]


    /* Clear DTCM */
    ldr     r1, =__m_dtcm_start
    ldr     r2, =__m_dtcm_end
    bl      .ClearMEM_Init

    /* Clear Stack */
    ldr     r1, =__StackLimit
    ldr     r2, =__StackTop
    bl      .ClearMEM_Init

#ifndef __NO_SYSTEM_INIT
    /* Call the system init routine */
    ldr     r0,=SystemInit
    blx     r0
#endif

    /* Init .data and .bss sections */
    //ldr     r0,=init_data_bss
    //blx     r0
    cpsie   i               /* Unmask interrupts */
    bl      main
JumpToSelf:
    b       JumpToSelf

    .pool
    .size Reset_Handler, . - Reset_Handler

    .text
    .thumb_func
    .align 2
    /* Function for MEM clear, r1 = base addr, r2 = limit address */
.ClearMEM_Init:
  /* Clear MEM */
    mov   r0, 0 
.ClearMEM:
    str r0, [r1]
    add r1, r1, #4
    cmp r1, r2
    bcc .ClearMEM
    bx lr

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b       DefaultISR
    .size DefaultISR, . - DefaultISR

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler	handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    NMI_Handler
    def_irq_handler    HardFault_Handler
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    SVC_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    PendSV_Handler
    def_irq_handler    SysTick_Handler
    def_irq_handler    PCIE_1_MSI_IRQHandler
    def_irq_handler    INT0_IRQHandler
    def_irq_handler    INT1_IRQHandler
    def_irq_handler    INT2_IRQHandler
    def_irq_handler    PCIE_0_MSI_IRQHandler
    def_irq_handler    CTI0_IRQHandler
    def_irq_handler    CTI1_IRQHandler
    def_irq_handler    MCM_IRQHandler
    def_irq_handler    DMA0_Ch0_Ch15_IRQHandler
    def_irq_handler    DMA0_Ch16_Ch31_IRQHandler
    def_irq_handler    DMA0_Ch0_Ch31_Error_IRQHandler
    def_irq_handler    DMA1_Ch0_Ch15_IRQHandler
    def_irq_handler    DMA1_Ch16_Ch31_IRQHandler
    def_irq_handler    DMA1_Ch0_Ch31_Error_IRQHandler
    def_irq_handler    SWT0_IRQHandler
    def_irq_handler    SWT1_IRQHandler
    def_irq_handler    SWT2_IRQHandler
    def_irq_handler    SWT3_IRQHandler
    def_irq_handler    SWT4_IRQHandler
    def_irq_handler    SWT5_IRQHandler
    def_irq_handler    SWT6_IRQHandler
    def_irq_handler    SWT7_IRQHandler
    def_irq_handler    STM0_IRQHandler
    def_irq_handler    STM1_IRQHandler
    def_irq_handler    STM2_IRQHandler
    def_irq_handler    STM3_IRQHandler
    def_irq_handler    STM4_IRQHandler
    def_irq_handler    STM5_IRQHandler
    def_irq_handler    STM6_IRQHandler
    def_irq_handler    STM7_IRQHandler
    def_irq_handler    QUADSPI_Ored_IRQHandler
    def_irq_handler    QUADSPI_FlashA_IRQHandler
    def_irq_handler    QUADSPI_FlashB_IRQHandler
    def_irq_handler    STCU2_IRQHandler
    def_irq_handler    USDHC_IRQHandler
    def_irq_handler    CAN0_ORED_IRQHandler
    def_irq_handler    CAN0_ERR_IRQHandler
    def_irq_handler    CAN0_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN0_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN1_ORED_IRQHandler
    def_irq_handler    CAN1_ERR_IRQHandler
    def_irq_handler    CAN1_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN1_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN2_ORED_IRQHandler
    def_irq_handler    CAN2_ERR_IRQHandler
    def_irq_handler    CAN2_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN2_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN3_ORED_IRQHandler
    def_irq_handler    CAN3_ERR_IRQHandler
    def_irq_handler    CAN3_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN3_ORED_8_127_MB_IRQHandler
    def_irq_handler    PIT0_IRQHandler
    def_irq_handler    PIT1_IRQHandler
    def_irq_handler    FTM0_IRQHandler
    def_irq_handler    FTM1_IRQHandler
    def_irq_handler    GMAC0_Common_IRQHandler
    def_irq_handler    GMAC0_CH0_TX_IRQHandler
    def_irq_handler    GMAC0_CH0_RX_IRQHandler
    def_irq_handler    GMAC0_CH1_TX_IRQHandler
    def_irq_handler    GMAC0_CH1_RX_IRQHandler
    def_irq_handler    GMAC0_CH2_TX_IRQHandler
    def_irq_handler    GMAC0_CH2_RX_IRQHandler
    def_irq_handler    GMAC0_CH3_TX_IRQHandler
    def_irq_handler    GMAC0_CH3_RX_IRQHandler
    def_irq_handler    GMAC0_CH4_TX_IRQHandler
    def_irq_handler    GMAC0_CH4_RX_IRQHandler
    def_irq_handler    SARADC0_IRQHandler
    def_irq_handler    SARADC1_IRQHandler
    def_irq_handler    FR_NCERR_IRQHandler
    def_irq_handler    FR_CERR_IRQHandler
    def_irq_handler    FR_Ch0_Rx_FIFO_IRQHandler
    def_irq_handler    FR_Ch1_Rx_FIFO_IRQHandler
    def_irq_handler    FR_WKUP_IRQHandler
    def_irq_handler    FR_Status_IRQHandler
    def_irq_handler    FR_CMBERR_IRQHandler
    def_irq_handler    FR_Tx_BUFF_IRQHandler
    def_irq_handler    FR_Rx_BUFF_IRQHandler
    def_irq_handler    FR_MODULE_IRQHandler
    def_irq_handler    LINFLEXD0_IRQHandler
    def_irq_handler    LINFLEXD1_IRQHandler
    def_irq_handler    SPI0_IRQHandler
    def_irq_handler    SPI1_IRQHandler
    def_irq_handler    SPI2_IRQHandler
    def_irq_handler    SPI3_IRQHandler
    def_irq_handler    SPI4_IRQHandler
    def_irq_handler    SPI5_IRQHandler
    def_irq_handler    I2C0_IRQHandler
    def_irq_handler    I2C1_IRQHandler
    def_irq_handler    MC_RGM_IRQHandler
    def_irq_handler    FCCU_ALARM_IRQHandler
    def_irq_handler    FCCU_MISC_IRQHandler
    def_irq_handler    SBSW_IRQHandler
    def_irq_handler    HSE_MU0_Tx_IRQHandler
    def_irq_handler    HSE_MU0_Rx_IRQHandler
    def_irq_handler    HSE_MU0_Ored_IRQHandler
    def_irq_handler    HSE_MU1_Tx_IRQHandler
    def_irq_handler    HSE_MU1_Rx_IRQHandler
    def_irq_handler    HSE_MU1_Ored_IRQHandler
    def_irq_handler    HSE_MU2_Tx_IRQHandler
    def_irq_handler    HSE_MU2_Rx_IRQHandler
    def_irq_handler    HSE_MU2_Ored_IRQHandler
    def_irq_handler    HSE_MU3_Tx_IRQHandler
    def_irq_handler    HSE_MU3_Rx_IRQHandler
    def_irq_handler    HSE_MU3_Ored_IRQHandler
    def_irq_handler    DDR0_SCRUB_IRQHandler
    def_irq_handler    DDR0_PHY_IRQHandler
    def_irq_handler    CTU_FIFO_IRQHandler
    def_irq_handler    CTU_TRIG_IRQHandler
    def_irq_handler    CTU_ERR_IRQHandler
    def_irq_handler    TMU_IRQHandler
    def_irq_handler    SERDES0_DMA_IRQHandler
    def_irq_handler    SERDES0_LINK_IRQHandler
    def_irq_handler    SERDES0_DSP_IRQHandler
    def_irq_handler    FastDMA_TC_IRQHandler
    def_irq_handler    FastDMA_ERR_IRQHandler
    def_irq_handler    MIPICSI2_0_INT0_IRQHandler
    def_irq_handler    MIPICSI2_0_INT1_IRQHandler
    def_irq_handler    MIPICSI2_0_INT2_IRQHandler
    def_irq_handler    MIPICSI2_0_INT3_IRQHandler
    def_irq_handler    MIPICSI2_1_INT0_IRQHandler
    def_irq_handler    MIPICSI2_1_INT1_IRQHandler
    def_irq_handler    MIPICSI2_1_INT2_IRQHandler
    def_irq_handler    MIPICSI2_1_INT3_IRQHandler
    def_irq_handler    MIPICSI2_2_INT0_IRQHandler
    def_irq_handler    MIPICSI2_2_INT1_IRQHandler
    def_irq_handler    MIPICSI2_2_INT2_IRQHandler
    def_irq_handler    MIPICSI2_2_INT3_IRQHandler
    def_irq_handler    MIPICSI2_3_INT0_IRQHandler
    def_irq_handler    MIPICSI2_3_INT1_IRQHandler
    def_irq_handler    MIPICSI2_3_INT2_IRQHandler
    def_irq_handler    MIPICSI2_3_INT3_IRQHandler
    def_irq_handler    SPT_DSP_ERR_IRQHandler
    def_irq_handler    SPT_EVENT_IRQHandler
    def_irq_handler    SPT_ESC_IRQHandler
    def_irq_handler    SPT_DMA_COMPL_IRQHandler
    def_irq_handler    CAN4_ORED_IRQHandler
    def_irq_handler    CAN4_ERR_IRQHandler
    def_irq_handler    CAN4_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN4_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN5_ORED_IRQHandler
    def_irq_handler    CAN5_ERR_IRQHandler
    def_irq_handler    CAN5_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN5_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN6_ORED_IRQHandler
    def_irq_handler    CAN6_ERR_IRQHandler
    def_irq_handler    CAN6_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN6_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN7_ORED_IRQHandler
    def_irq_handler    CAN7_ERR_IRQHandler
    def_irq_handler    CAN7_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN7_ORED_8_127_MB_IRQHandler
    def_irq_handler    SERDES1_ORED_DMA_IRQHandler
    def_irq_handler    SERDES1_STAT_IRQHandler
    def_irq_handler    SERDES1_AXI_MSI_IRQHandler
    def_irq_handler    SERDES1_PHY_LDOWN_IRQHandler
    def_irq_handler    SERDES1_PHY_LUP_IRQHandler
    def_irq_handler    SERDES1_INTA_IRQHandler
    def_irq_handler    SERDES1_INTB_IRQHandler
    def_irq_handler    SERDES1_INTC_IRQHandler
    def_irq_handler    SERDES1_INTD_IRQHandler
    def_irq_handler    SERDES1_MISC_IRQHandler
    def_irq_handler    SERDES1_PCS_IRQHandler
    def_irq_handler    SERDES1_TLP_IRQHandler
    def_irq_handler    GMAC1_Common_IRQHandler
    def_irq_handler    GMAC1_CH0_TX_IRQHandler
    def_irq_handler    GMAC1_CH0_RX_IRQHandler
    def_irq_handler    GMAC1_CH1_TX_IRQHandler
    def_irq_handler    GMAC1_CH1_RX_IRQHandler
    def_irq_handler    GMAC1_CH2_TX_IRQHandler
    def_irq_handler    GMAC1_CH2_RX_IRQHandler
    def_irq_handler    GMAC1_CH3_TX_IRQHandler
    def_irq_handler    GMAC1_CH3_RX_IRQHandler
    def_irq_handler    GMAC1_CH4_TX_IRQHandler
    def_irq_handler    GMAC1_CH4_RX_IRQHandler
    def_irq_handler    CTE_INT_IRQHandler
    def_irq_handler    LAX1_ERR_IRQHandler
    def_irq_handler    LAX0_ERR_IRQHandler
    def_irq_handler    LAX0_ORED_FUNC_IRQHandler
    def_irq_handler    LAX0_SOFT_INT_IRQHandler
    def_irq_handler    SIUL2_1_INT_IRQHandler
    def_irq_handler    LAX1_ORED_FUNC_IRQHandler

    .end
