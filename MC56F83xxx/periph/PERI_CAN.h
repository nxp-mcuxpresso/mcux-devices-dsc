/*
** ###################################################################
**     Processors:          MC56F83663VLH
**                          MC56F83683VLH
**                          MC56F83686VLK
**                          MC56F83689VLL
**                          MC56F83763AVLH
**                          MC56F83763VLH
**                          MC56F83766VLK
**                          MC56F83769AVLL
**                          MC56F83769VLL
**                          MC56F83783AVLH
**                          MC56F83783VLH
**                          MC56F83786VLK
**                          MC56F83789AVLL
**                          MC56F83789VLL
**
**     Version:             rev. 0.1, 2019-09-23
**     Build:               b240709
**
**     Abstract:
**         CMSIS Peripheral Access Layer for CAN
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2019-09-23)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file CAN.h
 * @version 0.1
 * @date 2019-09-23
 * @brief CMSIS Peripheral Access Layer for CAN
 *
 * CMSIS Peripheral Access Layer for CAN
 */

#if !defined(CAN_H_)
#define CAN_H_                                   /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MC56F83663VLH))
#include "MC56F83663_COMMON.h"
#elif (defined(CPU_MC56F83683VLH))
#include "MC56F83683_COMMON.h"
#elif (defined(CPU_MC56F83686VLK))
#include "MC56F83686_COMMON.h"
#elif (defined(CPU_MC56F83689VLL))
#include "MC56F83689_COMMON.h"
#elif (defined(CPU_MC56F83763AVLH) || defined(CPU_MC56F83763VLH))
#include "MC56F83763_COMMON.h"
#elif (defined(CPU_MC56F83766VLK))
#include "MC56F83766_COMMON.h"
#elif (defined(CPU_MC56F83769AVLL) || defined(CPU_MC56F83769VLL))
#include "MC56F83769_COMMON.h"
#elif (defined(CPU_MC56F83783AVLH) || defined(CPU_MC56F83783VLH))
#include "MC56F83783_COMMON.h"
#elif (defined(CPU_MC56F83786VLK))
#include "MC56F83786_COMMON.h"
#elif (defined(CPU_MC56F83789AVLL) || defined(CPU_MC56F83789VLL))
#include "MC56F83789_COMMON.h"
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
   -- CAN Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAN_Peripheral_Access_Layer CAN Peripheral Access Layer
 * @{
 */

/** CAN - Size of Registers Arrays */
#define CAN_MB_SIZE_MB_8B_GROUP_MB_8B_WORD_8B_COUNT 2u
#define CAN_MB_SIZE_MB_8B_GROUP_MB_8B_COUNT       32u
#define CAN_MB_SIZE_MB_16B_GROUP_MB_16B_WORD_16B_COUNT 4u
#define CAN_MB_SIZE_MB_16B_GROUP_MB_16B_COUNT     21u
#define CAN_MB_SIZE_MB_32B_GROUP_MB_32B_WORD_32B_COUNT 8u
#define CAN_MB_SIZE_MB_32B_GROUP_MB_32B_COUNT     12u
#define CAN_MB_SIZE_MB_64B_GROUP_MB_64B_WORD_64B_COUNT 16u
#define CAN_MB_SIZE_MB_64B_GROUP_MB_64B_COUNT     7u
#define CAN_MB_SIZE_MB_GROUP_MB_COUNT             32u
#define CAN_RXIMR_COUNT                           32u

/** CAN - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< Module Configuration register, offset: 0x0 */
  __IO uint32_t CTRL1;                             /**< Control 1 register, offset: 0x2 */
  __IO uint32_t TIMER;                             /**< Free Running Timer, offset: 0x4 */
       uint16_t RESERVED_0[2];
  __IO uint32_t RXMGMASK;                          /**< Rx Mailboxes Global Mask register, offset: 0x8 */
  __IO uint32_t RX14MASK;                          /**< Rx 14 Mask register, offset: 0xA */
  __IO uint32_t RX15MASK;                          /**< Rx 15 Mask register, offset: 0xC */
  __IO uint32_t ECR;                               /**< Error Counter, offset: 0xE */
  __IO uint32_t ESR1;                              /**< Error and Status 1 register, offset: 0x10 */
       uint16_t RESERVED_1[2];
  __IO uint32_t IMASK1;                            /**< Interrupt Masks 1 register, offset: 0x14 */
       uint16_t RESERVED_2[2];
  __IO uint32_t IFLAG1;                            /**< Interrupt Flags 1 register, offset: 0x18 */
  __IO uint32_t CTRL2;                             /**< Control 2 register, offset: 0x1A */
  __I  uint32_t ESR2;                              /**< Error and Status 2 register, offset: 0x1C */
       uint16_t RESERVED_3[4];
  __I  uint32_t CRCR;                              /**< CRC register, offset: 0x22 */
  __IO uint32_t RXFGMASK;                          /**< Rx FIFO Global Mask register, offset: 0x24 */
  __I  uint32_t RXFIR;                             /**< Rx FIFO Information register, offset: 0x26 */
  __IO uint32_t CBT;                               /**< CAN Bit Timing register, offset: 0x28 */
       uint16_t RESERVED_4[22];
  union {                                          /* offset: 0x40 */
    struct {                                         /* offset: 0x40, array step: 0x8 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 31 CS Register, array offset: 0x40, array step: 0x8 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 31 ID Register, array offset: 0x42, array step: 0x8 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_8B_GROUP_MB_8B_WORD_8B_COUNT];     /**< Message Buffer 0 WORD_8B Register..Message Buffer 31 WORD_8B Register, array offset: 0x44, array step: index*0x8, index2*0x2 */
    } MB_8B[CAN_MB_SIZE_MB_8B_GROUP_MB_8B_COUNT];
    struct {                                         /* offset: 0x40, array step: 0xC */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 20 CS Register, array offset: 0x40, array step: 0xC */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 20 ID Register, array offset: 0x42, array step: 0xC */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_16B_GROUP_MB_16B_WORD_16B_COUNT];     /**< Message Buffer 0 WORD_16B Register..Message Buffer 20 WORD_16B Register, array offset: 0x44, array step: index*0xC, index2*0x2 */
    } MB_16B[CAN_MB_SIZE_MB_16B_GROUP_MB_16B_COUNT];
    struct {                                         /* offset: 0x40, array step: 0x14 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 11 CS Register, array offset: 0x40, array step: 0x14 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 11 ID Register, array offset: 0x42, array step: 0x14 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_32B_GROUP_MB_32B_WORD_32B_COUNT];     /**< Message Buffer 0 WORD_32B Register..Message Buffer 11 WORD_32B Register, array offset: 0x44, array step: index*0x14, index2*0x2 */
    } MB_32B[CAN_MB_SIZE_MB_32B_GROUP_MB_32B_COUNT];
    struct {                                         /* offset: 0x40, array step: 0x24 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 6 CS Register, array offset: 0x40, array step: 0x24 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 6 ID Register, array offset: 0x42, array step: 0x24 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_64B_GROUP_MB_64B_WORD_64B_COUNT];     /**< Message Buffer 0 WORD_64B Register..Message Buffer 6 WORD_64B Register, array offset: 0x44, array step: index*0x24, index2*0x2 */
    } MB_64B[CAN_MB_SIZE_MB_64B_GROUP_MB_64B_COUNT];
    struct {                                         /* offset: 0x40, array step: 0x8 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 31 CS Register, array offset: 0x40, array step: 0x8 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 31 ID Register, array offset: 0x42, array step: 0x8 */
      __IO uint32_t WORD0;                             /**< Message Buffer 0 WORD0 Register..Message Buffer 31 WORD0 Register, array offset: 0x44, array step: 0x8 */
      __IO uint32_t WORD1;                             /**< Message Buffer 0 WORD1 Register..Message Buffer 31 WORD1 Register, array offset: 0x46, array step: 0x8 */
    } MB[CAN_MB_SIZE_MB_GROUP_MB_COUNT];
  };
       uint16_t RESERVED_5[768];
  __IO uint32_t RXIMR[CAN_RXIMR_COUNT];            /**< Rx Individual Mask registers, array offset: 0x440, array step: 0x2 */
       uint16_t RESERVED_6[384];
  __IO uint32_t FDCTRL;                            /**< CAN FD Control register, offset: 0x600 */
  __IO uint32_t FDCBT;                             /**< CAN FD Bit Timing register, offset: 0x602 */
  __I  uint32_t FDCRC;                             /**< CAN FD CRC register, offset: 0x604 */
} CAN_Type;

/* ----------------------------------------------------------------------------
   -- CAN Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAN_Register_Masks CAN Register Masks
 * @{
 */

/*! @name MCR - Module Configuration register */
/*! @{ */

#define CAN_MCR_MAXMB_MASK                       (0x7FUL)
#define CAN_MCR_MAXMB_SHIFT                      (0UL)
/*! MAXMB - Number Of The Last Message Buffer */
#define CAN_MCR_MAXMB(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_MCR_MAXMB_SHIFT)) & CAN_MCR_MAXMB_MASK)

#define CAN_MCR_IDAM_MASK                        (0x300UL)
#define CAN_MCR_IDAM_SHIFT                       (8UL)
/*! IDAM - ID Acceptance Mode
 *  0b00..Format A: One full ID (standard and extended) per ID filter table element.
 *  0b01..Format B: Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID filter table element.
 *  0b10..Format C: Four partial 8-bit standard IDs per ID filter table element.
 *  0b11..Format D: All frames rejected.
 */
#define CAN_MCR_IDAM(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_IDAM_SHIFT)) & CAN_MCR_IDAM_MASK)

#define CAN_MCR_FDEN_MASK                        (0x800UL)
#define CAN_MCR_FDEN_SHIFT                       (11UL)
/*! FDEN - CAN FD operation enable
 *  0b1..CAN FD is enabled. FlexCAN is able to receive and transmit messages in both CAN FD and CAN 2.0 formats.
 *  0b0..CAN FD is disabled. FlexCAN is able to receive and transmit messages in CAN 2.0 format.
 */
#define CAN_MCR_FDEN(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FDEN_SHIFT)) & CAN_MCR_FDEN_MASK)

#define CAN_MCR_AEN_MASK                         (0x1000UL)
#define CAN_MCR_AEN_SHIFT                        (12UL)
/*! AEN - Abort Enable
 *  0b0..Abort disabled.
 *  0b1..Abort enabled.
 */
#define CAN_MCR_AEN(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_MCR_AEN_SHIFT)) & CAN_MCR_AEN_MASK)

