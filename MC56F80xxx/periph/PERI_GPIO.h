/*
** ###################################################################
**     Processors:          MC56F80623VLC
**                          MC56F80626VLF
**                          MC56F80643VLC
**                          MC56F80646VLF
**                          MC56F80648VLH
**                          MC56F80723VLC
**                          MC56F80726VLF
**                          MC56F80733VFM
**                          MC56F80736VLF
**                          MC56F80738VLH
**                          MC56F80743VFM
**                          MC56F80743VLC
**                          MC56F80746MLF
**                          MC56F80746VLF
**                          MC56F80748MLH
**                          MC56F80748VLH
**
**     Version:             rev. 0.1, 2022-01-12
**     Build:               b240709
**
**     Abstract:
**         CMSIS Peripheral Access Layer for GPIO
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2022-01-12)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file GPIO.h
 * @version 0.1
 * @date 2022-01-12
 * @brief CMSIS Peripheral Access Layer for GPIO
 *
 * CMSIS Peripheral Access Layer for GPIO
 */

#if !defined(GPIO_H_)
#define GPIO_H_                                  /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MC56F80623VLC))
#include "MC56F80623_COMMON.h"
#elif (defined(CPU_MC56F80626VLF))
#include "MC56F80626_COMMON.h"
#elif (defined(CPU_MC56F80643VLC))
#include "MC56F80643_COMMON.h"
#elif (defined(CPU_MC56F80646VLF))
#include "MC56F80646_COMMON.h"
#elif (defined(CPU_MC56F80648VLH))
#include "MC56F80648_COMMON.h"
#elif (defined(CPU_MC56F80723VLC))
#include "MC56F80723_COMMON.h"
#elif (defined(CPU_MC56F80726VLF))
#include "MC56F80726_COMMON.h"
#elif (defined(CPU_MC56F80733VFM))
#include "MC56F80733_COMMON.h"
#elif (defined(CPU_MC56F80736VLF))
#include "MC56F80736_COMMON.h"
#elif (defined(CPU_MC56F80738VLH))
#include "MC56F80738_COMMON.h"
#elif (defined(CPU_MC56F80743VFM) || defined(CPU_MC56F80743VLC))
#include "MC56F80743_COMMON.h"
#elif (defined(CPU_MC56F80746MLF) || defined(CPU_MC56F80746VLF))
#include "MC56F80746_COMMON.h"
#elif (defined(CPU_MC56F80748MLH) || defined(CPU_MC56F80748VLH))
#include "MC56F80748_COMMON.h"
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
   -- GPIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Peripheral_Access_Layer GPIO Peripheral Access Layer
 * @{
 */

/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint16_t PUR;                               /**< GPIO Pull Resistor Enable Register, offset: 0x0 */
  __IO uint16_t DR;                                /**< GPIO Data Register, offset: 0x1 */
  __IO uint16_t DDR;                               /**< GPIO Data Direction Register, offset: 0x2 */
  __IO uint16_t PER;                               /**< GPIO Peripheral Enable Register, offset: 0x3 */
  __IO uint16_t IAR;                               /**< GPIO Interrupt Assert Register, offset: 0x4 */
  __IO uint16_t IENR;                              /**< GPIO Interrupt Enable Register, offset: 0x5 */
  __IO uint16_t IPOLR;                             /**< GPIO Interrupt Polarity Register, offset: 0x6 */
  __I  uint16_t IPR;                               /**< GPIO Interrupt Pending Register, offset: 0x7 */
  __IO uint16_t IESR;                              /**< GPIO Interrupt Edge Sensitive Register, offset: 0x8 */
  __IO uint16_t PPMODE;                            /**< GPIO Push-Pull Mode Register, offset: 0x9 */
  __I  uint16_t RAWDATA;                           /**< GPIO Raw Data Register, offset: 0xA */
  __IO uint16_t DRIVE;                             /**< GPIO Drive Strength Control Register, offset: 0xB */
  __IO uint16_t PUS;                               /**< GPIO Pull Resistor Type Select, offset: 0xC */
  __IO uint16_t SRE;                               /**< Slew Rate Control Register, offset: 0xD */
} GPIO_Type;

/* ----------------------------------------------------------------------------
   -- GPIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Register_Masks GPIO Register Masks
 * @{
 */

/*! @name PUR - GPIO Pull Resistor Enable Register */
/*! @{ */

#define GPIO_PUR_PU_MASK                         (0xFFFFU)
#define GPIO_PUR_PU_SHIFT                        (0U)
/*! PU - Pull Resistor Enable Bits */
#define GPIO_PUR_PU(x)                           (((uint16_t)(((uint16_t)(x)) << GPIO_PUR_PU_SHIFT)) & GPIO_PUR_PU_MASK)
/*! @} */

/*! @name DR - GPIO Data Register */
/*! @{ */

#define GPIO_DR_D_MASK                           (0xFFFFU)
#define GPIO_DR_D_SHIFT                          (0U)
/*! D - Data Bits */
#define GPIO_DR_D(x)                             (((uint16_t)(((uint16_t)(x)) << GPIO_DR_D_SHIFT)) & GPIO_DR_D_MASK)
/*! @} */

/*! @name DDR - GPIO Data Direction Register */
/*! @{ */

#define GPIO_DDR_DD_MASK                         (0xFFFFU)
#define GPIO_DDR_DD_SHIFT                        (0U)
/*! DD - Data Direction Bits */
#define GPIO_DDR_DD(x)                           (((uint16_t)(((uint16_t)(x)) << GPIO_DDR_DD_SHIFT)) & GPIO_DDR_DD_MASK)
/*! @} */

/*! @name PER - GPIO Peripheral Enable Register */
/*! @{ */

