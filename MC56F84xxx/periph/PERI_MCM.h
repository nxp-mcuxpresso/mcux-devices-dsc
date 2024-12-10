/*
** ###################################################################
**     Processors:          MC56F84441VLF
**                          MC56F84442VLH
**                          MC56F84451VLF
**                          MC56F84452VLH
**                          MC56F84462VLH
**                          MC56F84540VLF
**                          MC56F84543VLH
**                          MC56F84550VLF
**                          MC56F84553VLH
**                          MC56F84565VLK
**                          MC56F84567VLL
**                          MC56F84587VLL
**                          MC56F84763VLH
**                          MC56F84766VLK
**                          MC56F84769VLL
**                          MC56F84786VLK
**                          MC56F84789VLL
**
**     Version:             rev. 2.0, 2021-02-06
**     Build:               b240709
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MCM
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
 * @file MCM.h
 * @version 2.0
 * @date 2021-02-06
 * @brief CMSIS Peripheral Access Layer for MCM
 *
 * CMSIS Peripheral Access Layer for MCM
 */

#if !defined(MCM_H_)
#define MCM_H_                                   /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MC56F84441VLF))
#include "MC56F84441_COMMON.h"
#elif (defined(CPU_MC56F84442VLH))
#include "MC56F84442_COMMON.h"
#elif (defined(CPU_MC56F84451VLF))
#include "MC56F84451_COMMON.h"
#elif (defined(CPU_MC56F84452VLH))
#include "MC56F84452_COMMON.h"
#elif (defined(CPU_MC56F84462VLH))
#include "MC56F84462_COMMON.h"
#elif (defined(CPU_MC56F84540VLF))
#include "MC56F84540_COMMON.h"
#elif (defined(CPU_MC56F84543VLH))
#include "MC56F84543_COMMON.h"
#elif (defined(CPU_MC56F84550VLF))
#include "MC56F84550_COMMON.h"
#elif (defined(CPU_MC56F84553VLH))
#include "MC56F84553_COMMON.h"
#elif (defined(CPU_MC56F84565VLK))
#include "MC56F84565_COMMON.h"
#elif (defined(CPU_MC56F84567VLL))
#include "MC56F84567_COMMON.h"
#elif (defined(CPU_MC56F84587VLL))
#include "MC56F84587_COMMON.h"
#elif (defined(CPU_MC56F84763VLH))
#include "MC56F84763_COMMON.h"
#elif (defined(CPU_MC56F84766VLK))
#include "MC56F84766_COMMON.h"
#elif (defined(CPU_MC56F84769VLL))
#include "MC56F84769_COMMON.h"
#elif (defined(CPU_MC56F84786VLK))
#include "MC56F84786_COMMON.h"
#elif (defined(CPU_MC56F84789VLL))
#include "MC56F84789_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__CWCC__)
  #pragma push
  #pragma cpp_extensions on
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- MCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MCM_Peripheral_Access_Layer MCM Peripheral Access Layer
 * @{
 */

/** MCM - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[8];
  __I  uint16_t PLASC;                             /**< Crossbar switch (AXBS) slave configuration, offset: 0x8 */
  __I  uint16_t PLAMC;                             /**< Crossbar switch (AXBS) master configuration, offset: 0xA */
  __IO uint32_t CPCR;                              /**< Core control register, offset: 0xC */
  __I  uint32_t CFADR;                             /**< Core fault address register, offset: 0x10 */
  __I  uint8_t CFATR;                              /**< Core fault attributes register, offset: 0x14 */
  __I  uint8_t CFLOC;                              /**< Core fault location register, offset: 0x15 */
  __IO uint8_t CFIER;                              /**< Core fault interrupt enable register, offset: 0x16 */
  __IO uint8_t CFISR;                              /**< MCM interrupt status register, offset: 0x17 */
  __I  uint32_t CFDTR;                             /**< Core fault data register, offset: 0x18 */
       uint8_t RESERVED_1[4];
  __IO uint32_t RPCR;                              /**< Resource Protection Control Register, offset: 0x20 */
  __IO uint32_t UFLASHBAR;                         /**< User Flash Base Address Register, offset: 0x24 */
  __IO uint32_t UPRAMBAR;                          /**< User Program RAM Base Address Register, offset: 0x28 */
       uint8_t RESERVED_2[4];
  __IO uint32_t SRPOSP;                            /**< Resource Protection Other Stack Pointer, offset: 0x30 */
  __IO uint32_t SRPIPC;                            /**< Memory Protection Illegal PC, offset: 0x34 */
  __IO uint32_t SRPMPC;                            /**< Resource Protection Misaligned PC, offset: 0x38 */
} MCM_Type;