#define CAN_MCR_LPRIOEN_MASK                     (0x2000UL)
#define CAN_MCR_LPRIOEN_SHIFT                    (13UL)
/*! LPRIOEN - Local Priority Enable
 *  0b0..Local Priority disabled.
 *  0b1..Local Priority enabled.
 */
#define CAN_MCR_LPRIOEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_LPRIOEN_SHIFT)) & CAN_MCR_LPRIOEN_MASK)

#define CAN_MCR_DMA_MASK                         (0x8000UL)
#define CAN_MCR_DMA_SHIFT                        (15UL)
/*! DMA - DMA Enable
 *  0b0..DMA feature for RX FIFO disabled.
 *  0b1..DMA feature for RX FIFO enabled.
 */
#define CAN_MCR_DMA(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_MCR_DMA_SHIFT)) & CAN_MCR_DMA_MASK)

#define CAN_MCR_IRMQ_MASK                        (0x10000UL)
#define CAN_MCR_IRMQ_SHIFT                       (16UL)
/*! IRMQ - Individual Rx Masking And Queue Enable
 *  0b0..Individual Rx masking and queue feature are disabled. For backward compatibility with legacy
 *       applications, the reading of C/S word locks the MB even if it is EMPTY.
 *  0b1..Individual Rx masking and queue feature are enabled.
 */
#define CAN_MCR_IRMQ(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_IRMQ_SHIFT)) & CAN_MCR_IRMQ_MASK)

#define CAN_MCR_SRXDIS_MASK                      (0x20000UL)
#define CAN_MCR_SRXDIS_SHIFT                     (17UL)
/*! SRXDIS - Self Reception Disable
 *  0b0..Self-reception enabled.
 *  0b1..Self-reception disabled.
 */
#define CAN_MCR_SRXDIS(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SRXDIS_SHIFT)) & CAN_MCR_SRXDIS_MASK)

#define CAN_MCR_DOZE_MASK                        (0x40000UL)
#define CAN_MCR_DOZE_SHIFT                       (18UL)
/*! DOZE - Doze Mode Enable
 *  0b0..FlexCAN is not enabled to enter low-power mode when Doze mode is requested.
 *  0b1..FlexCAN is enabled to enter low-power mode when Doze mode is requested.
 */
#define CAN_MCR_DOZE(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_DOZE_SHIFT)) & CAN_MCR_DOZE_MASK)

#define CAN_MCR_WAKSRC_MASK                      (0x80000UL)
#define CAN_MCR_WAKSRC_SHIFT                     (19UL)
/*! WAKSRC - Wake Up Source
 *  0b0..FlexCAN uses the unfiltered Rx input to detect recessive to dominant edges on the CAN bus.
 *  0b1..FlexCAN uses the filtered Rx input to detect recessive to dominant edges on the CAN bus.
 */
#define CAN_MCR_WAKSRC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WAKSRC_SHIFT)) & CAN_MCR_WAKSRC_MASK)

#define CAN_MCR_LPMACK_MASK                      (0x100000UL)
#define CAN_MCR_LPMACK_SHIFT                     (20UL)
/*! LPMACK - Low-Power Mode Acknowledge
 *  0b0..FlexCAN is not in a low-power mode.
 *  0b1..FlexCAN is in a low-power mode.
 */
#define CAN_MCR_LPMACK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_LPMACK_SHIFT)) & CAN_MCR_LPMACK_MASK)

#define CAN_MCR_WRNEN_MASK                       (0x200000UL)
#define CAN_MCR_WRNEN_SHIFT                      (21UL)
/*! WRNEN - Warning Interrupt Enable
 *  0b0..TWRNINT and RWRNINT bits are zero, independent of the values in the error counters.
 *  0b1..TWRNINT and RWRNINT bits are set when the respective error counter transitions from less than 96 to greater than or equal to 96.
 */
#define CAN_MCR_WRNEN(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WRNEN_SHIFT)) & CAN_MCR_WRNEN_MASK)

#define CAN_MCR_SLFWAK_MASK                      (0x400000UL)
#define CAN_MCR_SLFWAK_SHIFT                     (22UL)
/*! SLFWAK - Self Wake Up
 *  0b0..FlexCAN Self Wake Up feature is disabled.
 *  0b1..FlexCAN Self Wake Up feature is enabled.
 */
#define CAN_MCR_SLFWAK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SLFWAK_SHIFT)) & CAN_MCR_SLFWAK_MASK)

#define CAN_MCR_SUPV_MASK                        (0x800000UL)
#define CAN_MCR_SUPV_SHIFT                       (23UL)
/*! SUPV - Supervisor Mode
 *  0b0..FlexCAN is in User mode. Affected registers allow both Supervisor and Unrestricted accesses.
 *  0b1..FlexCAN is in Supervisor mode. Affected registers allow only Supervisor access. Unrestricted access
 *       behaves as though the access was done to an unimplemented register location.
 */
#define CAN_MCR_SUPV(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SUPV_SHIFT)) & CAN_MCR_SUPV_MASK)

#define CAN_MCR_FRZACK_MASK                      (0x1000000UL)
#define CAN_MCR_FRZACK_SHIFT                     (24UL)
/*! FRZACK - Freeze Mode Acknowledge
 *  0b0..FlexCAN not in Freeze mode, prescaler running.
 *  0b1..FlexCAN in Freeze mode, prescaler stopped.
 */
#define CAN_MCR_FRZACK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FRZACK_SHIFT)) & CAN_MCR_FRZACK_MASK)

#define CAN_MCR_SOFTRST_MASK                     (0x2000000UL)
#define CAN_MCR_SOFTRST_SHIFT                    (25UL)
/*! SOFTRST - Soft Reset
 *  0b0..No reset request.
 *  0b1..Resets the registers affected by soft reset.
 */
#define CAN_MCR_SOFTRST(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SOFTRST_SHIFT)) & CAN_MCR_SOFTRST_MASK)

#define CAN_MCR_WAKMSK_MASK                      (0x4000000UL)
#define CAN_MCR_WAKMSK_SHIFT                     (26UL)
/*! WAKMSK - Wake Up Interrupt Mask
 *  0b0..Wake Up interrupt is disabled.
 *  0b1..Wake Up interrupt is enabled.
 */
#define CAN_MCR_WAKMSK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WAKMSK_SHIFT)) & CAN_MCR_WAKMSK_MASK)

#define CAN_MCR_NOTRDY_MASK                      (0x8000000UL)
#define CAN_MCR_NOTRDY_SHIFT                     (27UL)
/*! NOTRDY - FlexCAN Not Ready
 *  0b0..FlexCAN module is either in Normal mode, Listen-Only mode, or Loop-Back mode.
 *  0b1..FlexCAN module is either in Disable mode, Doze mode, Stop mode, or Freeze mode.
 */
#define CAN_MCR_NOTRDY(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_NOTRDY_SHIFT)) & CAN_MCR_NOTRDY_MASK)

#define CAN_MCR_HALT_MASK                        (0x10000000UL)
#define CAN_MCR_HALT_SHIFT                       (28UL)
/*! HALT - Halt FlexCAN
 *  0b0..No Freeze mode request.
 *  0b1..Enters Freeze mode if the FRZ bit is asserted.
 */
#define CAN_MCR_HALT(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_HALT_SHIFT)) & CAN_MCR_HALT_MASK)

#define CAN_MCR_RFEN_MASK                        (0x20000000UL)
#define CAN_MCR_RFEN_SHIFT                       (29UL)
/*! RFEN - Rx FIFO Enable
 *  0b0..Rx FIFO not enabled.
 *  0b1..Rx FIFO enabled.
 */
#define CAN_MCR_RFEN(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_RFEN_SHIFT)) & CAN_MCR_RFEN_MASK)

#define CAN_MCR_FRZ_MASK                         (0x40000000UL)
#define CAN_MCR_FRZ_SHIFT                        (30UL)
/*! FRZ - Freeze Enable
 *  0b0..Not enabled to enter Freeze mode.
 *  0b1..Enabled to enter Freeze mode.
 */
#define CAN_MCR_FRZ(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FRZ_SHIFT)) & CAN_MCR_FRZ_MASK)

#define CAN_MCR_MDIS_MASK                        (0x80000000UL)
#define CAN_MCR_MDIS_SHIFT                       (31UL)
/*! MDIS - Module Disable
 *  0b0..Enable the FlexCAN module.
 *  0b1..Disable the FlexCAN module.
 */
#define CAN_MCR_MDIS(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_MDIS_SHIFT)) & CAN_MCR_MDIS_MASK)
/*! @} */

/*! @name CTRL1 - Control 1 register */
/*! @{ */

#define CAN_CTRL1_PROPSEG_MASK                   (0x7UL)
#define CAN_CTRL1_PROPSEG_SHIFT                  (0UL)
/*! PROPSEG - Propagation Segment */
#define CAN_CTRL1_PROPSEG(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PROPSEG_SHIFT)) & CAN_CTRL1_PROPSEG_MASK)

#define CAN_CTRL1_LOM_MASK                       (0x8UL)
#define CAN_CTRL1_LOM_SHIFT                      (3UL)
/*! LOM - Listen-Only Mode
 *  0b0..Listen-Only mode is deactivated.
 *  0b1..FlexCAN module operates in Listen-Only mode.
 */
#define CAN_CTRL1_LOM(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LOM_SHIFT)) & CAN_CTRL1_LOM_MASK)

#define CAN_CTRL1_LBUF_MASK                      (0x10UL)
#define CAN_CTRL1_LBUF_SHIFT                     (4UL)
/*! LBUF - Lowest Buffer Transmitted First
 *  0b0..Buffer with highest priority is transmitted first.
 *  0b1..Lowest number buffer is transmitted first.
 */
#define CAN_CTRL1_LBUF(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LBUF_SHIFT)) & CAN_CTRL1_LBUF_MASK)

#define CAN_CTRL1_TSYN_MASK                      (0x20UL)
#define CAN_CTRL1_TSYN_SHIFT                     (5UL)
/*! TSYN - Timer Sync
 *  0b0..Timer sync feature disabled
 *  0b1..Timer sync feature enabled
 */
#define CAN_CTRL1_TSYN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_TSYN_SHIFT)) & CAN_CTRL1_TSYN_MASK)

#define CAN_CTRL1_BOFFREC_MASK                   (0x40UL)
#define CAN_CTRL1_BOFFREC_SHIFT                  (6UL)
/*! BOFFREC - Bus Off Recovery
 *  0b0..Automatic recovering from Bus Off state enabled.
 *  0b1..Automatic recovering from Bus Off state disabled.
 */
#define CAN_CTRL1_BOFFREC(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_BOFFREC_SHIFT)) & CAN_CTRL1_BOFFREC_MASK)

