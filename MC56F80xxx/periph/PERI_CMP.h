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
**     Version:             rev. 1.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for CMP
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2022-01-12)
**         Initial version.
**     - rev. 1.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_CMP.h
 * @version 1.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for CMP
 *
 * CMSIS Peripheral Access Layer for CMP
 */

#if !defined(PERI_CMP_H_)
#define PERI_CMP_H_                              /**< Symbol preventing repeated inclusion */

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
   -- Mapping Information
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Mapping_Information Mapping Information
 * @{
 */

/** Mapping Information */
#if !defined(CMP_INPUT_MUX_T_)
#define CMP_INPUT_MUX_T_
/*! @brief CMP input mux control */
typedef enum _cmp_input_mux
{
    kCMP_CMPAInputMux0GPIOA1        = 0U,          /**< CMPA input mux 0 from GPIOA1 */
    kCMP_CMPAInputMux1GPIOA2        = 1U,          /**< CMPA input mux 1 from GPIOA2 */
    kCMP_CMPAInputMux2GPIOA3        = 2U,          /**< CMPA input mux 2 from GPIOA3 */
    kCMP_CMPAInputMux3GPIOA0        = 3U,          /**< CMPA input mux 3 from GPIOA0 */
    kCMP_CMPAInputMux4GPIOA4        = 4U,          /**< CMPA input mux 4 from GPIOA4 */
    kCMP_CMPAInputMux5GPIOC6        = 5U,          /**< CMPA input mux 5 from GPIOC6 */
    kCMP_CMPAInputMux6OPAMPA        = 6U,          /**< CMPA input mux 6 from OPAMPA OUT */
    kCMP_CMPAInputMux7InternalDAC   = 7U,          /**< CMPA input mux 7 from CMP internal DAC */
    kCMP_CMPBInputMux0GPIOB1        = 0U,          /**< CMPB input mux 0 from GPIOB1 */
    kCMP_CMPBInputMux1GPIOB6        = 1U,          /**< CMPB input mux 1 from GPIOB6 */
    kCMP_CMPBInputMux2GPIOB7        = 2U,          /**< CMPB input mux 2 from GPIOB7 */
    kCMP_CMPBInputMux3GPIOB0        = 3U,          /**< CMPB input mux 3 from GPIOB0 */
    kCMP_CMPBInputMux4GPIOA5        = 4U,          /**< CMPB input mux 4 from GPIOA5 */
    kCMP_CMPBInputMux5GPIOC6        = 5U,          /**< CMPB input mux 5 from GPIOC6 */
    kCMP_CMPBInputMux6Reserved      = 6U,          /**< CMPB input mux 6 from Reserved */
    kCMP_CMPBInputMux7InternalDAC   = 7U,          /**< CMPB input mux 7 from CMP internal DAC */
    kCMP_CMPCInputMux0GPIOB3        = 0U,          /**< CMPC input mux 0 from GPIOB3 */
    kCMP_CMPCInputMux1GPIOB4        = 1U,          /**< CMPC input mux 1 from GPIOB4 */
    kCMP_CMPCInputMux2GPIOB5        = 2U,          /**< CMPC input mux 2 from GPIOB5 */
    kCMP_CMPCInputMux3GPIOB2        = 3U,          /**< CMPC input mux 3 from GPIOB2 */
    kCMP_CMPCInputMux4GPIOA6        = 4U,          /**< CMPC input mux 4 from GPIOA6 */
    kCMP_CMPCInputMux5GPIOC6        = 5U,          /**< CMPC input mux 5 from GPIOC6 */
    kCMP_CMPCInputMux6OPAMPA        = 6U,          /**< CMPC input mux 6 from OPAMPA OUT */
    kCMP_CMPCInputMux7InternalDAC   = 7U,          /**< CMPC input mux 7 from CMP internal DAC */
    kCMP_CMPBInputMux6OPAMPB        = 6U,          /**< CMPB input mux 6 from OPAMPB OUT */
} cmp_input_mux_t;
#endif /* CMP_INPUT_MUX_T_ */


/*!
 * @}
 */ /* end of group Mapping_Information */


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
   -- CMP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMP_Peripheral_Access_Layer CMP Peripheral Access Layer
 * @{
 */

/** CMP - Register Layout Typedef */
typedef struct {
  __IO uint16_t CR0;                               /**< CMP Control Register 0, offset: 0x0 */
  __IO uint16_t CR1;                               /**< CMP Control Register 1, offset: 0x1 */
  __IO uint16_t FPR;                               /**< CMP Filter Period Register, offset: 0x2 */
  __IO uint16_t SCR;                               /**< CMP Status and Control Register, offset: 0x3 */
  __IO uint16_t DACCR;                             /**< DAC Control Register, offset: 0x4 */
  __IO uint16_t MUXCR;                             /**< MUX Control Register, offset: 0x5 */
} CMP_Type;

/* ----------------------------------------------------------------------------
   -- CMP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMP_Register_Masks CMP Register Masks
 * @{
 */

/*! @name CR0 - CMP Control Register 0 */
/*! @{ */

#define CMP_CR0_HYSTCTR_MASK                     (0x3U)
#define CMP_CR0_HYSTCTR_SHIFT                    (0U)
/*! HYSTCTR - Comparator hard block hysteresis control
 *  0b00..Level 0 The hard block output has no hysteresis internally.
 *  0b01..Level 1 The hard block output has 20 mv hysteresis internally.
 *  0b10..Level 2 The hard block output has 40 mv hysteresis internally.
 *  0b11..Level 3 The hard block output has 60 mv hysteresis internally.
 */
#define CMP_CR0_HYSTCTR(x)                       (((uint16_t)(((uint16_t)(x)) << CMP_CR0_HYSTCTR_SHIFT)) & CMP_CR0_HYSTCTR_MASK)

#define CMP_CR0_FILTER_CNT_MASK                  (0x70U)
#define CMP_CR0_FILTER_CNT_SHIFT                 (4U)
/*! FILTER_CNT - Filter Sample Count
 *  0b000..Filter is disabled. If SE = 1, then COUT is a logic 0. This is not a legal state, and is not recommended. If SE = 0, COUT = COUTA.
 *  0b001..One sample must agree. The comparator output is simply sampled.
 *  0b010..2 consecutive samples must agree.
 *  0b011..3 consecutive samples must agree.
 *  0b100..4 consecutive samples must agree.
 *  0b101..5 consecutive samples must agree.
 *  0b110..6 consecutive samples must agree.
 *  0b111..7 consecutive samples must agree.
 */
#define CMP_CR0_FILTER_CNT(x)                    (((uint16_t)(((uint16_t)(x)) << CMP_CR0_FILTER_CNT_SHIFT)) & CMP_CR0_FILTER_CNT_MASK)
/*! @} */

/*! @name CR1 - CMP Control Register 1 */
/*! @{ */

#define CMP_CR1_EN_MASK                          (0x1U)
#define CMP_CR1_EN_SHIFT                         (0U)
/*! EN - Comparator Module Enable
 *  0b0..Analog Comparator is disabled.
 *  0b1..Analog Comparator is enabled.
 */
#define CMP_CR1_EN(x)                            (((uint16_t)(((uint16_t)(x)) << CMP_CR1_EN_SHIFT)) & CMP_CR1_EN_MASK)

#define CMP_CR1_OPE_MASK                         (0x2U)
#define CMP_CR1_OPE_SHIFT                        (1U)
/*! OPE - Comparator Output Pin Enable
 *  0b0..CMPO is not available on the associated CMPO output pin. For devices that use explicit muxing control to
 *       I/O pin functions (DSC and non-Flexis ColdFire devices): If the comparator does not own the pin, this
 *       field has no effect.
 *  0b1..CMPO is available on the associated CMPO output pin. For devices that use explicit muxing control to I/O
 *       pin functions (DSC and non-Flexis ColdFire devices): The comparator output (CMPO) is driven out on the
 *       associated CMPO output pin if the comparator owns the pin. If the comparator does not own the field, this bit
 *       has no effect.
 */
#define CMP_CR1_OPE(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_CR1_OPE_SHIFT)) & CMP_CR1_OPE_MASK)

#define CMP_CR1_COS_MASK                         (0x4U)
#define CMP_CR1_COS_SHIFT                        (2U)
/*! COS - Comparator Output Select
 *  0b0..Set the filtered comparator output (CMPO) to equal COUT.
 *  0b1..Set the unfiltered comparator output (CMPO) to equal COUTA.
 */
#define CMP_CR1_COS(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_CR1_COS_SHIFT)) & CMP_CR1_COS_MASK)

#define CMP_CR1_INV_MASK                         (0x8U)
#define CMP_CR1_INV_SHIFT                        (3U)
/*! INV - Comparator INVERT
 *  0b0..Does not invert the comparator output.
 *  0b1..Inverts the comparator output.
 */
#define CMP_CR1_INV(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_CR1_INV_SHIFT)) & CMP_CR1_INV_MASK)

#define CMP_CR1_PMODE_MASK                       (0x10U)
#define CMP_CR1_PMODE_SHIFT                      (4U)
/*! PMODE - Power Mode Select
 *  0b0..Low-Speed (LS) Comparison mode selected. In this mode, CMP has slower output propagation delay and lower current consumption.
 *  0b1..High-Speed (HS) Comparison mode selected. In this mode, CMP has faster output propagation delay and higher current consumption.
 */
#define CMP_CR1_PMODE(x)                         (((uint16_t)(((uint16_t)(x)) << CMP_CR1_PMODE_SHIFT)) & CMP_CR1_PMODE_MASK)

#define CMP_CR1_COWZ_MASK                        (0x20U)
#define CMP_CR1_COWZ_SHIFT                       (5U)
/*! COWZ - COUTA out of window is zero enable.
 *  0b0..In windowing mode, when WINDOW signal changes from 1 to 0, COUTA holds the last latched value before WINDOW signal falls to 0.
 *  0b1..In windowing mode, when WINDOW signal changes from 1 to 0, COUTA is forced to 0.
 */
#define CMP_CR1_COWZ(x)                          (((uint16_t)(((uint16_t)(x)) << CMP_CR1_COWZ_SHIFT)) & CMP_CR1_COWZ_MASK)

#define CMP_CR1_WE_MASK                          (0x40U)
#define CMP_CR1_WE_SHIFT                         (6U)
/*! WE - Windowing Enable
 *  0b0..Windowing mode is not selected.
 *  0b1..Windowing mode is selected.
 */
#define CMP_CR1_WE(x)                            (((uint16_t)(((uint16_t)(x)) << CMP_CR1_WE_SHIFT)) & CMP_CR1_WE_MASK)

#define CMP_CR1_SE_MASK                          (0x80U)
#define CMP_CR1_SE_SHIFT                         (7U)
/*! SE - Sample Enable
 *  0b0..Sampling mode is not selected.
 *  0b1..Sampling mode is selected.
 */
#define CMP_CR1_SE(x)                            (((uint16_t)(((uint16_t)(x)) << CMP_CR1_SE_SHIFT)) & CMP_CR1_SE_MASK)
/*! @} */

/*! @name FPR - CMP Filter Period Register */
/*! @{ */

#define CMP_FPR_FILT_PER_MASK                    (0xFFU)
#define CMP_FPR_FILT_PER_SHIFT                   (0U)
/*! FILT_PER - Filter Sample Period */
#define CMP_FPR_FILT_PER(x)                      (((uint16_t)(((uint16_t)(x)) << CMP_FPR_FILT_PER_SHIFT)) & CMP_FPR_FILT_PER_MASK)
/*! @} */

/*! @name SCR - CMP Status and Control Register */
/*! @{ */

#define CMP_SCR_COUT_MASK                        (0x1U)
#define CMP_SCR_COUT_SHIFT                       (0U)
/*! COUT - Analog Comparator Output */
#define CMP_SCR_COUT(x)                          (((uint16_t)(((uint16_t)(x)) << CMP_SCR_COUT_SHIFT)) & CMP_SCR_COUT_MASK)

#define CMP_SCR_CFF_MASK                         (0x2U)
#define CMP_SCR_CFF_SHIFT                        (1U)
/*! CFF - Analog Comparator Flag Falling
 *  0b0..Falling-edge on COUT has not been detected.
 *  0b1..Falling-edge on COUT has occurred.
 */
#define CMP_SCR_CFF(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_SCR_CFF_SHIFT)) & CMP_SCR_CFF_MASK)

#define CMP_SCR_CFR_MASK                         (0x4U)
#define CMP_SCR_CFR_SHIFT                        (2U)
/*! CFR - Analog Comparator Flag Rising
 *  0b0..Rising-edge on COUT has not been detected.
 *  0b1..Rising-edge on COUT has occurred.
 */
#define CMP_SCR_CFR(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_SCR_CFR_SHIFT)) & CMP_SCR_CFR_MASK)

#define CMP_SCR_IEF_MASK                         (0x8U)
#define CMP_SCR_IEF_SHIFT                        (3U)
/*! IEF - Comparator Interrupt Enable Falling
 *  0b0..Interrupt is disabled.
 *  0b1..Interrupt is enabled.
 */
#define CMP_SCR_IEF(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_SCR_IEF_SHIFT)) & CMP_SCR_IEF_MASK)

#define CMP_SCR_IER_MASK                         (0x10U)
#define CMP_SCR_IER_SHIFT                        (4U)
/*! IER - Comparator Interrupt Enable Rising
 *  0b0..Interrupt is disabled.
 *  0b1..Interrupt is enabled.
 */
#define CMP_SCR_IER(x)                           (((uint16_t)(((uint16_t)(x)) << CMP_SCR_IER_SHIFT)) & CMP_SCR_IER_MASK)

#define CMP_SCR_DMAEN_MASK                       (0x40U)
#define CMP_SCR_DMAEN_SHIFT                      (6U)
/*! DMAEN - DMA Enable Control
 *  0b0..DMA is disabled.
 *  0b1..DMA is enabled.
 */
#define CMP_SCR_DMAEN(x)                         (((uint16_t)(((uint16_t)(x)) << CMP_SCR_DMAEN_SHIFT)) & CMP_SCR_DMAEN_MASK)
/*! @} */

/*! @name DACCR - DAC Control Register */
/*! @{ */

#define CMP_DACCR_VOSEL_MASK                     (0xFFU)
#define CMP_DACCR_VOSEL_SHIFT                    (0U)
/*! VOSEL - DAC Output Voltage Select */
#define CMP_DACCR_VOSEL(x)                       (((uint16_t)(((uint16_t)(x)) << CMP_DACCR_VOSEL_SHIFT)) & CMP_DACCR_VOSEL_MASK)
/*! @} */

/*! @name MUXCR - MUX Control Register */
/*! @{ */

#define CMP_MUXCR_MSEL_MASK                      (0x7U)
#define CMP_MUXCR_MSEL_SHIFT                     (0U)
/*! MSEL - Minus Input Mux Control
 *  0b000..IN0
 *  0b001..IN1
 *  0b010..IN2
 *  0b011..IN3
 *  0b100..IN4
 *  0b101..IN5
 *  0b110..IN6
 *  0b111..IN7
 */
#define CMP_MUXCR_MSEL(x)                        (((uint16_t)(((uint16_t)(x)) << CMP_MUXCR_MSEL_SHIFT)) & CMP_MUXCR_MSEL_MASK)

#define CMP_MUXCR_PSEL_MASK                      (0x38U)
#define CMP_MUXCR_PSEL_SHIFT                     (3U)
/*! PSEL - Plus Input Mux Control
 *  0b000..IN0
 *  0b001..IN1
 *  0b010..IN2
 *  0b011..IN3
 *  0b100..IN4
 *  0b101..IN5
 *  0b110..IN6
 *  0b111..IN7
 */
#define CMP_MUXCR_PSEL(x)                        (((uint16_t)(((uint16_t)(x)) << CMP_MUXCR_PSEL_SHIFT)) & CMP_MUXCR_PSEL_MASK)

#define CMP_MUXCR_VRSEL_MASK                     (0x40U)
#define CMP_MUXCR_VRSEL_SHIFT                    (6U)
/*! VRSEL - Supply Voltage Reference Source Select
 *  0b0..Vin1 is selected as resistor ladder network supply reference.
 *  0b1..Vin2 is selected as resistor ladder network supply reference.
 */
#define CMP_MUXCR_VRSEL(x)                       (((uint16_t)(((uint16_t)(x)) << CMP_MUXCR_VRSEL_SHIFT)) & CMP_MUXCR_VRSEL_MASK)

#define CMP_MUXCR_DACEN_MASK                     (0x80U)
#define CMP_MUXCR_DACEN_SHIFT                    (7U)
/*! DACEN - DAC Enable
 *  0b0..DAC is disabled.
 *  0b1..DAC is enabled.
 */
#define CMP_MUXCR_DACEN(x)                       (((uint16_t)(((uint16_t)(x)) << CMP_MUXCR_DACEN_SHIFT)) & CMP_MUXCR_DACEN_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CMP_Register_Masks */


/*!
 * @}
 */ /* end of group CMP_Peripheral_Access_Layer */


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


#endif  /* PERI_CMP_H_ */