/* ----------------------------------------------------------------------------
   -- MCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MCM_Register_Masks MCM Register Masks
 * @{
 */

/*! @name PLASC - Crossbar switch (AXBS) slave configuration */
/*! @{ */

#define MCM_PLASC_ASC_MASK                       (0xFFU)
#define MCM_PLASC_ASC_SHIFT                      (0U)
/*! ASC - Each bit in the ASC field indicates if there is a corresponding connection to the AXBS
 *    slave input port. For this device, this field always read 0x0F.
 *  0b00000000..A bus slave connection to AXBS input port n is absent
 *  0b00000001..A bus slave connection to AXBS input port n is present
 */
#define MCM_PLASC_ASC(x)                         (((uint16_t)(((uint16_t)(x)) << MCM_PLASC_ASC_SHIFT)) & MCM_PLASC_ASC_MASK)

#define MCM_PLASC_DP64_MASK                      (0x8000U)
#define MCM_PLASC_DP64_SHIFT                     (15U)
/*! DP64 - Indicates if the datapath is 32 or 64 bits wide
 *  0b0..Datapath width is 32 bits
 *  0b1..Datapath width is 64 bits
 */
#define MCM_PLASC_DP64(x)                        (((uint16_t)(((uint16_t)(x)) << MCM_PLASC_DP64_SHIFT)) & MCM_PLASC_DP64_MASK)
/*! @} */

/*! @name PLAMC - Crossbar switch (AXBS) master configuration */
/*! @{ */

#define MCM_PLAMC_AMC_MASK                       (0xFFU)
#define MCM_PLAMC_AMC_SHIFT                      (0U)
/*! AMC - Each bit in the AMC field indicates if there is a corresponding connection to the AXBS
 *    master input port. For this device, this field always reads 0x0F.
 *  0b00000000..A bus master connection to AXBS input port n is absent
 *  0b00000001..A bus master connection to AXBS input port n is present
 */
#define MCM_PLAMC_AMC(x)                         (((uint16_t)(((uint16_t)(x)) << MCM_PLAMC_AMC_SHIFT)) & MCM_PLAMC_AMC_MASK)
/*! @} */

/*! @name CPCR - Core control register */
/*! @{ */

#define MCM_CPCR_INSDIS_MASK                     (0x10000UL)
#define MCM_CPCR_INSDIS_SHIFT                    (16UL)
/*! INSDIS - Disable instructions supported only by DSP56800EX core
 *  0b0..BFSC and 32-bit multiply and MAC instructions enabled
 *  0b1..BFSC and 32-bit multiply and MAC instructions disabled
 */
#define MCM_CPCR_INSDIS(x)                       (((uint32_t)(((uint32_t)(x)) << MCM_CPCR_INSDIS_SHIFT)) & MCM_CPCR_INSDIS_MASK)

#define MCM_CPCR_RCDIS_MASK                      (0x20000UL)
#define MCM_CPCR_RCDIS_SHIFT                     (17UL)
/*! RCDIS - Disable core reverse carry
 *  0b0..Core reverse carry enabled
 *  0b1..Core reverse carry disabled
 */
#define MCM_CPCR_RCDIS(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPCR_RCDIS_SHIFT)) & MCM_CPCR_RCDIS_MASK)

