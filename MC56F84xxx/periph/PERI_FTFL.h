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
**     Version:             rev. 3.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for FTFL
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 2.0 (2021-02-06)
**         Initial version.
**     - rev. 3.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_FTFL.h
 * @version 3.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for FTFL
 *
 * CMSIS Peripheral Access Layer for FTFL
 */

#if !defined(PERI_FTFL_H_)
#define PERI_FTFL_H_                             /**< Symbol preventing repeated inclusion */

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
   -- FTFL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FTFL_Peripheral_Access_Layer FTFL Peripheral Access Layer
 * @{
 */

/** FTFL - Register Layout Typedef */
typedef struct {
  __IO uint8_t FSTAT;                              /**< Flash Status Register, offset: 0x0 */
  __IO uint8_t FCNFG;                              /**< Flash Configuration Register, offset: 0x1 */
  __I  uint8_t FSEC;                               /**< Flash Security Register, offset: 0x2 */
  __I  uint8_t FOPT;                               /**< Flash Option Register, offset: 0x3 */
  __IO uint8_t FCCOB3;                             /**< Flash Common Command Object Registers, offset: 0x4 */
  __IO uint8_t FCCOB2;                             /**< Flash Common Command Object Registers, offset: 0x5 */
  __IO uint8_t FCCOB1;                             /**< Flash Common Command Object Registers, offset: 0x6 */
  __IO uint8_t FCCOB0;                             /**< Flash Common Command Object Registers, offset: 0x7 */
  __IO uint8_t FCCOB7;                             /**< Flash Common Command Object Registers, offset: 0x8 */
  __IO uint8_t FCCOB6;                             /**< Flash Common Command Object Registers, offset: 0x9 */
  __IO uint8_t FCCOB5;                             /**< Flash Common Command Object Registers, offset: 0xA */
  __IO uint8_t FCCOB4;                             /**< Flash Common Command Object Registers, offset: 0xB */
  __IO uint8_t FCCOBB;                             /**< Flash Common Command Object Registers, offset: 0xC */
  __IO uint8_t FCCOBA;                             /**< Flash Common Command Object Registers, offset: 0xD */
  __IO uint8_t FCCOB9;                             /**< Flash Common Command Object Registers, offset: 0xE */
  __IO uint8_t FCCOB8;                             /**< Flash Common Command Object Registers, offset: 0xF */
  __IO uint8_t FPROT3;                             /**< Program Flash Protection Registers, offset: 0x10 */
  __IO uint8_t FPROT2;                             /**< Program Flash Protection Registers, offset: 0x11 */
  __IO uint8_t FPROT1;                             /**< Program Flash Protection Registers, offset: 0x12 */
  __IO uint8_t FPROT0;                             /**< Program Flash Protection Registers, offset: 0x13 */
       uint8_t RESERVED_0[2];
  __IO uint8_t FEPROT;                             /**< EEPROM Protection Register, offset: 0x16 */
  __IO uint8_t FDPROT;                             /**< Data Flash Protection Register, offset: 0x17 */
} FTFL_Type;

/* ----------------------------------------------------------------------------
   -- FTFL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FTFL_Register_Masks FTFL Register Masks
 * @{
 */

/*! @name FSTAT - Flash Status Register */
/*! @{ */

#define FTFL_FSTAT_MGSTAT0_MASK                  (0x1U)
#define FTFL_FSTAT_MGSTAT0_SHIFT                 (0U)
/*! MGSTAT0 - Memory Controller Command Completion Status Flag */
#define FTFL_FSTAT_MGSTAT0(x)                    (((uint8_t)(((uint8_t)(x)) << FTFL_FSTAT_MGSTAT0_SHIFT)) & FTFL_FSTAT_MGSTAT0_MASK)

#define FTFL_FSTAT_FPVIOL_MASK                   (0x10U)
#define FTFL_FSTAT_FPVIOL_SHIFT                  (4U)
/*! FPVIOL - Flash Protection Violation Flag
 *  0b0..No protection violation detected
 *  0b1..Protection violation detected
 */
#define FTFL_FSTAT_FPVIOL(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FSTAT_FPVIOL_SHIFT)) & FTFL_FSTAT_FPVIOL_MASK)

#define FTFL_FSTAT_ACCERR_MASK                   (0x20U)
#define FTFL_FSTAT_ACCERR_SHIFT                  (5U)
/*! ACCERR - Flash Access Error Flag
 *  0b0..No access error detected
 *  0b1..Access error detected
 */
#define FTFL_FSTAT_ACCERR(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FSTAT_ACCERR_SHIFT)) & FTFL_FSTAT_ACCERR_MASK)

#define FTFL_FSTAT_RDCOLERR_MASK                 (0x40U)
#define FTFL_FSTAT_RDCOLERR_SHIFT                (6U)
/*! RDCOLERR - FTFL Read Collision Error Flag
 *  0b0..No collision error detected
 *  0b1..Collision error detected
 */
#define FTFL_FSTAT_RDCOLERR(x)                   (((uint8_t)(((uint8_t)(x)) << FTFL_FSTAT_RDCOLERR_SHIFT)) & FTFL_FSTAT_RDCOLERR_MASK)

#define FTFL_FSTAT_CCIF_MASK                     (0x80U)
#define FTFL_FSTAT_CCIF_SHIFT                    (7U)
/*! CCIF - Command Complete Interrupt Flag
 *  0b0..FTFL command or EEPROM file system operation in progress
 *  0b1..FTFL command or EEPROM file system operation has completed
 */
#define FTFL_FSTAT_CCIF(x)                       (((uint8_t)(((uint8_t)(x)) << FTFL_FSTAT_CCIF_SHIFT)) & FTFL_FSTAT_CCIF_MASK)
/*! @} */

/*! @name FCNFG - Flash Configuration Register */
/*! @{ */

#define FTFL_FCNFG_EEERDY_MASK                   (0x1U)
#define FTFL_FCNFG_EEERDY_SHIFT                  (0U)
/*! EEERDY
 *  0b0..FlexRAM is not available for EEPROM operation.
 *  0b1..FlexRAM is available for EEPROM operations where: reads from the FlexRAM return data previously written
 *       to the FlexRAM in EEPROM mode and writes to the FlexRAM clear EEERDY and launch an EEPROM operation to
 *       store the written data in the FlexRAM and EEPROM backup.
 */
#define FTFL_FCNFG_EEERDY(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_EEERDY_SHIFT)) & FTFL_FCNFG_EEERDY_MASK)

#define FTFL_FCNFG_RAMRDY_MASK                   (0x2U)
#define FTFL_FCNFG_RAMRDY_SHIFT                  (1U)
/*! RAMRDY - RAM Ready
 *  0b0..FlexRAM is not available for traditional RAM access.
 *  0b1..FlexRAM is available as traditional RAM only; writes to the FlexRAM do not trigger EEPROM operations.
 */
#define FTFL_FCNFG_RAMRDY(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_RAMRDY_SHIFT)) & FTFL_FCNFG_RAMRDY_MASK)

#define FTFL_FCNFG_PFLSH_MASK                    (0x4U)
#define FTFL_FCNFG_PFLSH_SHIFT                   (2U)
/*! PFLSH - FTFL configuration
 *  0b0..FTFL configured for FlexMemory that supports data flash and/or EEPROM
 *  0b1..Reserved
 */
#define FTFL_FCNFG_PFLSH(x)                      (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_PFLSH_SHIFT)) & FTFL_FCNFG_PFLSH_MASK)

#define FTFL_FCNFG_ERSSUSP_MASK                  (0x10U)
#define FTFL_FCNFG_ERSSUSP_SHIFT                 (4U)
/*! ERSSUSP - Erase Suspend
 *  0b0..No suspend requested
 *  0b1..Suspend the current Erase Flash Sector command execution.
 */
#define FTFL_FCNFG_ERSSUSP(x)                    (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_ERSSUSP_SHIFT)) & FTFL_FCNFG_ERSSUSP_MASK)

#define FTFL_FCNFG_ERSAREQ_MASK                  (0x20U)
#define FTFL_FCNFG_ERSAREQ_SHIFT                 (5U)
/*! ERSAREQ - Erase All Request
 *  0b0..No request or request complete
 *  0b1..Request to: run the Erase All Blocks command, verify the erased state, program the security byte in the
 *       Flash Configuration Field to the unsecure state, and release MCU security by setting the FSEC[SEC] field to
 *       the unsecure state.
 */
#define FTFL_FCNFG_ERSAREQ(x)                    (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_ERSAREQ_SHIFT)) & FTFL_FCNFG_ERSAREQ_MASK)

#define FTFL_FCNFG_RDCOLLIE_MASK                 (0x40U)
#define FTFL_FCNFG_RDCOLLIE_SHIFT                (6U)
/*! RDCOLLIE - Read Collision Error Interrupt Enable
 *  0b0..Read collision error interrupt disabled
 *  0b1..Read collision error interrupt enabled. An interrupt request is generated whenever an FTFL read collision
 *       error is detected (see the description of FSTAT[RDCOLERR]).
 */
#define FTFL_FCNFG_RDCOLLIE(x)                   (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_RDCOLLIE_SHIFT)) & FTFL_FCNFG_RDCOLLIE_MASK)

#define FTFL_FCNFG_CCIE_MASK                     (0x80U)
#define FTFL_FCNFG_CCIE_SHIFT                    (7U)
/*! CCIE - Command Complete Interrupt Enable
 *  0b0..Command complete interrupt disabled
 *  0b1..Command complete interrupt enabled. An interrupt request is generated whenever the FSTAT[CCIF] flag is set.
 */
#define FTFL_FCNFG_CCIE(x)                       (((uint8_t)(((uint8_t)(x)) << FTFL_FCNFG_CCIE_SHIFT)) & FTFL_FCNFG_CCIE_MASK)
/*! @} */

/*! @name FSEC - Flash Security Register */
/*! @{ */

#define FTFL_FSEC_SEC_MASK                       (0x3U)
#define FTFL_FSEC_SEC_SHIFT                      (0U)
/*! SEC - Flash Security
 *  0b00..MCU security status is secure
 *  0b01..MCU security status is secure
 *  0b10..MCU security status is unsecure (The standard shipping condition of the FTFL is unsecure.)
 *  0b11..MCU security status is secure
 */
#define FTFL_FSEC_SEC(x)                         (((uint8_t)(((uint8_t)(x)) << FTFL_FSEC_SEC_SHIFT)) & FTFL_FSEC_SEC_MASK)

#define FTFL_FSEC_FSLACC_MASK                    (0xCU)
#define FTFL_FSEC_FSLACC_SHIFT                   (2U)
/*! FSLACC - Freescale Failure Analysis Access Code
 *  0b00..Freescale factory access granted
 *  0b01..Freescale factory access denied
 *  0b10..Freescale factory access denied
 *  0b11..Freescale factory access granted
 */
#define FTFL_FSEC_FSLACC(x)                      (((uint8_t)(((uint8_t)(x)) << FTFL_FSEC_FSLACC_SHIFT)) & FTFL_FSEC_FSLACC_MASK)

#define FTFL_FSEC_MEEN_MASK                      (0x30U)
#define FTFL_FSEC_MEEN_SHIFT                     (4U)
/*! MEEN - Mass Erase Enable Bits
 *  0b00..Mass erase is enabled
 *  0b01..Mass erase is enabled
 *  0b10..Mass erase is disabled
 *  0b11..Mass erase is enabled
 */
#define FTFL_FSEC_MEEN(x)                        (((uint8_t)(((uint8_t)(x)) << FTFL_FSEC_MEEN_SHIFT)) & FTFL_FSEC_MEEN_MASK)

#define FTFL_FSEC_KEYEN_MASK                     (0xC0U)
#define FTFL_FSEC_KEYEN_SHIFT                    (6U)
/*! KEYEN - Backdoor Key Security Enable
 *  0b00..Backdoor key access disabled
 *  0b01..Backdoor key access disabled (preferred KEYEN state to disable backdoor key access)
 *  0b10..Backdoor key access enabled
 *  0b11..Backdoor key access disabled
 */
#define FTFL_FSEC_KEYEN(x)                       (((uint8_t)(((uint8_t)(x)) << FTFL_FSEC_KEYEN_SHIFT)) & FTFL_FSEC_KEYEN_MASK)
/*! @} */

/*! @name FOPT - Flash Option Register */
/*! @{ */

#define FTFL_FOPT_OPT_MASK                       (0xFFU)
#define FTFL_FOPT_OPT_SHIFT                      (0U)
/*! OPT - Nonvolatile Option */
#define FTFL_FOPT_OPT(x)                         (((uint8_t)(((uint8_t)(x)) << FTFL_FOPT_OPT_SHIFT)) & FTFL_FOPT_OPT_MASK)
/*! @} */

/*! @name FCCOB3 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB3_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB3_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB3_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB3_CCOBn_SHIFT)) & FTFL_FCCOB3_CCOBn_MASK)
/*! @} */

/*! @name FCCOB2 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB2_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB2_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB2_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB2_CCOBn_SHIFT)) & FTFL_FCCOB2_CCOBn_MASK)
/*! @} */

/*! @name FCCOB1 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB1_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB1_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB1_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB1_CCOBn_SHIFT)) & FTFL_FCCOB1_CCOBn_MASK)
/*! @} */

/*! @name FCCOB0 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB0_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB0_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB0_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB0_CCOBn_SHIFT)) & FTFL_FCCOB0_CCOBn_MASK)
/*! @} */

/*! @name FCCOB7 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB7_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB7_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB7_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB7_CCOBn_SHIFT)) & FTFL_FCCOB7_CCOBn_MASK)
/*! @} */

/*! @name FCCOB6 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB6_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB6_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB6_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB6_CCOBn_SHIFT)) & FTFL_FCCOB6_CCOBn_MASK)
/*! @} */

/*! @name FCCOB5 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB5_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB5_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB5_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB5_CCOBn_SHIFT)) & FTFL_FCCOB5_CCOBn_MASK)
/*! @} */

/*! @name FCCOB4 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB4_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB4_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB4_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB4_CCOBn_SHIFT)) & FTFL_FCCOB4_CCOBn_MASK)
/*! @} */

/*! @name FCCOBB - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOBB_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOBB_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOBB_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOBB_CCOBn_SHIFT)) & FTFL_FCCOBB_CCOBn_MASK)
/*! @} */

/*! @name FCCOBA - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOBA_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOBA_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOBA_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOBA_CCOBn_SHIFT)) & FTFL_FCCOBA_CCOBn_MASK)
/*! @} */

/*! @name FCCOB9 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB9_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB9_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB9_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB9_CCOBn_SHIFT)) & FTFL_FCCOB9_CCOBn_MASK)
/*! @} */

/*! @name FCCOB8 - Flash Common Command Object Registers */
/*! @{ */

#define FTFL_FCCOB8_CCOBn_MASK                   (0xFFU)
#define FTFL_FCCOB8_CCOBn_SHIFT                  (0U)
#define FTFL_FCCOB8_CCOBn(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FCCOB8_CCOBn_SHIFT)) & FTFL_FCCOB8_CCOBn_MASK)
/*! @} */

/*! @name FPROT3 - Program Flash Protection Registers */
/*! @{ */

#define FTFL_FPROT3_PROT_MASK                    (0xFFU)
#define FTFL_FPROT3_PROT_SHIFT                   (0U)
/*! PROT - Program Flash Region Protect
 *  0b00000000..Program flash region is protected.
 *  0b00000001..Program flash region is not protected
 */
#define FTFL_FPROT3_PROT(x)                      (((uint8_t)(((uint8_t)(x)) << FTFL_FPROT3_PROT_SHIFT)) & FTFL_FPROT3_PROT_MASK)
/*! @} */

/*! @name FPROT2 - Program Flash Protection Registers */
/*! @{ */

#define FTFL_FPROT2_PROT_MASK                    (0xFFU)
#define FTFL_FPROT2_PROT_SHIFT                   (0U)
/*! PROT - Program Flash Region Protect
 *  0b00000000..Program flash region is protected.
 *  0b00000001..Program flash region is not protected
 */
#define FTFL_FPROT2_PROT(x)                      (((uint8_t)(((uint8_t)(x)) << FTFL_FPROT2_PROT_SHIFT)) & FTFL_FPROT2_PROT_MASK)
/*! @} */

/*! @name FPROT1 - Program Flash Protection Registers */
/*! @{ */

#define FTFL_FPROT1_PROT_MASK                    (0xFFU)
#define FTFL_FPROT1_PROT_SHIFT                   (0U)
/*! PROT - Program Flash Region Protect
 *  0b00000000..Program flash region is protected.
 *  0b00000001..Program flash region is not protected
 */
#define FTFL_FPROT1_PROT(x)                      (((uint8_t)(((uint8_t)(x)) << FTFL_FPROT1_PROT_SHIFT)) & FTFL_FPROT1_PROT_MASK)
/*! @} */

/*! @name FPROT0 - Program Flash Protection Registers */
/*! @{ */

#define FTFL_FPROT0_PROT_MASK                    (0xFFU)
#define FTFL_FPROT0_PROT_SHIFT                   (0U)
/*! PROT - Program Flash Region Protect
 *  0b00000000..Program flash region is protected.
 *  0b00000001..Program flash region is not protected
 */
#define FTFL_FPROT0_PROT(x)                      (((uint8_t)(((uint8_t)(x)) << FTFL_FPROT0_PROT_SHIFT)) & FTFL_FPROT0_PROT_MASK)
/*! @} */

/*! @name FEPROT - EEPROM Protection Register */
/*! @{ */

#define FTFL_FEPROT_EPROT_MASK                   (0xFFU)
#define FTFL_FEPROT_EPROT_SHIFT                  (0U)
/*! EPROT - EEPROM Region Protect
 *  0b00000000..EEPROM region is protected
 *  0b00000001..EEPROM region is not protected
 */
#define FTFL_FEPROT_EPROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FEPROT_EPROT_SHIFT)) & FTFL_FEPROT_EPROT_MASK)
/*! @} */

/*! @name FDPROT - Data Flash Protection Register */
/*! @{ */

#define FTFL_FDPROT_DPROT_MASK                   (0xFFU)
#define FTFL_FDPROT_DPROT_SHIFT                  (0U)
/*! DPROT - Data Flash Region Protect
 *  0b00000000..Data Flash region is protected
 *  0b00000001..Data Flash region is not protected
 */
#define FTFL_FDPROT_DPROT(x)                     (((uint8_t)(((uint8_t)(x)) << FTFL_FDPROT_DPROT_SHIFT)) & FTFL_FDPROT_DPROT_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group FTFL_Register_Masks */


/*!
 * @}
 */ /* end of group FTFL_Peripheral_Access_Layer */


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


#endif  /* PERI_FTFL_H_ */