#define CAN_CTRL1_SMP_MASK                       (0x80UL)
#define CAN_CTRL1_SMP_SHIFT                      (7UL)
/*! SMP - CAN Bit Sampling
 *  0b0..Just one sample is used to determine the bit value.
 *  0b1..Three samples are used to determine the value of the received bit: the regular one (sample point) and two
 *       preceding samples; a majority rule is used.
 */
#define CAN_CTRL1_SMP(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_SMP_SHIFT)) & CAN_CTRL1_SMP_MASK)

#define CAN_CTRL1_RWRNMSK_MASK                   (0x400UL)
#define CAN_CTRL1_RWRNMSK_SHIFT                  (10UL)
/*! RWRNMSK - Rx Warning Interrupt Mask
 *  0b0..Rx Warning interrupt disabled.
 *  0b1..Rx Warning interrupt enabled.
 */
#define CAN_CTRL1_RWRNMSK(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_RWRNMSK_SHIFT)) & CAN_CTRL1_RWRNMSK_MASK)

#define CAN_CTRL1_TWRNMSK_MASK                   (0x800UL)
#define CAN_CTRL1_TWRNMSK_SHIFT                  (11UL)
/*! TWRNMSK - Tx Warning Interrupt Mask
 *  0b0..Tx Warning interrupt disabled.
 *  0b1..Tx Warning interrupt enabled.
 */
#define CAN_CTRL1_TWRNMSK(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_TWRNMSK_SHIFT)) & CAN_CTRL1_TWRNMSK_MASK)

#define CAN_CTRL1_LPB_MASK                       (0x1000UL)
#define CAN_CTRL1_LPB_SHIFT                      (12UL)
/*! LPB - Loop Back Mode
 *  0b0..Loop Back disabled.
 *  0b1..Loop Back enabled.
 */
#define CAN_CTRL1_LPB(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LPB_SHIFT)) & CAN_CTRL1_LPB_MASK)

#define CAN_CTRL1_CLKSRC_MASK                    (0x2000UL)
#define CAN_CTRL1_CLKSRC_SHIFT                   (13UL)
/*! CLKSRC - CAN Engine Clock Source
 *  0b0..The CAN engine clock source is the oscillator clock. Under this condition, the oscillator clock frequency must be lower than the bus clock.
 *  0b1..The CAN engine clock source is the peripheral clock.
 */
#define CAN_CTRL1_CLKSRC(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_CLKSRC_SHIFT)) & CAN_CTRL1_CLKSRC_MASK)

#define CAN_CTRL1_ERRMSK_MASK                    (0x4000UL)
#define CAN_CTRL1_ERRMSK_SHIFT                   (14UL)
/*! ERRMSK - Error Interrupt Mask
 *  0b0..Error interrupt disabled.
 *  0b1..Error interrupt enabled.
 */
#define CAN_CTRL1_ERRMSK(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_ERRMSK_SHIFT)) & CAN_CTRL1_ERRMSK_MASK)

#define CAN_CTRL1_BOFFMSK_MASK                   (0x8000UL)
#define CAN_CTRL1_BOFFMSK_SHIFT                  (15UL)
/*! BOFFMSK - Bus Off Interrupt Mask
 *  0b0..Bus Off interrupt disabled.
 *  0b1..Bus Off interrupt enabled.
 */
#define CAN_CTRL1_BOFFMSK(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_BOFFMSK_SHIFT)) & CAN_CTRL1_BOFFMSK_MASK)

#define CAN_CTRL1_PSEG2_MASK                     (0x70000UL)
#define CAN_CTRL1_PSEG2_SHIFT                    (16UL)
/*! PSEG2 - Phase Segment 2 */
#define CAN_CTRL1_PSEG2(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PSEG2_SHIFT)) & CAN_CTRL1_PSEG2_MASK)

#define CAN_CTRL1_PSEG1_MASK                     (0x380000UL)
#define CAN_CTRL1_PSEG1_SHIFT                    (19UL)
/*! PSEG1 - Phase Segment 1 */
#define CAN_CTRL1_PSEG1(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PSEG1_SHIFT)) & CAN_CTRL1_PSEG1_MASK)

#define CAN_CTRL1_RJW_MASK                       (0xC00000UL)
#define CAN_CTRL1_RJW_SHIFT                      (22UL)
/*! RJW - Resync Jump Width */
#define CAN_CTRL1_RJW(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_RJW_SHIFT)) & CAN_CTRL1_RJW_MASK)

#define CAN_CTRL1_PRESDIV_MASK                   (0xFF000000UL)
#define CAN_CTRL1_PRESDIV_SHIFT                  (24UL)
/*! PRESDIV - Prescaler Division Factor */
#define CAN_CTRL1_PRESDIV(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PRESDIV_SHIFT)) & CAN_CTRL1_PRESDIV_MASK)
/*! @} */

/*! @name TIMER - Free Running Timer */
/*! @{ */

#define CAN_TIMER_TIMER_MASK                     (0xFFFFUL)
#define CAN_TIMER_TIMER_SHIFT                    (0UL)
/*! TIMER - Timer Value */
#define CAN_TIMER_TIMER(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_TIMER_TIMER_SHIFT)) & CAN_TIMER_TIMER_MASK)
/*! @} */

/*! @name RXMGMASK - Rx Mailboxes Global Mask register */
/*! @{ */

#define CAN_RXMGMASK_MG_MASK                     (0xFFFFFFFFUL)
#define CAN_RXMGMASK_MG_SHIFT                    (0UL)
/*! MG - Rx Mailboxes Global Mask Bits */
#define CAN_RXMGMASK_MG(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_RXMGMASK_MG_SHIFT)) & CAN_RXMGMASK_MG_MASK)
/*! @} */

/*! @name RX14MASK - Rx 14 Mask register */
/*! @{ */

#define CAN_RX14MASK_RX14M_MASK                  (0xFFFFFFFFUL)
#define CAN_RX14MASK_RX14M_SHIFT                 (0UL)
/*! RX14M - Rx Buffer 14 Mask Bits */
#define CAN_RX14MASK_RX14M(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_RX14MASK_RX14M_SHIFT)) & CAN_RX14MASK_RX14M_MASK)
/*! @} */

/*! @name RX15MASK - Rx 15 Mask register */
/*! @{ */

#define CAN_RX15MASK_RX15M_MASK                  (0xFFFFFFFFUL)
#define CAN_RX15MASK_RX15M_SHIFT                 (0UL)
/*! RX15M - Rx Buffer 15 Mask Bits */
#define CAN_RX15MASK_RX15M(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_RX15MASK_RX15M_SHIFT)) & CAN_RX15MASK_RX15M_MASK)
/*! @} */

/*! @name ECR - Error Counter */
/*! @{ */

#define CAN_ECR_TXERRCNT_MASK                    (0xFFUL)
#define CAN_ECR_TXERRCNT_SHIFT                   (0UL)
/*! TXERRCNT - Transmit Error Counter */
#define CAN_ECR_TXERRCNT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ECR_TXERRCNT_SHIFT)) & CAN_ECR_TXERRCNT_MASK)

#define CAN_ECR_RXERRCNT_MASK                    (0xFF00UL)
#define CAN_ECR_RXERRCNT_SHIFT                   (8UL)
/*! RXERRCNT - Receive Error Counter */
#define CAN_ECR_RXERRCNT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ECR_RXERRCNT_SHIFT)) & CAN_ECR_RXERRCNT_MASK)

#define CAN_ECR_TXERRCNT_FAST_MASK               (0xFF0000UL)
#define CAN_ECR_TXERRCNT_FAST_SHIFT              (16UL)
/*! TXERRCNT_FAST - Transmit Error Counter for fast bits */
#define CAN_ECR_TXERRCNT_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ECR_TXERRCNT_FAST_SHIFT)) & CAN_ECR_TXERRCNT_FAST_MASK)

#define CAN_ECR_RXERRCNT_FAST_MASK               (0xFF000000UL)
#define CAN_ECR_RXERRCNT_FAST_SHIFT              (24UL)
/*! RXERRCNT_FAST - Receive Error Counter for fast bits */
#define CAN_ECR_RXERRCNT_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ECR_RXERRCNT_FAST_SHIFT)) & CAN_ECR_RXERRCNT_FAST_MASK)
/*! @} */

/*! @name ESR1 - Error and Status 1 register */
/*! @{ */

#define CAN_ESR1_WAKINT_MASK                     (0x1UL)
#define CAN_ESR1_WAKINT_SHIFT                    (0UL)
/*! WAKINT - Wake-Up Interrupt
 *  0b0..No such occurrence.
 *  0b1..Indicates a recessive to dominant transition was received on the CAN bus.
 */
#define CAN_ESR1_WAKINT(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_WAKINT_SHIFT)) & CAN_ESR1_WAKINT_MASK)

#define CAN_ESR1_ERRINT_MASK                     (0x2UL)
#define CAN_ESR1_ERRINT_SHIFT                    (1UL)
/*! ERRINT - Error Interrupt
 *  0b0..No such occurrence.
 *  0b1..Indicates setting of any error bit in the Error and Status register.
 */
#define CAN_ESR1_ERRINT(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERRINT_SHIFT)) & CAN_ESR1_ERRINT_MASK)

#define CAN_ESR1_BOFFINT_MASK                    (0x4UL)
#define CAN_ESR1_BOFFINT_SHIFT                   (2UL)
/*! BOFFINT - Bus Off Interrupt
 *  0b0..No such occurrence.
 *  0b1..FlexCAN module entered Bus Off state.
 */
#define CAN_ESR1_BOFFINT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BOFFINT_SHIFT)) & CAN_ESR1_BOFFINT_MASK)

#define CAN_ESR1_RX_MASK                         (0x8UL)
#define CAN_ESR1_RX_SHIFT                        (3UL)
/*! RX - FlexCAN In Reception
 *  0b0..FlexCAN is not receiving a message.
 *  0b1..FlexCAN is receiving a message.
 */
#define CAN_ESR1_RX(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RX_SHIFT)) & CAN_ESR1_RX_MASK)

#define CAN_ESR1_FLTCONF_MASK                    (0x30UL)
#define CAN_ESR1_FLTCONF_SHIFT                   (4UL)
/*! FLTCONF - Fault Confinement State
 *  0b00..Error Active
 *  0b01..Error Passive
 *  0b1x..Bus Off
 */
#define CAN_ESR1_FLTCONF(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FLTCONF_SHIFT)) & CAN_ESR1_FLTCONF_MASK)

#define CAN_ESR1_TX_MASK                         (0x40UL)
#define CAN_ESR1_TX_SHIFT                        (6UL)
/*! TX - FlexCAN In Transmission
 *  0b0..FlexCAN is not transmitting a message.
 *  0b1..FlexCAN is transmitting a message.
 */
