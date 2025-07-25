/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * Copyright 2020, 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FLASH_CONFIG_H_
#define _FLASH_CONFIG_H_

/******************* Bootloader Configuration Area ************************/

#define BCA_CRC_START_ADDRESS  0xFFFFFFFFU
#define BCA_CRC_BYTE_COUNTS    0xFFFFFFFFU
#define BCA_CRC_EXPECTED_VALUE 0xFFFFFFFFU

/*
 * BCA_ENABLED_PERIPHERALS
 *   Bit[1]: LPI2C. 0b1 = enable, 0b0 = disable.
 *   Bit[0]: QSCI/UART. 0b1 = enable, 0b0 = disable.
 */
#define BCA_ENABLED_PERIPHERALS 0xFFU

/*
 * If BCA_I2C_SLAVE_ADDRESS = 0xFF, the I2C addr = 0x10,
 * otherwise use the BCA_I2C_SLAVE_ADDRESS[6:0] as I2C slave addr.
 */
#define BCA_I2C_SLAVE_ADDRESS 0xFFU

/*
 * If BCA_PERIPHERAL_DETECTION_TIMEOUT = 0xFFFF, the timeout = 5000ms.
 * otherwise timeout = BCA_PERIPHERAL_DETECTION_TIMEOUT in unit ms.
 */
#define BCA_PERIPHERAL_DETECTION_TIMEOUT 0xFFFFU

/*
 * If BCA_DIRECT_BOOT_FLAG = 0xFE, means direct boot,
 * otherwise not direct boot.
 */
#define BCA_DIRECT_BOOT_FLAG 0xFFU

/************************** Flash configuration field *********************/

/*
 * Avoid to set BACKDOOR KEY all 1s or 0s, otherwise no way back to
 * OEM_OPEN in case enter OEM_CLOSE ROP1/2 by accident.
 */
#define FCF_BACKDOOR_KEY0          0xA8U
#define FCF_BACKDOOR_KEY1          0xFFU
#define FCF_BACKDOOR_KEY2          0xFFU
#define FCF_BACKDOOR_KEY3          0xFFU
#define FCF_BACKDOOR_KEY4          0xFFU
#define FCF_BACKDOOR_KEY5          0xFFU
#define FCF_BACKDOOR_KEY6          0xFFU
#define FCF_BACKDOOR_KEY7          0xFFU
#define FCF_FLASH_PROTECTION_BYTE0 0xFFU
#define FCF_FLASH_PROTECTION_BYTE1 0xFFU
#define FCF_FLASH_PROTECTION_BYTE2 0xFFU
#define FCF_FLASH_PROTECTION_BYTE3 0xFFU

/*
 * FCF_FLASH_SECURE_BYTE, values for life cycle state:
 *   0xFE: OEM_OPEN_ROP0
 *   0x90: OEM_CLOSED_ROP1
 *   0x95: OEM_CLOSED_ROP2
 *   0x9B: OEM_CLOSED_ROP3
 *   0x6B: OEM_CLOSED_NO_RETURN
 *   Other Values: Reversed and must not be used.
 */
#define FCF_FLASH_SECURE_BYTE 0xFEU

/*
 * FCF_FLASH_OPTION_BYTE
 *   Bit[0]:   PowerMode. 0b1 = writing SIM_PWRMODE register takes effect, writing SIM_PWR register doesn't take effect.
 *                        0b0 = writing SIM_PWRMODE register doesn't take effect, writing SIM_PWR register takes effect.
 */
#define FCF_FLASH_OPTION_BYTE 0xFFU

#endif /* _FLASH_CONFIG_H_*/