#define MCM_CPCR_SRDIS_MASK                      (0x40000UL)
#define MCM_CPCR_SRDIS_SHIFT                     (18UL)
/*! SRDIS - Disable core new shadow region
 *  0b0..Core new shadow region enabled
 *  0b1..Core new shadow region disabled
 */
#define MCM_CPCR_SRDIS(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPCR_SRDIS_SHIFT)) & MCM_CPCR_SRDIS_MASK)

#define MCM_CPCR_IBDIS_MASK                      (0x80000UL)
#define MCM_CPCR_IBDIS_SHIFT                     (19UL)
/*! IBDIS - Disable core instruction buffer
 *  0b0..Core longword instruction buffer enabled
 *  0b1..Core longword instruction buffer disabled
 */
#define MCM_CPCR_IBDIS(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CPCR_IBDIS_SHIFT)) & MCM_CPCR_IBDIS_MASK)

#define MCM_CPCR_XBARARB_MASK                    (0x80000000UL)
#define MCM_CPCR_XBARARB_SHIFT                   (31UL)
/*! XBARARB - Select DMA Controller priority in AXBS Crossbar Switch arbitration scheme
 *  0b0..Fixed-priority arbitration is selected: DSC core has a higher priority than the DMA Controller's priority
 *  0b1..Round-robin priority arbitration is selected: DMA Controller and DSC core have equal priority
 */
#define MCM_CPCR_XBARARB(x)                      (((uint32_t)(((uint32_t)(x)) << MCM_CPCR_XBARARB_SHIFT)) & MCM_CPCR_XBARARB_MASK)
/*! @} */

/*! @name CFADR - Core fault address register */
/*! @{ */

#define MCM_CFADR_ADDR_MASK                      (0xFFFFFFFFUL)
#define MCM_CFADR_ADDR_SHIFT                     (0UL)
/*! ADDR - Indicates the faulting address of the last core access terminated with an error response. */
#define MCM_CFADR_ADDR(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CFADR_ADDR_SHIFT)) & MCM_CFADR_ADDR_MASK)
/*! @} */

/*! @name CFATR - Core fault attributes register */
/*! @{ */

#define MCM_CFATR_TYPE_MASK                      (0x1U)
#define MCM_CFATR_TYPE_SHIFT                     (0U)
/*! TYPE - Type of last faulted core access
 *  0b0..Instruction
 *  0b1..Data
 */
#define MCM_CFATR_TYPE(x)                        (((uint8_t)(((uint8_t)(x)) << MCM_CFATR_TYPE_SHIFT)) & MCM_CFATR_TYPE_MASK)

#define MCM_CFATR_BUFFER_MASK                    (0x4U)
#define MCM_CFATR_BUFFER_SHIFT                   (2U)
/*! BUFFER - Indicates if last faulted core access was bufferable
 *  0b0..Non-bufferable
 *  0b1..Bufferable
 */
#define MCM_CFATR_BUFFER(x)                      (((uint8_t)(((uint8_t)(x)) << MCM_CFATR_BUFFER_SHIFT)) & MCM_CFATR_BUFFER_MASK)

#define MCM_CFATR_SIZE_MASK                      (0x70U)
#define MCM_CFATR_SIZE_SHIFT                     (4U)
/*! SIZE - Size of last faulted core access
 *  0b000..8-bit
 *  0b001..16-bit
 *  0b010..32-bit
 */
#define MCM_CFATR_SIZE(x)                        (((uint8_t)(((uint8_t)(x)) << MCM_CFATR_SIZE_SHIFT)) & MCM_CFATR_SIZE_MASK)

#define MCM_CFATR_DIR_MASK                       (0x80U)
#define MCM_CFATR_DIR_SHIFT                      (7U)
/*! DIR - Direction of last faulted core access
 *  0b0..Core read access
 *  0b1..Core write access
 */