#define CAN_ESR1_TX(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TX_SHIFT)) & CAN_ESR1_TX_MASK)

#define CAN_ESR1_IDLE_MASK                       (0x80UL)
#define CAN_ESR1_IDLE_SHIFT                      (7UL)
/*! IDLE - IDLE
 *  0b0..No such occurrence.
 *  0b1..CAN bus is now IDLE.
 */
#define CAN_ESR1_IDLE(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_IDLE_SHIFT)) & CAN_ESR1_IDLE_MASK)

#define CAN_ESR1_RXWRN_MASK                      (0x100UL)
#define CAN_ESR1_RXWRN_SHIFT                     (8UL)
/*! RXWRN - Rx Error Warning
 *  0b0..No such occurrence.
 *  0b1..RXERRCNT is greater than or equal to 96.
 */
#define CAN_ESR1_RXWRN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RXWRN_SHIFT)) & CAN_ESR1_RXWRN_MASK)

#define CAN_ESR1_TXWRN_MASK                      (0x200UL)
#define CAN_ESR1_TXWRN_SHIFT                     (9UL)
/*! TXWRN - TX Error Warning
 *  0b0..No such occurrence.
 *  0b1..TXERRCNT is greater than or equal to 96.
 */
#define CAN_ESR1_TXWRN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TXWRN_SHIFT)) & CAN_ESR1_TXWRN_MASK)

#define CAN_ESR1_STFERR_MASK                     (0x400UL)
#define CAN_ESR1_STFERR_SHIFT                    (10UL)
/*! STFERR - Stuffing Error
 *  0b0..No such occurrence.
 *  0b1..A stuffing error occurred since last read of this register.
 */
#define CAN_ESR1_STFERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_STFERR_SHIFT)) & CAN_ESR1_STFERR_MASK)

#define CAN_ESR1_FRMERR_MASK                     (0x800UL)
#define CAN_ESR1_FRMERR_SHIFT                    (11UL)
/*! FRMERR - Form Error
 *  0b0..No such occurrence.
 *  0b1..A Form Error occurred since last read of this register.
 */
#define CAN_ESR1_FRMERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FRMERR_SHIFT)) & CAN_ESR1_FRMERR_MASK)

#define CAN_ESR1_CRCERR_MASK                     (0x1000UL)
#define CAN_ESR1_CRCERR_SHIFT                    (12UL)
/*! CRCERR - Cyclic Redundancy Check Error
 *  0b0..No such occurrence.
 *  0b1..A CRC error occurred since last read of this register.
 */
#define CAN_ESR1_CRCERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_CRCERR_SHIFT)) & CAN_ESR1_CRCERR_MASK)

#define CAN_ESR1_ACKERR_MASK                     (0x2000UL)
#define CAN_ESR1_ACKERR_SHIFT                    (13UL)
/*! ACKERR - Acknowledge Error
 *  0b0..No such occurrence.
 *  0b1..An ACK error occurred since last read of this register.
 */
#define CAN_ESR1_ACKERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ACKERR_SHIFT)) & CAN_ESR1_ACKERR_MASK)

#define CAN_ESR1_BIT0ERR_MASK                    (0x4000UL)
#define CAN_ESR1_BIT0ERR_SHIFT                   (14UL)
/*! BIT0ERR - Bit0 Error
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as dominant is received as recessive.
 */
#define CAN_ESR1_BIT0ERR(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT0ERR_SHIFT)) & CAN_ESR1_BIT0ERR_MASK)

#define CAN_ESR1_BIT1ERR_MASK                    (0x8000UL)
#define CAN_ESR1_BIT1ERR_SHIFT                   (15UL)
/*! BIT1ERR - Bit1 Error
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as recessive is received as dominant.
 */
#define CAN_ESR1_BIT1ERR(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT1ERR_SHIFT)) & CAN_ESR1_BIT1ERR_MASK)

#define CAN_ESR1_RWRNINT_MASK                    (0x10000UL)
#define CAN_ESR1_RWRNINT_SHIFT                   (16UL)
/*! RWRNINT - Rx Warning Interrupt Flag
 *  0b0..No such occurrence.
 *  0b1..The Rx error counter transitioned from less than 96 to greater than or equal to 96.
 */
#define CAN_ESR1_RWRNINT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RWRNINT_SHIFT)) & CAN_ESR1_RWRNINT_MASK)

#define CAN_ESR1_TWRNINT_MASK                    (0x20000UL)
#define CAN_ESR1_TWRNINT_SHIFT                   (17UL)
/*! TWRNINT - Tx Warning Interrupt Flag
 *  0b0..No such occurrence.
 *  0b1..The Tx error counter transitioned from less than 96 to greater than or equal to 96.
 */
#define CAN_ESR1_TWRNINT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TWRNINT_SHIFT)) & CAN_ESR1_TWRNINT_MASK)

#define CAN_ESR1_SYNCH_MASK                      (0x40000UL)
#define CAN_ESR1_SYNCH_SHIFT                     (18UL)
/*! SYNCH - CAN Synchronization Status
 *  0b0..FlexCAN is not synchronized to the CAN bus.
 *  0b1..FlexCAN is synchronized to the CAN bus.
 */
#define CAN_ESR1_SYNCH(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_SYNCH_SHIFT)) & CAN_ESR1_SYNCH_MASK)

#define CAN_ESR1_BOFFDONEINT_MASK                (0x80000UL)
#define CAN_ESR1_BOFFDONEINT_SHIFT               (19UL)
/*! BOFFDONEINT - Bus Off Done Interrupt
 *  0b0..No such occurrence.
 *  0b1..FlexCAN module has completed Bus Off process.
 */
#define CAN_ESR1_BOFFDONEINT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BOFFDONEINT_SHIFT)) & CAN_ESR1_BOFFDONEINT_MASK)

#define CAN_ESR1_ERRINT_FAST_MASK                (0x100000UL)
#define CAN_ESR1_ERRINT_FAST_SHIFT               (20UL)
/*! ERRINT_FAST - Error interrupt for errors detected in Data Phase of CAN FD frames with BRS bit set
 *  0b0..No such occurrence.
 *  0b1..Indicates setting of any error bit detected in the data phase of CAN FD frames with the BRS bit set.
 */
#define CAN_ESR1_ERRINT_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERRINT_FAST_SHIFT)) & CAN_ESR1_ERRINT_FAST_MASK)

#define CAN_ESR1_ERROVR_MASK                     (0x200000UL)
#define CAN_ESR1_ERROVR_SHIFT                    (21UL)
/*! ERROVR - Error Overrun
 *  0b0..Overrun has not occurred.
 *  0b1..Overrun has occurred.
 */
#define CAN_ESR1_ERROVR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERROVR_SHIFT)) & CAN_ESR1_ERROVR_MASK)

#define CAN_ESR1_STFERR_FAST_MASK                (0x4000000UL)
#define CAN_ESR1_STFERR_FAST_SHIFT               (26UL)
/*! STFERR_FAST - Stuffing Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..A stuffing error occurred since last read of this register.
 */
#define CAN_ESR1_STFERR_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_STFERR_FAST_SHIFT)) & CAN_ESR1_STFERR_FAST_MASK)

#define CAN_ESR1_FRMERR_FAST_MASK                (0x8000000UL)
#define CAN_ESR1_FRMERR_FAST_SHIFT               (27UL)
/*! FRMERR_FAST - Form Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..A form error occurred since last read of this register.
 */
#define CAN_ESR1_FRMERR_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FRMERR_FAST_SHIFT)) & CAN_ESR1_FRMERR_FAST_MASK)

#define CAN_ESR1_CRCERR_FAST_MASK                (0x10000000UL)
#define CAN_ESR1_CRCERR_FAST_SHIFT               (28UL)
/*! CRCERR_FAST - Cyclic Redundancy Check Error in the CRC field of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..A CRC error occurred since last read of this register.
 */
#define CAN_ESR1_CRCERR_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_CRCERR_FAST_SHIFT)) & CAN_ESR1_CRCERR_FAST_MASK)

#define CAN_ESR1_BIT0ERR_FAST_MASK               (0x40000000UL)
#define CAN_ESR1_BIT0ERR_FAST_SHIFT              (30UL)
/*! BIT0ERR_FAST - Bit0 Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as dominant is received as recessive.
 */
#define CAN_ESR1_BIT0ERR_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT0ERR_FAST_SHIFT)) & CAN_ESR1_BIT0ERR_FAST_MASK)

#define CAN_ESR1_BIT1ERR_FAST_MASK               (0x80000000UL)
#define CAN_ESR1_BIT1ERR_FAST_SHIFT              (31UL)
/*! BIT1ERR_FAST - Bit1 Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as recessive is received as dominant.
 */
#define CAN_ESR1_BIT1ERR_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT1ERR_FAST_SHIFT)) & CAN_ESR1_BIT1ERR_FAST_MASK)
/*! @} */

/*! @name IMASK1 - Interrupt Masks 1 register */
/*! @{ */

#define CAN_IMASK1_BUF31TO0M_MASK                (0xFFFFFFFFUL)
#define CAN_IMASK1_BUF31TO0M_SHIFT               (0UL)
/*! BUF31TO0M - Buffer MB i Mask */
#define CAN_IMASK1_BUF31TO0M(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IMASK1_BUF31TO0M_SHIFT)) & CAN_IMASK1_BUF31TO0M_MASK)
/*! @} */

/*! @name IFLAG1 - Interrupt Flags 1 register */
/*! @{ */

#define CAN_IFLAG1_BUF0I_MASK                    (0x1UL)
#define CAN_IFLAG1_BUF0I_SHIFT                   (0UL)
/*! BUF0I - Buffer MB0 Interrupt Or Clear FIFO bit
 *  0b0..The corresponding buffer has no occurrence of successfully completed transmission or reception when MCR[RFEN]=0.
 *  0b1..The corresponding buffer has successfully completed transmission or reception when MCR[RFEN]=0.
 */
#define CAN_IFLAG1_BUF0I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF0I_SHIFT)) & CAN_IFLAG1_BUF0I_MASK)

#define CAN_IFLAG1_BUF4TO1I_MASK                 (0x1EUL)
#define CAN_IFLAG1_BUF4TO1I_SHIFT                (1UL)
/*! BUF4TO1I - Buffer MB i Interrupt Or Reserved */
#define CAN_IFLAG1_BUF4TO1I(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF4TO1I_SHIFT)) & CAN_IFLAG1_BUF4TO1I_MASK)