#define GPIO_PER_PE_MASK                         (0xFFFFU)
#define GPIO_PER_PE_SHIFT                        (0U)
/*! PE - Peripheral Enable Bits */
#define GPIO_PER_PE(x)                           (((uint16_t)(((uint16_t)(x)) << GPIO_PER_PE_SHIFT)) & GPIO_PER_PE_MASK)
/*! @} */

/*! @name IAR - GPIO Interrupt Assert Register */
/*! @{ */

#define GPIO_IAR_IA_MASK                         (0xFFFFU)
#define GPIO_IAR_IA_SHIFT                        (0U)
/*! IA - Interrupt Assert Bits */
#define GPIO_IAR_IA(x)                           (((uint16_t)(((uint16_t)(x)) << GPIO_IAR_IA_SHIFT)) & GPIO_IAR_IA_MASK)
/*! @} */

/*! @name IENR - GPIO Interrupt Enable Register */
/*! @{ */

#define GPIO_IENR_IEN_MASK                       (0xFFFFU)
#define GPIO_IENR_IEN_SHIFT                      (0U)
/*! IEN - Interrupt Enable Bits */
#define GPIO_IENR_IEN(x)                         (((uint16_t)(((uint16_t)(x)) << GPIO_IENR_IEN_SHIFT)) & GPIO_IENR_IEN_MASK)
/*! @} */

/*! @name IPOLR - GPIO Interrupt Polarity Register */
/*! @{ */

#define GPIO_IPOLR_IPOL_MASK                     (0xFFFFU)
#define GPIO_IPOLR_IPOL_SHIFT                    (0U)
/*! IPOL - Interrupt Polarity Bits */
#define GPIO_IPOLR_IPOL(x)                       (((uint16_t)(((uint16_t)(x)) << GPIO_IPOLR_IPOL_SHIFT)) & GPIO_IPOLR_IPOL_MASK)
/*! @} */

/*! @name IPR - GPIO Interrupt Pending Register */
/*! @{ */

#define GPIO_IPR_IP_MASK                         (0xFFFFU)
#define GPIO_IPR_IP_SHIFT                        (0U)
/*! IP - Interrupt Pending Bits */
#define GPIO_IPR_IP(x)                           (((uint16_t)(((uint16_t)(x)) << GPIO_IPR_IP_SHIFT)) & GPIO_IPR_IP_MASK)
/*! @} */

/*! @name IESR - GPIO Interrupt Edge Sensitive Register */
/*! @{ */

#define GPIO_IESR_IES_MASK                       (0xFFFFU)
#define GPIO_IESR_IES_SHIFT                      (0U)
/*! IES - Interrupt Edge-Sensitive Bits */
#define GPIO_IESR_IES(x)                         (((uint16_t)(((uint16_t)(x)) << GPIO_IESR_IES_SHIFT)) & GPIO_IESR_IES_MASK)
/*! @} */

/*! @name PPMODE - GPIO Push-Pull Mode Register */
/*! @{ */

#define GPIO_PPMODE_PPMODE_MASK                  (0xFFFFU)
#define GPIO_PPMODE_PPMODE_SHIFT                 (0U)
/*! PPMODE - Push-Pull Mode Bits */
#define GPIO_PPMODE_PPMODE(x)                    (((uint16_t)(((uint16_t)(x)) << GPIO_PPMODE_PPMODE_SHIFT)) & GPIO_PPMODE_PPMODE_MASK)
/*! @} */

/*! @name RAWDATA - GPIO Raw Data Register */
/*! @{ */

#define GPIO_RAWDATA_RAW_DATA_MASK               (0xFFFFU)
#define GPIO_RAWDATA_RAW_DATA_SHIFT              (0U)
/*! RAW_DATA - Raw Data Bits */
#define GPIO_RAWDATA_RAW_DATA(x)                 (((uint16_t)(((uint16_t)(x)) << GPIO_RAWDATA_RAW_DATA_SHIFT)) & GPIO_RAWDATA_RAW_DATA_MASK)
/*! @} */

/*! @name DRIVE - GPIO Drive Strength Control Register */
/*! @{ */

#define GPIO_DRIVE_DRIVE_MASK                    (0xFFFFU)
#define GPIO_DRIVE_DRIVE_SHIFT                   (0U)
/*! DRIVE - Drive Strength Selector Bits */
#define GPIO_DRIVE_DRIVE(x)                      (((uint16_t)(((uint16_t)(x)) << GPIO_DRIVE_DRIVE_SHIFT)) & GPIO_DRIVE_DRIVE_MASK)
/*! @} */

/*! @name PUS - GPIO Pull Resistor Type Select */
/*! @{ */

#define GPIO_PUS_PUS_MASK                        (0xFFFFU)
#define GPIO_PUS_PUS_SHIFT                       (0U)
/*! PUS - Pull Resistor Type Select Bits */
#define GPIO_PUS_PUS(x)                          (((uint16_t)(((uint16_t)(x)) << GPIO_PUS_PUS_SHIFT)) & GPIO_PUS_PUS_MASK)
/*! @} */

/*! @name SRE - Slew Rate Control Register */
/*! @{ */

#define GPIO_SRE_SRE_MASK                        (0xFFFFU)
#define GPIO_SRE_SRE_SHIFT                       (0U)
/*! SRE - Slew Rate Enable */
#define GPIO_SRE_SRE(x)                          (((uint16_t)(((uint16_t)(x)) << GPIO_SRE_SRE_SHIFT)) & GPIO_SRE_SRE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group GPIO_Register_Masks */


/*!
 * @}
 */ /* end of group GPIO_Peripheral_Access_Layer */


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


#endif  /* GPIO_H_ */

