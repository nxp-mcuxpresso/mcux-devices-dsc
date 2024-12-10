/*
 * Copyright 2019 - 2022 NXP
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_flash.h"

/*
 * Caution: this driver works only in LDM mode.
 *
 * MC56F81xxx has one flash block, it doesn't support to access the flash block while it performs erase/program
 * operation.
 *
 * If move the vector table, ISR code to RAM(mapping to flash space), then it is OK to enable the interrupt, since
 * there is no access(even the ISR) to the flash block which is performing erase/program operation.
 *
 * Anyway for safety reason, it is highly recommended to disable the interrupt before ROM flash API call.
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.dsc_flash"
#endif

/* ROM API tree entry address, fixed, don't change it */
#define ROM_API_TREE_ADDREE 0x78100UL

/*********************************************************************************************************************
 *                               Structure with API function pointers members
 *********************************************************************************************************************/
/* @brief Interface for the flash driver. */
typedef struct
{
    void (*runBootloader)(void *arg);
    standard_version_t version;
    flash_status_t (*flash_init)(flash_config_t *config);
    flash_status_t (*flash_erase_all)(flash_config_t *config, uint32_t key);
    flash_status_t (*flash_erase_all_unsecure)(flash_config_t *config, uint32_t key);
    flash_status_t (*flash_erase)(flash_config_t *config, uint32_t start, uint32_t lengthInBytes, uint32_t key);
    flash_status_t (*flash_program)(flash_config_t *config, uint32_t start, uint8_t *src, uint32_t lengthInBytes);

    flash_status_t (*flash_get_security_state)(flash_config_t *config, flash_security_state_t *state);
    flash_status_t (*flash_security_bypass)(flash_config_t *config, const uint8_t *backdoorKey);
    flash_status_t (*flash_verify_erase_all)(flash_config_t *config, flash_margin_value_t margin);
    flash_status_t (*flash_verify_erase)(flash_config_t *config,
                                         uint32_t start,
                                         uint32_t lengthInBytes,
                                         flash_margin_value_t margin);
    flash_status_t (*flash_verify_program)(flash_config_t *config,
                                           uint32_t start,
                                           uint32_t lengthInBytes,
                                           const uint8_t *expectedData,
                                           flash_margin_value_t margin,
                                           uint32_t *failedAddress,
                                           uint32_t *failedData);
    flash_status_t (*flash_get_property)(flash_config_t *config, flash_property_tag_t whichProperty, uint32_t *value);
    flash_status_t (*flash_program_once)(ftfx_config_t *config, uint32_t index, uint8_t *src, uint32_t lengthInBytes);
    flash_status_t (*flash_read_once)(ftfx_config_t *config, uint32_t index, uint8_t *dst, uint32_t lengthInBytes);
    flash_status_t (*flash_read_resource)(
        flash_config_t *config, uint32_t start, uint8_t *dst, uint32_t lengthInBytes, flash_read_resource_opt_t option);
} rom_api_tree_t;

/*******************************************************************************
 * Variables
 ******************************************************************************/
static volatile rom_api_tree_t *sROMFlashDrive = (rom_api_tree_t *)ROM_API_TREE_ADDREE;

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Initializes the global flash properties structure members.
 */
flash_status_t FLASH_Init(flash_config_t *config)
{
    return sROMFlashDrive->flash_init(config);
}

/*!
 * @brief Returns the desired flash property.
 */
flash_status_t FLASH_GetProperty(flash_config_t *config, flash_property_tag_t whichProperty, uint32_t *value)
{
    standard_version_t version;

    if (whichProperty == kFLASH_PropertyVersion)
    {
        version.B.name   = (char)kFLASH_DriverVersionName;
        version.B.major  = (uint8_t)kFLASH_DriverVersionMajor;
        version.B.minor  = (uint8_t)kFLASH_DriverVersionMinor;
        version.B.bugfix = (uint8_t)kFLASH_DriverVersionBugfix;
        *value           = version.version;
        return kStatus_Success;
    }
    return sROMFlashDrive->flash_get_property(config, whichProperty, value);
}