#define CAN_IFLAG1_BUF5I_MASK                    (0x20UL)
#define CAN_IFLAG1_BUF5I_SHIFT                   (5UL)
/*! BUF5I - Buffer MB5 Interrupt Or Frames available in Rx FIFO
 *  0b0..No occurrence of MB5 completing transmission/reception when MCR[RFEN]=0, or of frame(s) available in the FIFO, when MCR[RFEN]=1
 *  0b1..MB5 completed transmission/reception when MCR[RFEN]=0, or frame(s) available in the Rx FIFO when
 *       MCR[RFEN]=1. It generates a DMA request in case of MCR[RFEN] and MCR[DMA] are enabled.
 */
#define CAN_IFLAG1_BUF5I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF5I_SHIFT)) & CAN_IFLAG1_BUF5I_MASK)

#define CAN_IFLAG1_BUF6I_MASK                    (0x40UL)
#define CAN_IFLAG1_BUF6I_SHIFT                   (6UL)
/*! BUF6I - Buffer MB6 Interrupt Or Rx FIFO Warning
 *  0b0..No occurrence of MB6 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO almost full when MCR[RFEN]=1
 *  0b1..MB6 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO almost full when MCR[RFEN]=1
 */
#define CAN_IFLAG1_BUF6I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF6I_SHIFT)) & CAN_IFLAG1_BUF6I_MASK)

#define CAN_IFLAG1_BUF7I_MASK                    (0x80UL)
#define CAN_IFLAG1_BUF7I_SHIFT                   (7UL)
/*! BUF7I - Buffer MB7 Interrupt Or Rx FIFO Overflow
 *  0b0..No occurrence of MB7 completing transmission/reception when MCR[RFEN]=0, or of Rx FIFO overflow when MCR[RFEN]=1
 *  0b1..MB7 completed transmission/reception when MCR[RFEN]=0, or Rx FIFO overflow when MCR[RFEN]=1
 */
#define CAN_IFLAG1_BUF7I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF7I_SHIFT)) & CAN_IFLAG1_BUF7I_MASK)

#define CAN_IFLAG1_BUF31TO8I_MASK                (0xFFFFFF00UL)
#define CAN_IFLAG1_BUF31TO8I_SHIFT               (8UL)
/*! BUF31TO8I - Buffer MBi Interrupt */
#define CAN_IFLAG1_BUF31TO8I(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF31TO8I_SHIFT)) & CAN_IFLAG1_BUF31TO8I_MASK)
/*! @} */

/*! @name CTRL2 - Control 2 register */
/*! @{ */

#define CAN_CTRL2_EDFLTDIS_MASK                  (0x800UL)
#define CAN_CTRL2_EDFLTDIS_SHIFT                 (11UL)
/*! EDFLTDIS - Edge Filter Disable
 *  0b0..Edge filter is enabled
 *  0b1..Edge filter is disabled
 */
#define CAN_CTRL2_EDFLTDIS(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_EDFLTDIS_SHIFT)) & CAN_CTRL2_EDFLTDIS_MASK)

#define CAN_CTRL2_ISOCANFDEN_MASK                (0x1000UL)
#define CAN_CTRL2_ISOCANFDEN_SHIFT               (12UL)
/*! ISOCANFDEN - ISO CAN FD Enable
 *  0b0..FlexCAN operates using the non-ISO CAN FD protocol.
 *  0b1..FlexCAN operates using the ISO CAN FD protocol (ISO 11898-1).
 */
#define CAN_CTRL2_ISOCANFDEN(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ISOCANFDEN_SHIFT)) & CAN_CTRL2_ISOCANFDEN_MASK)

#define CAN_CTRL2_PREXCEN_MASK                   (0x4000UL)
#define CAN_CTRL2_PREXCEN_SHIFT                  (14UL)
/*! PREXCEN - Protocol Exception Enable
 *  0b0..Protocol exception is disabled.
 *  0b1..Protocol exception is enabled.
 */
#define CAN_CTRL2_PREXCEN(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_PREXCEN_SHIFT)) & CAN_CTRL2_PREXCEN_MASK)

#define CAN_CTRL2_TIMER_SRC_MASK                 (0x8000UL)
#define CAN_CTRL2_TIMER_SRC_SHIFT                (15UL)
/*! TIMER_SRC - Timer Source
 *  0b0..The free running timer is clocked by the CAN bit clock, which defines the baud rate on the CAN bus.
 *  0b1..The free running timer is clocked by an external time tick. The period can be either adjusted to be equal
 *       to the baud rate on the CAN bus, or a different value as required. See the device-specific section for
 *       details about the external time tick.
 */
#define CAN_CTRL2_TIMER_SRC(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_TIMER_SRC_SHIFT)) & CAN_CTRL2_TIMER_SRC_MASK)

#define CAN_CTRL2_EACEN_MASK                     (0x10000UL)
#define CAN_CTRL2_EACEN_SHIFT                    (16UL)
/*! EACEN - Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
 *  0b0..Rx mailbox filter's IDE bit is always compared and RTR is never compared despite mask bits.
 *  0b1..Enables the comparison of both Rx mailbox filter's IDE and RTR bit with their corresponding bits within
 *       the incoming frame. Mask bits do apply.
 */
#define CAN_CTRL2_EACEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_EACEN_SHIFT)) & CAN_CTRL2_EACEN_MASK)

#define CAN_CTRL2_RRS_MASK                       (0x20000UL)
#define CAN_CTRL2_RRS_SHIFT                      (17UL)
/*! RRS - Remote Request Storing
 *  0b0..Remote response frame is generated.
 *  0b1..Remote request frame is stored.
 */
#define CAN_CTRL2_RRS(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_RRS_SHIFT)) & CAN_CTRL2_RRS_MASK)

#define CAN_CTRL2_MRP_MASK                       (0x40000UL)
#define CAN_CTRL2_MRP_SHIFT                      (18UL)
/*! MRP - Mailboxes Reception Priority
 *  0b0..Matching starts from Rx FIFO or Enhanced Rx FIFO and continues on mailboxes.
 *  0b1..Matching starts from mailboxes and continues on Rx FIFO.
 */
#define CAN_CTRL2_MRP(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_MRP_SHIFT)) & CAN_CTRL2_MRP_MASK)

#define CAN_CTRL2_TASD_MASK                      (0xF80000UL)
#define CAN_CTRL2_TASD_SHIFT                     (19UL)
/*! TASD - Tx Arbitration Start Delay */
#define CAN_CTRL2_TASD(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_TASD_SHIFT)) & CAN_CTRL2_TASD_MASK)

#define CAN_CTRL2_RFFN_MASK                      (0xF000000UL)
#define CAN_CTRL2_RFFN_SHIFT                     (24UL)
/*! RFFN - Number Of Rx FIFO Filters */
#define CAN_CTRL2_RFFN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_RFFN_SHIFT)) & CAN_CTRL2_RFFN_MASK)

#define CAN_CTRL2_BOFFDONEMSK_MASK               (0x40000000UL)
#define CAN_CTRL2_BOFFDONEMSK_SHIFT              (30UL)
/*! BOFFDONEMSK - Bus Off Done Interrupt Mask
 *  0b0..Bus off done interrupt disabled.
 *  0b1..Bus off done interrupt enabled.
 */
#define CAN_CTRL2_BOFFDONEMSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_BOFFDONEMSK_SHIFT)) & CAN_CTRL2_BOFFDONEMSK_MASK)

#define CAN_CTRL2_ERRMSK_FAST_MASK               (0x80000000UL)
#define CAN_CTRL2_ERRMSK_FAST_SHIFT              (31UL)
/*! ERRMSK_FAST - Error Interrupt Mask for errors detected in the data phase of fast CAN FD frames
 *  0b0..ERRINT_FAST error interrupt disabled.
 *  0b1..ERRINT_FAST error interrupt enabled.
 */
#define CAN_CTRL2_ERRMSK_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ERRMSK_FAST_SHIFT)) & CAN_CTRL2_ERRMSK_FAST_MASK)
/*! @} */

/*! @name ESR2 - Error and Status 2 register */
/*! @{ */

#define CAN_ESR2_IMB_MASK                        (0x2000UL)
#define CAN_ESR2_IMB_SHIFT                       (13UL)
/*! IMB - Inactive Mailbox
 *  0b0..If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive mailbox.
 *  0b1..If ESR2[VPS] is asserted, there is at least one inactive mailbox. LPTM content is the number of the first one.
 */
#define CAN_ESR2_IMB(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_IMB_SHIFT)) & CAN_ESR2_IMB_MASK)

#define CAN_ESR2_VPS_MASK                        (0x4000UL)
#define CAN_ESR2_VPS_SHIFT                       (14UL)
/*! VPS - Valid Priority Status
 *  0b0..Contents of IMB and LPTM are invalid.
 *  0b1..Contents of IMB and LPTM are valid.
 */
#define CAN_ESR2_VPS(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_VPS_SHIFT)) & CAN_ESR2_VPS_MASK)

#define CAN_ESR2_LPTM_MASK                       (0x7F0000UL)
#define CAN_ESR2_LPTM_SHIFT                      (16UL)
/*! LPTM - Lowest Priority Tx Mailbox */
#define CAN_ESR2_LPTM(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_LPTM_SHIFT)) & CAN_ESR2_LPTM_MASK)
/*! @} */

/*! @name CRCR - CRC register */
/*! @{ */

#define CAN_CRCR_TXCRC_MASK                      (0x7FFFUL)
#define CAN_CRCR_TXCRC_SHIFT                     (0UL)
/*! TXCRC - Transmitted CRC value */
#define CAN_CRCR_TXCRC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CRCR_TXCRC_SHIFT)) & CAN_CRCR_TXCRC_MASK)

#define CAN_CRCR_MBCRC_MASK                      (0x7F0000UL)
#define CAN_CRCR_MBCRC_SHIFT                     (16UL)
/*! MBCRC - CRC Mailbox */
#define CAN_CRCR_MBCRC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CRCR_MBCRC_SHIFT)) & CAN_CRCR_MBCRC_MASK)
/*! @} */

/*! @name RXFGMASK - Rx FIFO Global Mask register */
/*! @{ */

#define CAN_RXFGMASK_FGM_MASK                    (0xFFFFFFFFUL)
#define CAN_RXFGMASK_FGM_SHIFT                   (0UL)
/*! FGM - Rx FIFO Global Mask Bits */
#define CAN_RXFGMASK_FGM(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_RXFGMASK_FGM_SHIFT)) & CAN_RXFGMASK_FGM_MASK)
/*! @} */

/*! @name RXFIR - Rx FIFO Information register */
/*! @{ */

