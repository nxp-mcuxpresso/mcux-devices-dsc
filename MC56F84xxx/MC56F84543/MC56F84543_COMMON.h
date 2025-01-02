/*
** ###################################################################
**     Processor:           MC56F84543VLH
**     Compiler:            CodeWarrior C/C++ for DSP M56800E
**     Reference manual:    Manual version TBD
**     Version:             rev. 2.0, 2021-02-06
**     Build:               b240709
**
**     Abstract:
**         Peripheral Access Layer for MC56F84543
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 2.0 (2021-02-06)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file MC56F84543_COMMON.h
 * @version 2.0
 * @date 2021-02-06
 * @brief Peripheral Access Layer for MC56F84543
 *
 * Peripheral Access Layer for MC56F84543
 */

#if !defined(MC56F84543_COMMON_H_)
#define MC56F84543_COMMON_H_                     /**< Symbol preventing repeated inclusion */

#include "MC56F84543_features.h"

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0200U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U


/* ----------------------------------------------------------------------------
   -- Interrupt IRQ numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_IRQ_numbers Interrupt IRQ numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_IRQ    101                 /**< Number of interrupts in the IRQ table */

typedef enum IRQn {
  /* Device specific interrupts */
  STPCNT_IRQn                  = 0,                /**< STPCNT interrupt */
  BKPT_IRQn                    = 1,                /**< BKPT interrupt */
  TRBUF_IRQn                   = 2,                /**< TRBUF interrupt */
  TX_REG_IRQn                  = 3,                /**< TX_REG interrupt */
  RX_REG_IRQn                  = 4,                /**< RX_REG interrupt */
  BUS_ERR_IRQn                 = 5,                /**< BUS_ERR interrupt */
  Reserved6_IRQn               = 6,                /**< Reserved interrupt */
  Reserved7_IRQn               = 7,                /**< Reserved interrupt */
  Reserved8_IRQn               = 8,                /**< Reserved interrupt */
  XBARA_IRQn                   = 9,                /**< XBARA interrupt */
  LVI1_IRQn                    = 10,               /**< LVI1 interrupt */
  OCCS_IRQn                    = 11,               /**< OCCS interrupt */
  TMRB_3_IRQn                  = 12,               /**< TMRB_3 interrupt */
  TMRB_2_IRQn                  = 13,               /**< TMRB_2 interrupt */
  TMRB_1_IRQn                  = 14,               /**< TMRB_1 interrupt */
  TMRB_0_IRQn                  = 15,               /**< TMRB_0 interrupt */
  TMRA_3_IRQn                  = 16,               /**< TMRA_3 interrupt */
  TMRA_2_IRQn                  = 17,               /**< TMRA_2 interrupt */
  TMRA_1_IRQn                  = 18,               /**< TMRA_1 interrupt */
  TMRA_0_IRQn                  = 19,               /**< TMRA_0 interrupt */
  ADC_CC1_IRQn                 = 20,               /**< ADC_CC1 interrupt */
  ADC_CC0_IRQn                 = 21,               /**< ADC_CC0 interrupt */
  ADC_ERR_IRQn                 = 22,               /**< ADC_ERR interrupt */
  COCO_IRQn                    = 23,               /**< COCO interrupt */
  DMA3_IRQn                    = 24,               /**< DMA3 interrupt */
  DMA2_IRQn                    = 25,               /**< DMA2 interrupt */
  DMA1_IRQn                    = 26,               /**< DMA1 interrupt */
  DMA0_IRQn                    = 27,               /**< DMA0 interrupt */
  CAN_MB_OR_IRQn               = 28,               /**< CAN_MB_OR interrupt */
  CAN_BUS_OFF_IRQn             = 29,               /**< CAN_BUS_OFF interrupt */
  CAN_ERROR_IRQn               = 30,               /**< CAN_ERROR interrupt */
  CAN_TX_WARN_IRQn             = 31,               /**< CAN_TX_WARN interrupt */
  CAN_RX_WARN_IRQn             = 32,               /**< CAN_RX_WARN interrupt */
  CAN_WAKEUP_IRQn              = 33,               /**< CAN_WAKEUP interrupt */
  Reserved34_IRQn              = 34,               /**< Reserved interrupt */
  Reserved35_IRQn              = 35,               /**< Reserved interrupt */
  Reserved36_IRQn              = 36,               /**< Reserved interrupt */
  Reserved37_IRQn              = 37,               /**< Reserved interrupt */
  QSCI1_RERR_IRQn              = 38,               /**< QSCI1_RERR interrupt */
  QSCI1_RCV_IRQn               = 39,               /**< QSCI1_RCV interrupt */
  QSCI1_TIDLE_IRQn             = 40,               /**< QSCI1_TIDLE interrupt */
  QSCI1_TDRE_IRQn              = 41,               /**< QSCI1_TDRE interrupt */
  QSCI0_RERR_IRQn              = 42,               /**< QSCI0_RERR interrupt */
  QSCI0_RCV_IRQn               = 43,               /**< QSCI0_RCV interrupt */
  QSCI0_TIDLE_IRQn             = 44,               /**< QSCI0_TIDLE interrupt */
  QSCI0_TDRE_IRQn              = 45,               /**< QSCI0_TDRE interrupt */
  Reserved46_IRQn              = 46,               /**< Reserved interrupt */
  Reserved47_IRQn              = 47,               /**< Reserved interrupt */
  Reserved48_IRQn              = 48,               /**< Reserved interrupt */
  Reserved49_IRQn              = 49,               /**< Reserved interrupt */
  QSPI0_XMIT_IRQn              = 50,               /**< QSPI0_XMIT interrupt */
  QSPI0_RCV_IRQn               = 51,               /**< QSPI0_RCV interrupt */
  I2C1_IRQn                    = 52,               /**< I2C1 interrupt */
  I2C0_IRQn                    = 53,               /**< I2C0 interrupt */
  Reserved54_IRQn              = 54,               /**< Reserved interrupt */
  Reserved55_IRQn              = 55,               /**< Reserved interrupt */
  Reserved56_IRQn              = 56,               /**< Reserved interrupt */
  Reserved57_IRQn              = 57,               /**< Reserved interrupt */
  Reserved58_IRQn              = 58,               /**< Reserved interrupt */
  Reserved59_IRQn              = 59,               /**< Reserved interrupt */
  Reserved60_IRQn              = 60,               /**< Reserved interrupt */
  Reserved61_IRQn              = 61,               /**< Reserved interrupt */
  Reserved62_IRQn              = 62,               /**< Reserved interrupt */
  Reserved63_IRQn              = 63,               /**< Reserved interrupt */
  Reserved64_IRQn              = 64,               /**< Reserved interrupt */
  Reserved65_IRQn              = 65,               /**< Reserved interrupt */
  Reserved66_IRQn              = 66,               /**< Reserved interrupt */
  Reserved67_IRQn              = 67,               /**< Reserved interrupt */
  eFlexPWMA_FAULT_IRQn         = 68,               /**< eFlexPWMA_FAULT interrupt */
  eFlexPWMA_RERR_IRQn          = 69,               /**< eFlexPWMA_RERR interrupt */
  eFlexPWMA_RELOAD3_IRQn       = 70,               /**< eFlexPWMA_RELOAD3 interrupt */
  eFlexPWMA_CAP_IRQn           = 71,               /**< eFlexPWMA_CAP interrupt */
  eFlexPWMA_CMP3_IRQn          = 72,               /**< eFlexPWMA_CMP3 interrupt */
  eFlexPWMA_RELOAD2_IRQn       = 73,               /**< eFlexPWMA_RELOAD2 interrupt */
  eFlexPWMA_CMP2_IRQn          = 74,               /**< eFlexPWMA_CMP2 interrupt */
  eFlexPWMA_RELOAD1_IRQn       = 75,               /**< eFlexPWMA_RELOAD1 interrupt */
  eFlexPWMA_CMP1_IRQn          = 76,               /**< eFlexPWMA_CMP1 interrupt */
  eFlexPWMA_RELOAD0_IRQn       = 77,               /**< eFlexPWMA_RELOAD0 interrupt */
  eFlexPWMA_CMP0_IRQn          = 78,               /**< eFlexPWMA_CMP0 interrupt */
  FTFL_RDCOL_IRQn              = 79,               /**< FTFL_RDCOL interrupt */
  FTFL_CC_IRQn                 = 80,               /**< FTFL_CC interrupt */
  CMPD_IRQn                    = 81,               /**< CMPD interrupt */
  CMPC_IRQn                    = 82,               /**< CMPC interrupt */
  CMPB_IRQn                    = 83,               /**< CMPB interrupt */
  CMPA_IRQn                    = 84,               /**< CMPA interrupt */
  PIT1_ROLLOVR_IRQn            = 85,               /**< PIT1_ROLLOVR interrupt */
  PIT0_ROLLOVR_IRQn            = 86,               /**< PIT0_ROLLOVR interrupt */
  PDB1_IRQn                    = 87,               /**< PDB1 interrupt */
  PDB0_IRQn                    = 88,               /**< PDB0 interrupt */
  QDC_INDEX_RO_RU_IRQn         = 89,               /**< QDC_INDEX_RO_RU interrupt */
  QDC_HOME_DOG_IRQn            = 90,               /**< QDC_HOME_DOG interrupt */
  QDC_COMPARE_IRQn             = 91,               /**< QDC_COMPARE interrupt */
  GPIOG_IRQn                   = 92,               /**< GPIOG interrupt */
  GPIOF_IRQn                   = 93,               /**< GPIOF interrupt */
  GPIOE_IRQn                   = 94,               /**< GPIOE interrupt */
  GPIOD_IRQn                   = 95,               /**< GPIOD interrupt */
  GPIOC_IRQn                   = 96,               /**< GPIOC interrupt */
  GPIOB_IRQn                   = 97,               /**< GPIOB interrupt */
  GPIOA_IRQn                   = 98,               /**< GPIOA interrupt */
  COP_INT_IRQn                 = 99,               /**< COP_INT interrupt */
  EWM_INT_IRQn                 = 100               /**< EWM_INT interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_IRQ_numbers */


/* ----------------------------------------------------------------------------
   -- Includes and Typedefs
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Includes_And_Typedes Includes and Typedefs
 * @{
 */

#include <stdint.h>

#define __IO volatile
#define __I const volatile
#define __O volatile

#ifdef __cplusplus
  typedef unsigned char uint8_t;
  typedef unsigned short uint16_t;
  typedef unsigned long uint32_t;
#endif

/*!
 * @}
 */ /* end of group Includes_And_Typedes */


/* ADC - Peripheral instance base addresses */
/** Peripheral ADC base address */
#define ADC_BASE                                 (0xE500u)
/** Peripheral ADC base pointer */
#define ADC                                      ((ADC_Type *)ADC_BASE)
/** Array initializer of ADC peripheral base addresses */
#define ADC_BASE_ADDRS                           { ADC_BASE }
/** Array initializer of ADC peripheral base pointers */
#define ADC_BASE_PTRS                            { ADC }

/* AOI - Peripheral instance base addresses */
/** Peripheral AOI base address */
#define AOI_BASE                                 (0xE380u)
/** Peripheral AOI base pointer */
#define AOI                                      ((AOI_Type *)AOI_BASE)
/** Array initializer of AOI peripheral base addresses */
#define AOI_BASE_ADDRS                           { AOI_BASE }
/** Array initializer of AOI peripheral base pointers */
#define AOI_BASE_PTRS                            { AOI }

/* CAN - Peripheral instance base addresses */
/** Peripheral CAN0 base address */
#define CAN0_BASE                                (0xE800u)
/** Peripheral CAN0 base pointer */
#define CAN0                                     ((CAN_Type *)CAN0_BASE)
/** Array initializer of CAN peripheral base addresses */
#define CAN_BASE_ADDRS                           { CAN0_BASE }
/** Array initializer of CAN peripheral base pointers */
#define CAN_BASE_PTRS                            { CAN0 }
/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { CAN_RX_WARN_IRQn }
#define CAN_Tx_Warning_IRQS                      { CAN_TX_WARN_IRQn }
#define CAN_Wake_Up_IRQS                         { CAN_WAKEUP_IRQn }
#define CAN_Error_IRQS                           { CAN_ERROR_IRQn }
#define CAN_Bus_Off_IRQS                         { CAN_BUS_OFF_IRQn }
#define CAN_ORed_Message_buffer_IRQS             { CAN_MB_OR_IRQn }

/* CMP - Peripheral instance base addresses */
/** Peripheral CMPA base address */
#define CMPA_BASE                                (0xE020u)
/** Peripheral CMPA base pointer */
#define CMPA                                     ((CMP_Type *)CMPA_BASE)
/** Peripheral CMPB base address */
#define CMPB_BASE                                (0xE028u)
/** Peripheral CMPB base pointer */
#define CMPB                                     ((CMP_Type *)CMPB_BASE)
/** Peripheral CMPC base address */
#define CMPC_BASE                                (0xE030u)
/** Peripheral CMPC base pointer */
#define CMPC                                     ((CMP_Type *)CMPC_BASE)
/** Peripheral CMPD base address */
#define CMPD_BASE                                (0xE038u)
/** Peripheral CMPD base pointer */
#define CMPD                                     ((CMP_Type *)CMPD_BASE)
/** Array initializer of CMP peripheral base addresses */
#define CMP_BASE_ADDRS                           { CMPA_BASE, CMPB_BASE, CMPC_BASE, CMPD_BASE }
/** Array initializer of CMP peripheral base pointers */
#define CMP_BASE_PTRS                            { CMPA, CMPB, CMPC, CMPD }

/* COP - Peripheral instance base addresses */
/** Peripheral COP base address */
#define COP_BASE                                 (0xE320u)
/** Peripheral COP base pointer */
#define COP                                      ((COP_Type *)COP_BASE)
/** Array initializer of COP peripheral base addresses */
#define COP_BASE_ADDRS                           { COP_BASE }
/** Array initializer of COP peripheral base pointers */
#define COP_BASE_PTRS                            { COP }

/* CRC - Peripheral instance base addresses */
/** Peripheral CRC base address */
#define CRC_BASE                                 (0xE1C0u)
/** Peripheral CRC base pointer */
#define CRC                                      ((CRC_Type *)CRC_BASE)
/** Array initializer of CRC peripheral base addresses */
#define CRC_BASE_ADDRS                           { CRC_BASE }
/** Array initializer of CRC peripheral base pointers */
#define CRC_BASE_PTRS                            { CRC }

/* DAC - Peripheral instance base addresses */
/** Peripheral DAC base address */
#define DAC_BASE                                 (0xE000u)
/** Peripheral DAC base pointer */
#define DAC                                      ((DAC_Type *)DAC_BASE)
/** Array initializer of DAC peripheral base addresses */
#define DAC_BASE_ADDRS                           { DAC_BASE }
/** Array initializer of DAC peripheral base pointers */
#define DAC_BASE_PTRS                            { DAC }

/* DMA - Peripheral instance base addresses */
/** Peripheral DMA0 base address */
#define DMA0_BASE                                (0xC800u)
/** Peripheral DMA0 base pointer */
#define DMA0                                     ((DMA_Type *)DMA0_BASE)
/** Array initializer of DMA peripheral base addresses */
#define DMA_BASE_ADDRS                           { DMA0_BASE }
/** Array initializer of DMA peripheral base pointers */
#define DMA_BASE_PTRS                            { DMA0 }
/** Interrupt vectors for the DMA peripheral type */
#define DMA_CHN_IRQS                             { { DMA0_IRQn, DMA1_IRQn, DMA2_IRQn, DMA3_IRQn } }

/* EWM - Peripheral instance base addresses */
/** Peripheral EWM base address */
#define EWM_BASE                                 (0xE330u)
/** Peripheral EWM base pointer */
#define EWM                                      ((EWM_Type *)EWM_BASE)
/** Array initializer of EWM peripheral base addresses */
#define EWM_BASE_ADDRS                           { EWM_BASE }
/** Array initializer of EWM peripheral base pointers */
#define EWM_BASE_PTRS                            { EWM }
/** Interrupt vectors for the EWM peripheral type */
#define EWM_IRQS                                 { EWM_INT_IRQn }

/* FMC - Peripheral instance base addresses */
/** Peripheral FMC base address */
#define FMC_BASE                                 (0xDE00u)
/** Peripheral FMC base pointer */
#define FMC                                      ((FMC_Type *)FMC_BASE)
/** Array initializer of FMC peripheral base addresses */
#define FMC_BASE_ADDRS                           { FMC_BASE }
/** Array initializer of FMC peripheral base pointers */
#define FMC_BASE_PTRS                            { FMC }

/* FTFL - Peripheral instance base addresses */
/** Peripheral FTFL base address */
#define FTFL_BASE                                (0xE3C0u)
/** Peripheral FTFL base pointer */
#define FTFL                                     ((FTFL_Type *)FTFL_BASE)
/** Array initializer of FTFL peripheral base addresses */
#define FTFL_BASE_ADDRS                          { FTFL_BASE }
/** Array initializer of FTFL peripheral base pointers */
#define FTFL_BASE_PTRS                           { FTFL }

/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIOA base address */
#define GPIOA_BASE                               (0xE200u)
/** Peripheral GPIOA base pointer */
#define GPIOA                                    ((GPIO_Type *)GPIOA_BASE)
/** Peripheral GPIOB base address */
#define GPIOB_BASE                               (0xE210u)
/** Peripheral GPIOB base pointer */
#define GPIOB                                    ((GPIO_Type *)GPIOB_BASE)
/** Peripheral GPIOC base address */
#define GPIOC_BASE                               (0xE220u)
/** Peripheral GPIOC base pointer */
#define GPIOC                                    ((GPIO_Type *)GPIOC_BASE)
/** Peripheral GPIOD base address */
#define GPIOD_BASE                               (0xE230u)
/** Peripheral GPIOD base pointer */
#define GPIOD                                    ((GPIO_Type *)GPIOD_BASE)
/** Peripheral GPIOE base address */
#define GPIOE_BASE                               (0xE240u)
/** Peripheral GPIOE base pointer */
#define GPIOE                                    ((GPIO_Type *)GPIOE_BASE)
/** Peripheral GPIOF base address */
#define GPIOF_BASE                               (0xE250u)
/** Peripheral GPIOF base pointer */
#define GPIOF                                    ((GPIO_Type *)GPIOF_BASE)
/** Peripheral GPIOG base address */
#define GPIOG_BASE                               (0xE260u)
/** Peripheral GPIOG base pointer */
#define GPIOG                                    ((GPIO_Type *)GPIOG_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { GPIOA_BASE, GPIOB_BASE, GPIOC_BASE, GPIOD_BASE, GPIOE_BASE, GPIOF_BASE, GPIOG_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF, GPIOG }

/* I2C - Peripheral instance base addresses */
/** Peripheral I2C0 base address */
#define I2C0_BASE                                (0xE0E0u)
/** Peripheral I2C0 base pointer */
#define I2C0                                     ((I2C_Type *)I2C0_BASE)
/** Peripheral I2C1 base address */
#define I2C1_BASE                                (0xE0F0u)
/** Peripheral I2C1 base pointer */
#define I2C1                                     ((I2C_Type *)I2C1_BASE)
/** Array initializer of I2C peripheral base addresses */
#define I2C_BASE_ADDRS                           { I2C0_BASE, I2C1_BASE }
/** Array initializer of I2C peripheral base pointers */
#define I2C_BASE_PTRS                            { I2C0, I2C1 }
/** Interrupt vectors for the I2C peripheral type */
#define I2C_IRQS                                 { I2C0_IRQn, I2C1_IRQn }

/* INTC - Peripheral instance base addresses */
/** Peripheral INTC base address */
#define INTC_BASE                                (0xE300u)
/** Peripheral INTC base pointer */
#define INTC                                     ((INTC_Type *)INTC_BASE)
/** Array initializer of INTC peripheral base addresses */
#define INTC_BASE_ADDRS                          { INTC_BASE }
/** Array initializer of INTC peripheral base pointers */
#define INTC_BASE_PTRS                           { INTC }

/* MCM - Peripheral instance base addresses */
/** Peripheral MCM base address */
#define MCM_BASE                                 (0xC000u)
/** Peripheral MCM base pointer */
#define MCM                                      ((MCM_Type *)MCM_BASE)
/** Array initializer of MCM peripheral base addresses */
#define MCM_BASE_ADDRS                           { MCM_BASE }
/** Array initializer of MCM peripheral base pointers */
#define MCM_BASE_PTRS                            { MCM }

/* OCCS - Peripheral instance base addresses */
/** Peripheral OCCS base address */
#define OCCS_BASE                                (0xE2B0u)
/** Peripheral OCCS base pointer */
#define OCCS                                     ((OCCS_Type *)OCCS_BASE)
/** Array initializer of OCCS peripheral base addresses */
#define OCCS_BASE_ADDRS                          { OCCS_BASE }
/** Array initializer of OCCS peripheral base pointers */
#define OCCS_BASE_PTRS                           { OCCS }

/* PDB - Peripheral instance base addresses */
/** Peripheral PDB0 base address */
#define PDB0_BASE                                (0xE120u)
/** Peripheral PDB0 base pointer */
#define PDB0                                     ((PDB_Type *)PDB0_BASE)
/** Peripheral PDB1 base address */
#define PDB1_BASE                                (0xE130u)
/** Peripheral PDB1 base pointer */
#define PDB1                                     ((PDB_Type *)PDB1_BASE)
/** Array initializer of PDB peripheral base addresses */
#define PDB_BASE_ADDRS                           { PDB0_BASE, PDB1_BASE }
/** Array initializer of PDB peripheral base pointers */
#define PDB_BASE_PTRS                            { PDB0, PDB1 }

/* PIT - Peripheral instance base addresses */
/** Peripheral PIT0 base address */
#define PIT0_BASE                                (0xE100u)
/** Peripheral PIT0 base pointer */
#define PIT0                                     ((PIT_Type *)PIT0_BASE)
/** Peripheral PIT1 base address */
#define PIT1_BASE                                (0xE110u)
/** Peripheral PIT1 base pointer */
#define PIT1                                     ((PIT_Type *)PIT1_BASE)
/** Array initializer of PIT peripheral base addresses */
#define PIT_BASE_ADDRS                           { PIT0_BASE, PIT1_BASE }
/** Array initializer of PIT peripheral base pointers */
#define PIT_BASE_PTRS                            { PIT0, PIT1 }

/* PMC - Peripheral instance base addresses */
/** Peripheral PMC base address */
#define PMC_BASE                                 (0xE2A0u)
/** Peripheral PMC base pointer */
#define PMC                                      ((PMC_Type *)PMC_BASE)
/** Array initializer of PMC peripheral base addresses */
#define PMC_BASE_ADDRS                           { PMC_BASE }
/** Array initializer of PMC peripheral base pointers */
#define PMC_BASE_PTRS                            { PMC }

/* PWM - Peripheral instance base addresses */
/** Peripheral PWMA base address */
#define PWMA_BASE                                (0xE600u)
/** Peripheral PWMA base pointer */
#define PWMA                                     ((PWM_Type *)PWMA_BASE)
/** Array initializer of PWM peripheral base addresses */
#define PWM_BASE_ADDRS                           { PWMA_BASE }
/** Array initializer of PWM peripheral base pointers */
#define PWM_BASE_PTRS                            { PWMA }
/** Interrupt vectors for the PWM peripheral type */
#define PWM_CMP_IRQS                             { { eFlexPWMA_CMP0_IRQn, eFlexPWMA_CMP1_IRQn, eFlexPWMA_CMP2_IRQn, eFlexPWMA_CMP3_IRQn } }
#define PWM_RELOAD_IRQS                          { { eFlexPWMA_RELOAD0_IRQn, eFlexPWMA_RELOAD1_IRQn, eFlexPWMA_RELOAD2_IRQn, eFlexPWMA_RELOAD3_IRQn } }
#define PWM_FAULT_IRQS                           { eFlexPWMA_FAULT_IRQn }

/* QDC - Peripheral instance base addresses */
/** Peripheral QDC base address */
#define QDC_BASE                                 (0xE1E0u)
/** Peripheral QDC base pointer */
#define QDC                                      ((QDC_Type *)QDC_BASE)
/** Array initializer of QDC peripheral base addresses */
#define QDC_BASE_ADDRS                           { QDC_BASE }
/** Array initializer of QDC peripheral base pointers */
#define QDC_BASE_PTRS                            { QDC }

/* QSCI - Peripheral instance base addresses */
/** Peripheral QSCI0 base address */
#define QSCI0_BASE                               (0xE080u)
/** Peripheral QSCI0 base pointer */
#define QSCI0                                    ((QSCI_Type *)QSCI0_BASE)
/** Peripheral QSCI1 base address */
#define QSCI1_BASE                               (0xE090u)
/** Peripheral QSCI1 base pointer */
#define QSCI1                                    ((QSCI_Type *)QSCI1_BASE)
/** Array initializer of QSCI peripheral base addresses */
#define QSCI_BASE_ADDRS                          { QSCI0_BASE, QSCI1_BASE }
/** Array initializer of QSCI peripheral base pointers */
#define QSCI_BASE_PTRS                           { QSCI0, QSCI1 }
/** Interrupt vectors for the QSCI peripheral type */
#define QSCI_RX_IRQS                             { QSCI0_RCV_IRQn, QSCI1_RCV_IRQn }
#define QSCI_RX_ERR_IRQS                         { QSCI0_RERR_IRQn, QSCI1_RERR_IRQn }
#define QSCI_TX_IRQS                             { QSCI0_TDRE_IRQn, QSCI1_TDRE_IRQn }
#define QSCI_TIDLE_IRQS                          { QSCI0_TIDLE_IRQn, QSCI1_TIDLE_IRQn }

/* QSPI - Peripheral instance base addresses */
/** Peripheral QSPI0 base address */
#define QSPI0_BASE                               (0xE0B0u)
/** Peripheral QSPI0 base pointer */
#define QSPI0                                    ((QSPI_Type *)QSPI0_BASE)
/** Array initializer of QSPI peripheral base addresses */
#define QSPI_BASE_ADDRS                          { QSPI0_BASE }
/** Array initializer of QSPI peripheral base pointers */
#define QSPI_BASE_PTRS                           { QSPI0 }
/** Interrupt vectors for the QSPI peripheral type */
#define QSPI_RX_IRQS                             { QSPI0_RCV_IRQn }
#define QSPI_TX_IRQS                             { QSPI0_XMIT_IRQn }

/* SADC - Peripheral instance base addresses */
/** Peripheral SADC base address */
#define SADC_BASE                                (0xE580u)
/** Peripheral SADC base pointer */
#define SADC                                     ((SADC_Type *)SADC_BASE)
/** Array initializer of SADC peripheral base addresses */
#define SADC_BASE_ADDRS                          { SADC_BASE }
/** Array initializer of SADC peripheral base pointers */
#define SADC_BASE_PTRS                           { SADC }

/* SIM - Peripheral instance base addresses */
/** Peripheral SIM base address */
#define SIM_BASE                                 (0xE400u)
/** Peripheral SIM base pointer */
#define SIM                                      ((SIM_Type *)SIM_BASE)
/** Array initializer of SIM peripheral base addresses */
#define SIM_BASE_ADDRS                           { SIM_BASE }
/** Array initializer of SIM peripheral base pointers */
#define SIM_BASE_PTRS                            { SIM }

/* TMR - Peripheral instance base addresses */
/** Peripheral TMRA base address */
#define TMRA_BASE                                (0xE140u)
/** Peripheral TMRA base pointer */
#define TMRA                                     ((TMR_Type *)TMRA_BASE)
/** Peripheral TMRB base address */
#define TMRB_BASE                                (0xE180u)
/** Peripheral TMRB base pointer */
#define TMRB                                     ((TMR_Type *)TMRB_BASE)
/** Array initializer of TMR peripheral base addresses */
#define TMR_BASE_ADDRS                           { TMRA_BASE, TMRB_BASE }
/** Array initializer of TMR peripheral base pointers */
#define TMR_BASE_PTRS                            { TMRA, TMRB }

/* XBARA - Peripheral instance base addresses */
/** Peripheral XBARA base address */
#define XBARA_BASE                               (0xE340u)
/** Peripheral XBARA base pointer */
#define XBARA                                    ((XBARA_Type *)XBARA_BASE)
/** Array initializer of XBARA peripheral base addresses */
#define XBARA_BASE_ADDRS                         { XBARA_BASE }
/** Array initializer of XBARA peripheral base pointers */
#define XBARA_BASE_PTRS                          { XBARA }

/* XBARB - Peripheral instance base addresses */
/** Peripheral XBARB base address */
#define XBARB_BASE                               (0xE360u)
/** Peripheral XBARB base pointer */
#define XBARB                                    ((XBARB_Type *)XBARB_BASE)
/** Array initializer of XBARB peripheral base addresses */
#define XBARB_BASE_ADDRS                         { XBARB_BASE }
/** Array initializer of XBARB peripheral base pointers */
#define XBARB_BASE_PTRS                          { XBARB }

/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/* No SDK compatibility issues. */

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* MC56F84543_COMMON_H_ */

