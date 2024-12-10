/*
 * Copyright 2021-2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v10.0
processor: MC56F84553
package_id: MC56F84553VLH
mcu_data: ksdk2_0
processor_version: 0.10.4
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 86257b75-723c-4947-ab03-c6d88072c440
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
  - init_delay_enable: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * INTC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'INTC'
- type: 'intc_reg'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'intc_reg_5d361a53fef6bec91d1f7c2aeedd895b'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'INTC'
- config_sets:
  - intc:
    - dsc_core_int_level: 'mask_level_0_1_2'
    - interrupt_table: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void INTC_init(void) {
} */

/***********************************************************************************************************************
 * Flash_configuration initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'Flash_configuration'
- type: 'dsc_flash_config'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'dsc_flash_config_87b8cda2db02ccd1732cf954ffb02af3'
- functional_group: 'BOARD_InitPeripherals'
- config_sets:
  - fcf_config:
    - flashConfig:
      - keyBytes:
        - 0:
          - byteValue: '0xFF'
        - 1:
          - byteValue: '0xFF'
        - 2:
          - byteValue: '0xFF'
        - 3:
          - byteValue: '0xFF'
        - 4:
          - byteValue: '0xFF'
        - 5:
          - byteValue: '0xFF'
        - 6:
          - byteValue: '0xFF'
        - 7:
          - byteValue: '0xFF'
      - protBytes:
        - 0:
          - byteValue: '0xFF'
        - 1:
          - byteValue: '0xFF'
        - 2:
          - byteValue: '0xFF'
        - 3:
          - byteValue: '0xFF'
      - EPROT: '0'
      - DPROT: '0'
      - FSEC:
        - SEC: 'unsecure'
        - FSLACC: 'granted'
        - KEYEN: 'false'
        - MEEN: 'true'
      - pwrMode: '1'
    - fcf_codegenerator: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void Flash_configuration_init(void) {
} */

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
static void BOARD_InitPeripherals_CommonPreInit(void)
{
  /* Disable all interrupts to prevent invoking of any interrupt during initialization of peripherals. */
  INTC->CTRL |= INTC_CTRL_INT_DIS_MASK;
}

static void BOARD_InitPeripherals_CommonPostInit(void)
{
  /* Enable all interrupts after initialization of peripherals. */
  INTC->CTRL &= ~INTC_CTRL_INT_DIS_MASK;
  /* Initialization of masked/enabled DSC core interrupt levels. */
  __EI(3);
}

void BOARD_InitPeripherals(void)
{
  /* Common pre-initialization */
  BOARD_InitPeripherals_CommonPreInit();
  /* Initialize components */
  /* Common post-initialization */
  BOARD_InitPeripherals_CommonPostInit();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