#define CAN_RXFIR_IDHIT_MASK                     (0x1FFUL)
#define CAN_RXFIR_IDHIT_SHIFT                    (0UL)
/*! IDHIT - Identifier Acceptance Filter Hit Indicator */
#define CAN_RXFIR_IDHIT(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_RXFIR_IDHIT_SHIFT)) & CAN_RXFIR_IDHIT_MASK)
/*! @} */

/*! @name CBT - CAN Bit Timing register */
/*! @{ */

#define CAN_CBT_EPSEG2_MASK                      (0x1FUL)
#define CAN_CBT_EPSEG2_SHIFT                     (0UL)
/*! EPSEG2 - Extended Phase Segment 2 */
#define CAN_CBT_EPSEG2(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPSEG2_SHIFT)) & CAN_CBT_EPSEG2_MASK)

#define CAN_CBT_EPSEG1_MASK                      (0x3E0UL)
#define CAN_CBT_EPSEG1_SHIFT                     (5UL)
/*! EPSEG1 - Extended Phase Segment 1 */
#define CAN_CBT_EPSEG1(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPSEG1_SHIFT)) & CAN_CBT_EPSEG1_MASK)

#define CAN_CBT_EPROPSEG_MASK                    (0xFC00UL)
#define CAN_CBT_EPROPSEG_SHIFT                   (10UL)
/*! EPROPSEG - Extended Propagation Segment */
#define CAN_CBT_EPROPSEG(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPROPSEG_SHIFT)) & CAN_CBT_EPROPSEG_MASK)

#define CAN_CBT_ERJW_MASK                        (0x1F0000UL)
#define CAN_CBT_ERJW_SHIFT                       (16UL)
/*! ERJW - Extended Resync Jump Width */
#define CAN_CBT_ERJW(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_CBT_ERJW_SHIFT)) & CAN_CBT_ERJW_MASK)

#define CAN_CBT_EPRESDIV_MASK                    (0x7FE00000UL)
#define CAN_CBT_EPRESDIV_SHIFT                   (21UL)
/*! EPRESDIV - Extended Prescaler Division Factor */
#define CAN_CBT_EPRESDIV(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPRESDIV_SHIFT)) & CAN_CBT_EPRESDIV_MASK)

#define CAN_CBT_BTF_MASK                         (0x80000000UL)
#define CAN_CBT_BTF_SHIFT                        (31UL)
/*! BTF - Bit Timing Format Enable
 *  0b0..Extended bit time definitions disabled.
 *  0b1..Extended bit time definitions enabled.
 */