#define MCM_CFATR_DIR(x)                         (((uint8_t)(((uint8_t)(x)) << MCM_CFATR_DIR_SHIFT)) & MCM_CFATR_DIR_MASK)
/*! @} */

/*! @name CFLOC - Core fault location register */
/*! @{ */

#define MCM_CFLOC_LOC_MASK                       (0xC0U)
#define MCM_CFLOC_LOC_SHIFT                      (6U)
/*! LOC - Location of last captured fault
 *  0b00..Error occurred on M0 (instruction bus)
 *  0b01..Error occurred on M1 (operand A bus)
 *  0b10..Error occurred on M2 (operand B bus)
 *  0b11..Reserved
 */
#define MCM_CFLOC_LOC(x)                         (((uint8_t)(((uint8_t)(x)) << MCM_CFLOC_LOC_SHIFT)) & MCM_CFLOC_LOC_MASK)
/*! @} */

/*! @name CFIER - Core fault interrupt enable register */
/*! @{ */

#define MCM_CFIER_ECFEI_MASK                     (0x80U)
#define MCM_CFIER_ECFEI_SHIFT                    (7U)
/*! ECFEI - Enable core fault error interrupt
 *  0b0..Do not generate an error interrupt on a faulted system bus cycle
 *  0b1..Generate an error interrupt to the interrupt controller on a faulted system bus cycle
 */
#define MCM_CFIER_ECFEI(x)                       (((uint8_t)(((uint8_t)(x)) << MCM_CFIER_ECFEI_SHIFT)) & MCM_CFIER_ECFEI_MASK)
/*! @} */

/*! @name CFISR - MCM interrupt status register */
/*! @{ */

#define MCM_CFISR_CFEI_MASK                      (0x80U)
#define MCM_CFISR_CFEI_SHIFT                     (7U)
/*! CFEI - Core fault error interrupt flag
 *  0b0..No bus error
 *  0b1..A bus error has occurred. The faulting address, attributes (and possibly write data) are captured in the
 *       CFADR, CFATR, and CFDTR registers. The error interrupt is enabled only if CFIER[ECFEI] is set.
 */
#define MCM_CFISR_CFEI(x)                        (((uint8_t)(((uint8_t)(x)) << MCM_CFISR_CFEI_SHIFT)) & MCM_CFISR_CFEI_MASK)
/*! @} */

/*! @name CFDTR - Core fault data register */
/*! @{ */

#define MCM_CFDTR_DATA_MASK                      (0xFFFFFFFFUL)
#define MCM_CFDTR_DATA_SHIFT                     (0UL)
/*! DATA - Contains write data associated with the faulting access of the last internal bus write
 *    access. The data value is taken directly from the write data bus. Read data is not captured.
 */
#define MCM_CFDTR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << MCM_CFDTR_DATA_SHIFT)) & MCM_CFDTR_DATA_MASK)
/*! @} */

/*! @name RPCR - Resource Protection Control Register */
/*! @{ */

#define MCM_RPCR_RPE_MASK                        (0x1UL)
#define MCM_RPCR_RPE_SHIFT                       (0UL)
/*! RPE - Resource Protection Enable
 *  0b0..Resource protection disabled
 *  0b1..Resource protection enabled
 */
#define MCM_RPCR_RPE(x)                          (((uint32_t)(((uint32_t)(x)) << MCM_RPCR_RPE_SHIFT)) & MCM_RPCR_RPE_MASK)

#define MCM_RPCR_RL_MASK                         (0x2UL)
#define MCM_RPCR_RL_SHIFT                        (1UL)
/*! RL - Register Lock
 *  0b0..RP register values may be changed
 *  0b1..RP registers are locked and may not be changed until after a system reset
 */
#define MCM_RPCR_RL(x)                           (((uint32_t)(((uint32_t)(x)) << MCM_RPCR_RL_SHIFT)) & MCM_RPCR_RL_MASK)
/*! @} */

/*! @name UFLASHBAR - User Flash Base Address Register */
/*! @{ */