/*!
 * @brief Erases the flash sectors encompassed by parameters passed into function.
 */
flash_status_t FLASH_Erase(flash_config_t *config, uint32_t start, uint32_t lengthInBytes, uint32_t key)
{
    return sROMFlashDrive->flash_erase(config, start, lengthInBytes, key);
}

/*!
 * @brief Erases entire flash, after done flash is on security status
 */
flash_status_t FLASH_EraseAll(flash_config_t *config, uint32_t key)
{
    return sROMFlashDrive->flash_erase_all(config, key);
}

/*!
 * @brief Erases the entire flash, after done flash is on unsecurity status
 */
flash_status_t FLASH_EraseAllUnsecure(flash_config_t *config, uint32_t key)
{
    return sROMFlashDrive->flash_erase_all_unsecure(config, key);
}

/*!
 * @brief Programs flash with data at locations passed in through parameters via the Program command.
 */
flash_status_t FLASH_Program(flash_config_t *config, uint32_t start, uint8_t *src, uint32_t lengthInBytes)
{
    return sROMFlashDrive->flash_program(config, start, src, lengthInBytes);
}

/*!
 * @brief Verifies an erasure of the desired flash area at a specified margin level.
 */
flash_status_t FLASH_VerifyErase(flash_config_t *config,
                                 uint32_t start,
                                 uint32_t lengthInBytes,
                                 flash_margin_value_t margin)
{
    return sROMFlashDrive->flash_verify_erase(config, start, lengthInBytes, margin);
}

/*!
 * @brief Verifies erasure of the entire flash at a specified margin level.
 */
flash_status_t FLASH_VerifyEraseAll(flash_config_t *config, flash_margin_value_t margin)
{
    return sROMFlashDrive->flash_verify_erase_all(config, margin);
}

/*!
 * @brief Verifies programming of the desired flash area at a specified margin level.
 */
flash_status_t FLASH_VerifyProgram(flash_config_t *config,
                                   uint32_t start,
                                   uint32_t lengthInBytes,
                                   const uint8_t *expectedData,
                                   flash_margin_value_t margin,
                                   uint32_t *failedAddress,
                                   uint32_t *failedData)
{
    return sROMFlashDrive->flash_verify_program(config, start, lengthInBytes, expectedData, margin, failedAddress,
                                                failedData);
}

/*!
 * @brief Returns the security state via the pointer passed into the function.
 */
flash_status_t FLASH_GetSecurityState(flash_config_t *config, flash_security_state_t *state)
{
    return sROMFlashDrive->flash_get_security_state(config, state);
}

/*!
 * @brief Reads the Program Once Field through parameters.
 */
flash_status_t FLASH_ReadOnce(ftfx_config_t *config, uint32_t index, uint8_t *dst, uint32_t lengthInBytes)
{
    return sROMFlashDrive->flash_read_once(config, index, dst, lengthInBytes);
}

/*!
 * @brief Reads the resource with data at locations passed in through parameters.
 */
flash_status_t FLASH_ReadResource(
    flash_config_t *config, uint32_t start, uint8_t *dst, uint32_t lengthInBytes, flash_read_resource_opt_t option)
{
    return sROMFlashDrive->flash_read_resource(config, start, dst, lengthInBytes, option);
}

/*!
 * @brief Programs Program Once Field through parameters.
 */
flash_status_t FLASH_ProgramOnce(ftfx_config_t *config, uint32_t index, uint8_t *src, uint32_t lengthInBytes)
{
    return sROMFlashDrive->flash_program_once(config, index, src, lengthInBytes);
}

/*!
 * @brief Allows users to bypass security with a backdoor key.
 */
flash_status_t FLASH_SecurityBypass(flash_config_t *config, const uint8_t *backdoorKey)
{
    return sROMFlashDrive->flash_security_bypass(config, backdoorKey);
}