#define CAN_CBT_BTF(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_CBT_BTF_SHIFT)) & CAN_CBT_BTF_MASK)
/*! @} */

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB8B                        (32U)

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB8B                        (32U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB8B                      (32U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB8B2                     (2U)

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB16B                       (21U)

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB16B                       (21U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB16B                     (21U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB16B2                    (4U)

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB32B                       (12U)

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB32B                       (12U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB32B                     (12U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB32B2                    (8U)

/*! @name CS - Message Buffer 0 CS Register..Message Buffer 6 CS Register */
/*! @{ */

#define CAN_CS_TIME_STAMP_MASK                   (0xFFFFUL)
#define CAN_CS_TIME_STAMP_SHIFT                  (0UL)
/*! TIME_STAMP - Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running
 *    Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field
 *    appears on the CAN bus.
 */
#define CAN_CS_TIME_STAMP(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CS_TIME_STAMP_SHIFT)) & CAN_CS_TIME_STAMP_MASK)

#define CAN_CS_DLC_MASK                          (0xF0000UL)
#define CAN_CS_DLC_SHIFT                         (16UL)
/*! DLC - Length of the data to be stored/transmitted. */
#define CAN_CS_DLC(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_DLC_SHIFT)) & CAN_CS_DLC_MASK)

#define CAN_CS_RTR_MASK                          (0x100000UL)
#define CAN_CS_RTR_SHIFT                         (20UL)
/*! RTR - Remote Transmission Request. One/zero for remote/data frame. */
#define CAN_CS_RTR(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_RTR_SHIFT)) & CAN_CS_RTR_MASK)

#define CAN_CS_IDE_MASK                          (0x200000UL)
#define CAN_CS_IDE_SHIFT                         (21UL)
/*! IDE - ID Extended. One/zero for extended/standard format frame. */
#define CAN_CS_IDE(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_IDE_SHIFT)) & CAN_CS_IDE_MASK)

#define CAN_CS_SRR_MASK                          (0x400000UL)
#define CAN_CS_SRR_SHIFT                         (22UL)
/*! SRR - Substitute Remote Request. Contains a fixed recessive bit. */
#define CAN_CS_SRR(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_SRR_SHIFT)) & CAN_CS_SRR_MASK)

#define CAN_CS_CODE_MASK                         (0xF000000UL)
#define CAN_CS_CODE_SHIFT                        (24UL)
/*! CODE - Message Buffer Code. This 4-bit field can be accessed (read or write) by the CPU and by
 *    the FlexCAN module itself, as part of the message buffer matching and arbitration process.
 */
#define CAN_CS_CODE(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_CS_CODE_SHIFT)) & CAN_CS_CODE_MASK)

#define CAN_CS_ESI_MASK                          (0x20000000UL)
#define CAN_CS_ESI_SHIFT                         (29UL)
/*! ESI - Error State Indicator. This bit indicates if the transmitting node is error active or error passive. */
#define CAN_CS_ESI(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_ESI_SHIFT)) & CAN_CS_ESI_MASK)

#define CAN_CS_BRS_MASK                          (0x40000000UL)
#define CAN_CS_BRS_SHIFT                         (30UL)
/*! BRS - Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN FD format frame. */
#define CAN_CS_BRS(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_BRS_SHIFT)) & CAN_CS_BRS_MASK)

#define CAN_CS_EDL_MASK                          (0x80000000UL)
#define CAN_CS_EDL_SHIFT                         (31UL)
/*! EDL - Extended Data Length. This bit distinguishes between CAN format and CAN FD format frames.
 *    The EDL bit must not be set for Message Buffers configured to RANSWER with code field 0b1010.
 */
#define CAN_CS_EDL(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_EDL_SHIFT)) & CAN_CS_EDL_MASK)
/*! @} */

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB64B                       (7U)

/*! @name ID - Message Buffer 0 ID Register..Message Buffer 6 ID Register */
/*! @{ */

#define CAN_ID_EXT_MASK                          (0x3FFFFUL)
#define CAN_ID_EXT_SHIFT                         (0UL)
/*! EXT - Contains extended (LOW word) identifier of message buffer. */
#define CAN_ID_EXT(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_ID_EXT_SHIFT)) & CAN_ID_EXT_MASK)

#define CAN_ID_STD_MASK                          (0x1FFC0000UL)
#define CAN_ID_STD_SHIFT                         (18UL)
/*! STD - Contains standard/extended (HIGH word) identifier of message buffer. */
#define CAN_ID_STD(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_ID_STD_SHIFT)) & CAN_ID_STD_MASK)

#define CAN_ID_PRIO_MASK                         (0xE0000000UL)
#define CAN_ID_PRIO_SHIFT                        (29UL)
/*! PRIO - Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only
 *    makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular
 *    ID to define the transmission priority.
 */
#define CAN_ID_PRIO(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_ID_PRIO_SHIFT)) & CAN_ID_PRIO_MASK)
/*! @} */

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB64B                       (7U)

/*! @name WORD - Message Buffer 0 WORD_64B Register..Message Buffer 6 WORD_64B Register */
/*! @{ */

#define CAN_WORD_DATA_BYTE_3_MASK                (0xFFUL)
#define CAN_WORD_DATA_BYTE_3_SHIFT               (0UL)
/*! DATA_BYTE_3 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_3(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_3_SHIFT)) & CAN_WORD_DATA_BYTE_3_MASK)

#define CAN_WORD_DATA_BYTE_7_MASK                (0xFFUL)
#define CAN_WORD_DATA_BYTE_7_SHIFT               (0UL)
/*! DATA_BYTE_7 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_7(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_7_SHIFT)) & CAN_WORD_DATA_BYTE_7_MASK)

#define CAN_WORD_DATA_BYTE_11_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_11_SHIFT              (0UL)
/*! DATA_BYTE_11 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_11(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_11_SHIFT)) & CAN_WORD_DATA_BYTE_11_MASK)

#define CAN_WORD_DATA_BYTE_15_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_15_SHIFT              (0UL)
/*! DATA_BYTE_15 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_15(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_15_SHIFT)) & CAN_WORD_DATA_BYTE_15_MASK)

#define CAN_WORD_DATA_BYTE_19_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_19_SHIFT              (0UL)
/*! DATA_BYTE_19 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_19(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_19_SHIFT)) & CAN_WORD_DATA_BYTE_19_MASK)

#define CAN_WORD_DATA_BYTE_23_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_23_SHIFT              (0UL)
/*! DATA_BYTE_23 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_23(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_23_SHIFT)) & CAN_WORD_DATA_BYTE_23_MASK)

#define CAN_WORD_DATA_BYTE_27_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_27_SHIFT              (0UL)
/*! DATA_BYTE_27 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_27(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_27_SHIFT)) & CAN_WORD_DATA_BYTE_27_MASK)

#define CAN_WORD_DATA_BYTE_31_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_31_SHIFT              (0UL)
/*! DATA_BYTE_31 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_31(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_31_SHIFT)) & CAN_WORD_DATA_BYTE_31_MASK)

#define CAN_WORD_DATA_BYTE_35_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_35_SHIFT              (0UL)
/*! DATA_BYTE_35 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_35(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_35_SHIFT)) & CAN_WORD_DATA_BYTE_35_MASK)

#define CAN_WORD_DATA_BYTE_39_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_39_SHIFT              (0UL)
/*! DATA_BYTE_39 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_39(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_39_SHIFT)) & CAN_WORD_DATA_BYTE_39_MASK)

#define CAN_WORD_DATA_BYTE_43_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_43_SHIFT              (0UL)
/*! DATA_BYTE_43 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_43(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_43_SHIFT)) & CAN_WORD_DATA_BYTE_43_MASK)

#define CAN_WORD_DATA_BYTE_47_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_47_SHIFT              (0UL)
/*! DATA_BYTE_47 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_47(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_47_SHIFT)) & CAN_WORD_DATA_BYTE_47_MASK)

#define CAN_WORD_DATA_BYTE_51_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_51_SHIFT              (0UL)
/*! DATA_BYTE_51 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_51(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_51_SHIFT)) & CAN_WORD_DATA_BYTE_51_MASK)

#define CAN_WORD_DATA_BYTE_55_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_55_SHIFT              (0UL)
/*! DATA_BYTE_55 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_55(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_55_SHIFT)) & CAN_WORD_DATA_BYTE_55_MASK)

#define CAN_WORD_DATA_BYTE_59_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_59_SHIFT              (0UL)
/*! DATA_BYTE_59 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_59(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_59_SHIFT)) & CAN_WORD_DATA_BYTE_59_MASK)

#define CAN_WORD_DATA_BYTE_63_MASK               (0xFFUL)
#define CAN_WORD_DATA_BYTE_63_SHIFT              (0UL)
/*! DATA_BYTE_63 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_63(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_63_SHIFT)) & CAN_WORD_DATA_BYTE_63_MASK)

#define CAN_WORD_DATA_BYTE_2_MASK                (0xFF00UL)
#define CAN_WORD_DATA_BYTE_2_SHIFT               (8UL)
/*! DATA_BYTE_2 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_2(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_2_SHIFT)) & CAN_WORD_DATA_BYTE_2_MASK)

#define CAN_WORD_DATA_BYTE_6_MASK                (0xFF00UL)
#define CAN_WORD_DATA_BYTE_6_SHIFT               (8UL)
/*! DATA_BYTE_6 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_6(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_6_SHIFT)) & CAN_WORD_DATA_BYTE_6_MASK)

#define CAN_WORD_DATA_BYTE_10_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_10_SHIFT              (8UL)
/*! DATA_BYTE_10 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_10(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_10_SHIFT)) & CAN_WORD_DATA_BYTE_10_MASK)

#define CAN_WORD_DATA_BYTE_14_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_14_SHIFT              (8UL)
/*! DATA_BYTE_14 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_14(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_14_SHIFT)) & CAN_WORD_DATA_BYTE_14_MASK)

#define CAN_WORD_DATA_BYTE_18_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_18_SHIFT              (8UL)
/*! DATA_BYTE_18 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_18(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_18_SHIFT)) & CAN_WORD_DATA_BYTE_18_MASK)

#define CAN_WORD_DATA_BYTE_22_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_22_SHIFT              (8UL)
/*! DATA_BYTE_22 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_22(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_22_SHIFT)) & CAN_WORD_DATA_BYTE_22_MASK)

#define CAN_WORD_DATA_BYTE_26_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_26_SHIFT              (8UL)
/*! DATA_BYTE_26 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_26(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_26_SHIFT)) & CAN_WORD_DATA_BYTE_26_MASK)

#define CAN_WORD_DATA_BYTE_30_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_30_SHIFT              (8UL)
/*! DATA_BYTE_30 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_30(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_30_SHIFT)) & CAN_WORD_DATA_BYTE_30_MASK)

#define CAN_WORD_DATA_BYTE_34_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_34_SHIFT              (8UL)
/*! DATA_BYTE_34 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_34(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_34_SHIFT)) & CAN_WORD_DATA_BYTE_34_MASK)

#define CAN_WORD_DATA_BYTE_38_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_38_SHIFT              (8UL)
/*! DATA_BYTE_38 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_38(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_38_SHIFT)) & CAN_WORD_DATA_BYTE_38_MASK)

#define CAN_WORD_DATA_BYTE_42_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_42_SHIFT              (8UL)
/*! DATA_BYTE_42 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_42(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_42_SHIFT)) & CAN_WORD_DATA_BYTE_42_MASK)

#define CAN_WORD_DATA_BYTE_46_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_46_SHIFT              (8UL)
/*! DATA_BYTE_46 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_46(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_46_SHIFT)) & CAN_WORD_DATA_BYTE_46_MASK)

#define CAN_WORD_DATA_BYTE_50_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_50_SHIFT              (8UL)
/*! DATA_BYTE_50 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_50(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_50_SHIFT)) & CAN_WORD_DATA_BYTE_50_MASK)

#define CAN_WORD_DATA_BYTE_54_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_54_SHIFT              (8UL)
/*! DATA_BYTE_54 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_54(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_54_SHIFT)) & CAN_WORD_DATA_BYTE_54_MASK)

#define CAN_WORD_DATA_BYTE_58_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_58_SHIFT              (8UL)
/*! DATA_BYTE_58 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_58(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_58_SHIFT)) & CAN_WORD_DATA_BYTE_58_MASK)

#define CAN_WORD_DATA_BYTE_62_MASK               (0xFF00UL)
#define CAN_WORD_DATA_BYTE_62_SHIFT              (8UL)
/*! DATA_BYTE_62 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_62(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_62_SHIFT)) & CAN_WORD_DATA_BYTE_62_MASK)

#define CAN_WORD_DATA_BYTE_1_MASK                (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_1_SHIFT               (16UL)
/*! DATA_BYTE_1 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_1(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_1_SHIFT)) & CAN_WORD_DATA_BYTE_1_MASK)

#define CAN_WORD_DATA_BYTE_5_MASK                (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_5_SHIFT               (16UL)
/*! DATA_BYTE_5 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_5(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_5_SHIFT)) & CAN_WORD_DATA_BYTE_5_MASK)

#define CAN_WORD_DATA_BYTE_9_MASK                (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_9_SHIFT               (16UL)
/*! DATA_BYTE_9 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_9(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_9_SHIFT)) & CAN_WORD_DATA_BYTE_9_MASK)

#define CAN_WORD_DATA_BYTE_13_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_13_SHIFT              (16UL)
/*! DATA_BYTE_13 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_13(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_13_SHIFT)) & CAN_WORD_DATA_BYTE_13_MASK)

#define CAN_WORD_DATA_BYTE_17_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_17_SHIFT              (16UL)
/*! DATA_BYTE_17 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_17(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_17_SHIFT)) & CAN_WORD_DATA_BYTE_17_MASK)

#define CAN_WORD_DATA_BYTE_21_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_21_SHIFT              (16UL)
/*! DATA_BYTE_21 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_21(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_21_SHIFT)) & CAN_WORD_DATA_BYTE_21_MASK)

#define CAN_WORD_DATA_BYTE_25_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_25_SHIFT              (16UL)
/*! DATA_BYTE_25 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_25(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_25_SHIFT)) & CAN_WORD_DATA_BYTE_25_MASK)

#define CAN_WORD_DATA_BYTE_29_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_29_SHIFT              (16UL)
/*! DATA_BYTE_29 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_29(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_29_SHIFT)) & CAN_WORD_DATA_BYTE_29_MASK)

#define CAN_WORD_DATA_BYTE_33_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_33_SHIFT              (16UL)
/*! DATA_BYTE_33 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_33(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_33_SHIFT)) & CAN_WORD_DATA_BYTE_33_MASK)

#define CAN_WORD_DATA_BYTE_37_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_37_SHIFT              (16UL)
/*! DATA_BYTE_37 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_37(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_37_SHIFT)) & CAN_WORD_DATA_BYTE_37_MASK)

#define CAN_WORD_DATA_BYTE_41_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_41_SHIFT              (16UL)
/*! DATA_BYTE_41 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_41(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_41_SHIFT)) & CAN_WORD_DATA_BYTE_41_MASK)

#define CAN_WORD_DATA_BYTE_45_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_45_SHIFT              (16UL)
/*! DATA_BYTE_45 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_45(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_45_SHIFT)) & CAN_WORD_DATA_BYTE_45_MASK)

#define CAN_WORD_DATA_BYTE_49_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_49_SHIFT              (16UL)
/*! DATA_BYTE_49 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_49(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_49_SHIFT)) & CAN_WORD_DATA_BYTE_49_MASK)

#define CAN_WORD_DATA_BYTE_53_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_53_SHIFT              (16UL)
/*! DATA_BYTE_53 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_53(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_53_SHIFT)) & CAN_WORD_DATA_BYTE_53_MASK)

#define CAN_WORD_DATA_BYTE_57_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_57_SHIFT              (16UL)
/*! DATA_BYTE_57 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_57(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_57_SHIFT)) & CAN_WORD_DATA_BYTE_57_MASK)

#define CAN_WORD_DATA_BYTE_61_MASK               (0xFF0000UL)
#define CAN_WORD_DATA_BYTE_61_SHIFT              (16UL)
/*! DATA_BYTE_61 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_61(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_61_SHIFT)) & CAN_WORD_DATA_BYTE_61_MASK)

#define CAN_WORD_DATA_BYTE_0_MASK                (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_0_SHIFT               (24UL)
/*! DATA_BYTE_0 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_0(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_0_SHIFT)) & CAN_WORD_DATA_BYTE_0_MASK)

#define CAN_WORD_DATA_BYTE_4_MASK                (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_4_SHIFT               (24UL)
/*! DATA_BYTE_4 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_4(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_4_SHIFT)) & CAN_WORD_DATA_BYTE_4_MASK)

#define CAN_WORD_DATA_BYTE_8_MASK                (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_8_SHIFT               (24UL)
/*! DATA_BYTE_8 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_8(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_8_SHIFT)) & CAN_WORD_DATA_BYTE_8_MASK)

#define CAN_WORD_DATA_BYTE_12_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_12_SHIFT              (24UL)
/*! DATA_BYTE_12 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_12(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_12_SHIFT)) & CAN_WORD_DATA_BYTE_12_MASK)

#define CAN_WORD_DATA_BYTE_16_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_16_SHIFT              (24UL)
/*! DATA_BYTE_16 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_16(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_16_SHIFT)) & CAN_WORD_DATA_BYTE_16_MASK)

#define CAN_WORD_DATA_BYTE_20_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_20_SHIFT              (24UL)
/*! DATA_BYTE_20 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_20(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_20_SHIFT)) & CAN_WORD_DATA_BYTE_20_MASK)

#define CAN_WORD_DATA_BYTE_24_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_24_SHIFT              (24UL)
/*! DATA_BYTE_24 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_24(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_24_SHIFT)) & CAN_WORD_DATA_BYTE_24_MASK)

#define CAN_WORD_DATA_BYTE_28_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_28_SHIFT              (24UL)
/*! DATA_BYTE_28 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_28(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_28_SHIFT)) & CAN_WORD_DATA_BYTE_28_MASK)

#define CAN_WORD_DATA_BYTE_32_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_32_SHIFT              (24UL)
/*! DATA_BYTE_32 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_32(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_32_SHIFT)) & CAN_WORD_DATA_BYTE_32_MASK)

#define CAN_WORD_DATA_BYTE_36_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_36_SHIFT              (24UL)
/*! DATA_BYTE_36 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_36(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_36_SHIFT)) & CAN_WORD_DATA_BYTE_36_MASK)

#define CAN_WORD_DATA_BYTE_40_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_40_SHIFT              (24UL)
/*! DATA_BYTE_40 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_40(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_40_SHIFT)) & CAN_WORD_DATA_BYTE_40_MASK)

#define CAN_WORD_DATA_BYTE_44_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_44_SHIFT              (24UL)
/*! DATA_BYTE_44 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_44(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_44_SHIFT)) & CAN_WORD_DATA_BYTE_44_MASK)

#define CAN_WORD_DATA_BYTE_48_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_48_SHIFT              (24UL)
/*! DATA_BYTE_48 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_48(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_48_SHIFT)) & CAN_WORD_DATA_BYTE_48_MASK)

#define CAN_WORD_DATA_BYTE_52_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_52_SHIFT              (24UL)
/*! DATA_BYTE_52 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_52(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_52_SHIFT)) & CAN_WORD_DATA_BYTE_52_MASK)

#define CAN_WORD_DATA_BYTE_56_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_56_SHIFT              (24UL)
/*! DATA_BYTE_56 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_56(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_56_SHIFT)) & CAN_WORD_DATA_BYTE_56_MASK)

#define CAN_WORD_DATA_BYTE_60_MASK               (0xFF000000UL)
#define CAN_WORD_DATA_BYTE_60_SHIFT              (24UL)
/*! DATA_BYTE_60 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_60(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_60_SHIFT)) & CAN_WORD_DATA_BYTE_60_MASK)
/*! @} */

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB64B                     (7U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB64B2                    (16U)

/* The count of CAN_CS */
#define CAN_CS_COUNT                             (32U)

/* The count of CAN_ID */
#define CAN_ID_COUNT                             (32U)

/*! @name WORD0 - Message Buffer 0 WORD0 Register..Message Buffer 31 WORD0 Register */
/*! @{ */

#define CAN_WORD0_DATA_BYTE_3_MASK               (0xFFUL)
#define CAN_WORD0_DATA_BYTE_3_SHIFT              (0UL)
/*! DATA_BYTE_3 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_3(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_3_SHIFT)) & CAN_WORD0_DATA_BYTE_3_MASK)

#define CAN_WORD0_DATA_BYTE_2_MASK               (0xFF00UL)
#define CAN_WORD0_DATA_BYTE_2_SHIFT              (8UL)
/*! DATA_BYTE_2 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_2(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_2_SHIFT)) & CAN_WORD0_DATA_BYTE_2_MASK)

#define CAN_WORD0_DATA_BYTE_1_MASK               (0xFF0000UL)
#define CAN_WORD0_DATA_BYTE_1_SHIFT              (16UL)
/*! DATA_BYTE_1 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_1(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_1_SHIFT)) & CAN_WORD0_DATA_BYTE_1_MASK)

#define CAN_WORD0_DATA_BYTE_0_MASK               (0xFF000000UL)
#define CAN_WORD0_DATA_BYTE_0_SHIFT              (24UL)
/*! DATA_BYTE_0 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_0(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_0_SHIFT)) & CAN_WORD0_DATA_BYTE_0_MASK)
/*! @} */

/* The count of CAN_WORD0 */
#define CAN_WORD0_COUNT                          (32U)

/*! @name WORD1 - Message Buffer 0 WORD1 Register..Message Buffer 31 WORD1 Register */
/*! @{ */

#define CAN_WORD1_DATA_BYTE_7_MASK               (0xFFUL)
#define CAN_WORD1_DATA_BYTE_7_SHIFT              (0UL)
/*! DATA_BYTE_7 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_7(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_7_SHIFT)) & CAN_WORD1_DATA_BYTE_7_MASK)

#define CAN_WORD1_DATA_BYTE_6_MASK               (0xFF00UL)
#define CAN_WORD1_DATA_BYTE_6_SHIFT              (8UL)
/*! DATA_BYTE_6 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_6(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_6_SHIFT)) & CAN_WORD1_DATA_BYTE_6_MASK)

#define CAN_WORD1_DATA_BYTE_5_MASK               (0xFF0000UL)
#define CAN_WORD1_DATA_BYTE_5_SHIFT              (16UL)
/*! DATA_BYTE_5 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_5(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_5_SHIFT)) & CAN_WORD1_DATA_BYTE_5_MASK)

#define CAN_WORD1_DATA_BYTE_4_MASK               (0xFF000000UL)
#define CAN_WORD1_DATA_BYTE_4_SHIFT              (24UL)
/*! DATA_BYTE_4 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_4(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_4_SHIFT)) & CAN_WORD1_DATA_BYTE_4_MASK)
/*! @} */

/* The count of CAN_WORD1 */
#define CAN_WORD1_COUNT                          (32U)

/*! @name RXIMR - Rx Individual Mask registers */
/*! @{ */

#define CAN_RXIMR_MI_MASK                        (0xFFFFFFFFUL)
#define CAN_RXIMR_MI_SHIFT                       (0UL)
/*! MI - Individual Mask Bits */
#define CAN_RXIMR_MI(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_RXIMR_MI_SHIFT)) & CAN_RXIMR_MI_MASK)
/*! @} */

/*! @name FDCTRL - CAN FD Control register */
/*! @{ */

#define CAN_FDCTRL_TDCVAL_MASK                   (0x3FUL)
#define CAN_FDCTRL_TDCVAL_SHIFT                  (0UL)
/*! TDCVAL - Transceiver Delay Compensation Value */
#define CAN_FDCTRL_TDCVAL(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCVAL_SHIFT)) & CAN_FDCTRL_TDCVAL_MASK)

#define CAN_FDCTRL_TDCOFF_MASK                   (0x1F00UL)
#define CAN_FDCTRL_TDCOFF_SHIFT                  (8UL)
/*! TDCOFF - Transceiver Delay Compensation Offset */
#define CAN_FDCTRL_TDCOFF(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCOFF_SHIFT)) & CAN_FDCTRL_TDCOFF_MASK)

#define CAN_FDCTRL_TDCFAIL_MASK                  (0x4000UL)
#define CAN_FDCTRL_TDCFAIL_SHIFT                 (14UL)
/*! TDCFAIL - Transceiver Delay Compensation Fail
 *  0b0..Measured loop delay is in range.
 *  0b1..Measured loop delay is out of range.
 */
#define CAN_FDCTRL_TDCFAIL(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCFAIL_SHIFT)) & CAN_FDCTRL_TDCFAIL_MASK)

#define CAN_FDCTRL_TDCEN_MASK                    (0x8000UL)
#define CAN_FDCTRL_TDCEN_SHIFT                   (15UL)
/*! TDCEN - Transceiver Delay Compensation Enable
 *  0b0..TDC is disabled
 *  0b1..TDC is enabled
 */
#define CAN_FDCTRL_TDCEN(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCEN_SHIFT)) & CAN_FDCTRL_TDCEN_MASK)

#define CAN_FDCTRL_MBDSR0_MASK                   (0x30000UL)
#define CAN_FDCTRL_MBDSR0_SHIFT                  (16UL)
/*! MBDSR0 - Message Buffer Data Size for Region 0
 *  0b00..Selects 8 bytes per message buffer.
 *  0b01..Selects 16 bytes per message buffer.
 *  0b10..Selects 32 bytes per message buffer.
 *  0b11..Selects 64 bytes per message buffer.
 */
#define CAN_FDCTRL_MBDSR0(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_MBDSR0_SHIFT)) & CAN_FDCTRL_MBDSR0_MASK)

#define CAN_FDCTRL_FDRATE_MASK                   (0x80000000UL)
#define CAN_FDCTRL_FDRATE_SHIFT                  (31UL)
/*! FDRATE - Bit Rate Switch Enable
 *  0b0..Transmit a frame in nominal rate. The BRS bit in the Tx MB has no effect.
 *  0b1..Transmit a frame with bit rate switching if the BRS bit in the Tx MB is recessive.
 */
#define CAN_FDCTRL_FDRATE(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_FDRATE_SHIFT)) & CAN_FDCTRL_FDRATE_MASK)
/*! @} */

/*! @name FDCBT - CAN FD Bit Timing register */
/*! @{ */

#define CAN_FDCBT_FPSEG2_MASK                    (0x7UL)
#define CAN_FDCBT_FPSEG2_SHIFT                   (0UL)
/*! FPSEG2 - Fast Phase Segment 2 */
#define CAN_FDCBT_FPSEG2(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPSEG2_SHIFT)) & CAN_FDCBT_FPSEG2_MASK)

#define CAN_FDCBT_FPSEG1_MASK                    (0xE0UL)
#define CAN_FDCBT_FPSEG1_SHIFT                   (5UL)
/*! FPSEG1 - Fast Phase Segment 1 */
#define CAN_FDCBT_FPSEG1(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPSEG1_SHIFT)) & CAN_FDCBT_FPSEG1_MASK)

#define CAN_FDCBT_FPROPSEG_MASK                  (0x7C00UL)
#define CAN_FDCBT_FPROPSEG_SHIFT                 (10UL)
/*! FPROPSEG - Fast Propagation Segment */
#define CAN_FDCBT_FPROPSEG(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPROPSEG_SHIFT)) & CAN_FDCBT_FPROPSEG_MASK)

#define CAN_FDCBT_FRJW_MASK                      (0x70000UL)
#define CAN_FDCBT_FRJW_SHIFT                     (16UL)
/*! FRJW - Fast Resync Jump Width */
#define CAN_FDCBT_FRJW(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FRJW_SHIFT)) & CAN_FDCBT_FRJW_MASK)

#define CAN_FDCBT_FPRESDIV_MASK                  (0x3FF00000UL)
#define CAN_FDCBT_FPRESDIV_SHIFT                 (20UL)
/*! FPRESDIV - Fast Prescaler Division Factor */
#define CAN_FDCBT_FPRESDIV(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPRESDIV_SHIFT)) & CAN_FDCBT_FPRESDIV_MASK)
/*! @} */

/*! @name FDCRC - CAN FD CRC register */
/*! @{ */

#define CAN_FDCRC_FD_TXCRC_MASK                  (0x1FFFFFUL)
#define CAN_FDCRC_FD_TXCRC_SHIFT                 (0UL)
/*! FD_TXCRC - Extended Transmitted CRC value */
#define CAN_FDCRC_FD_TXCRC(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCRC_FD_TXCRC_SHIFT)) & CAN_FDCRC_FD_TXCRC_MASK)

#define CAN_FDCRC_FD_MBCRC_MASK                  (0x7F000000UL)
#define CAN_FDCRC_FD_MBCRC_SHIFT                 (24UL)
/*! FD_MBCRC - CRC Mailbox Number for FD_TXCRC */
#define CAN_FDCRC_FD_MBCRC(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCRC_FD_MBCRC_SHIFT)) & CAN_FDCRC_FD_MBCRC_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CAN_Register_Masks */


/*!
 * @}
 */ /* end of group CAN_Peripheral_Access_Layer */


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


#endif  /* CAN_H_ */