#define MCM_UFLASHBAR_FBA_MASK                   (0x3F000UL)
#define MCM_UFLASHBAR_FBA_SHIFT                  (12UL)
/*! FBA - Flash Base Address for User Region */
#define MCM_UFLASHBAR_FBA(x)                     (((uint32_t)(((uint32_t)(x)) << MCM_UFLASHBAR_FBA_SHIFT)) & MCM_UFLASHBAR_FBA_MASK)
/*! @} */

/*! @name UPRAMBAR - User Program RAM Base Address Register */
/*! @{ */

#define MCM_UPRAMBAR_RBA_MASK                    (0x7F00UL)
#define MCM_UPRAMBAR_RBA_SHIFT                   (8UL)
/*! RBA - Program RAM Base Address for User Region */
#define MCM_UPRAMBAR_RBA(x)                      (((uint32_t)(((uint32_t)(x)) << MCM_UPRAMBAR_RBA_SHIFT)) & MCM_UPRAMBAR_RBA_MASK)
/*! @} */

/*! @name SRPOSP - Resource Protection Other Stack Pointer */
/*! @{ */

#define MCM_SRPOSP_SRPOSP_MASK                   (0xFFFFFFUL)
#define MCM_SRPOSP_SRPOSP_SHIFT                  (0UL)
/*! SRPOSP - Resource protection "other" SP */
#define MCM_SRPOSP_SRPOSP(x)                     (((uint32_t)(((uint32_t)(x)) << MCM_SRPOSP_SRPOSP_SHIFT)) & MCM_SRPOSP_SRPOSP_MASK)
/*! @} */

/*! @name SRPIPC - Memory Protection Illegal PC */
/*! @{ */

#define MCM_SRPIPC_SRPIFPC_MASK                  (0x1FFFFFUL)
#define MCM_SRPIPC_SRPIFPC_SHIFT                 (0UL)
/*! SRPIFPC - Resource Protection Illegal Faulting PC */
#define MCM_SRPIPC_SRPIFPC(x)                    (((uint32_t)(((uint32_t)(x)) << MCM_SRPIPC_SRPIFPC_SHIFT)) & MCM_SRPIPC_SRPIFPC_MASK)

#define MCM_SRPIPC_SRPIFV_MASK                   (0x80000000UL)
#define MCM_SRPIPC_SRPIFV_SHIFT                  (31UL)
/*! SRPIFV - Resource Protection Illegal Fault Valid */
#define MCM_SRPIPC_SRPIFV(x)                     (((uint32_t)(((uint32_t)(x)) << MCM_SRPIPC_SRPIFV_SHIFT)) & MCM_SRPIPC_SRPIFV_MASK)
/*! @} */

/*! @name SRPMPC - Resource Protection Misaligned PC */
/*! @{ */

#define MCM_SRPMPC_SRPMFPC_MASK                  (0x1FFFFFUL)
#define MCM_SRPMPC_SRPMFPC_SHIFT                 (0UL)
/*! SRPMFPC - Resource Protection Misaligned Faulting PC */
#define MCM_SRPMPC_SRPMFPC(x)                    (((uint32_t)(((uint32_t)(x)) << MCM_SRPMPC_SRPMFPC_SHIFT)) & MCM_SRPMPC_SRPMFPC_MASK)

#define MCM_SRPMPC_SRPMFV_MASK                   (0x80000000UL)
#define MCM_SRPMPC_SRPMFV_SHIFT                  (31UL)
/*! SRPMFV - Resource Protection Misaligned Fault Valid */
#define MCM_SRPMPC_SRPMFV(x)                     (((uint32_t)(((uint32_t)(x)) << MCM_SRPMPC_SRPMFV_SHIFT)) & MCM_SRPMPC_SRPMFV_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group MCM_Register_Masks */


/*!
 * @}
 */ /* end of group MCM_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__CWCC__)
  #pragma pop
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* MCM_H_ */

