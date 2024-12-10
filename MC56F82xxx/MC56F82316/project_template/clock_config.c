/*
 * Copyright 2021-2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/
/*
 * Clock initialization functions.
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v8.0
processor: MC56F82316
package_id: MC56F82316VLF
mcu_data: ksdk2_0
processor_version: 0.10.5
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

#include "fsl_clock.h"
#include "clock_config.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/
void BOARD_InitBootClocks(void)
{
    BOARD_BootClockRUN();
}

/*******************************************************************************
 ********************** Configuration BOARD_BootClockRUN ***********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockRUN
called_from_default_init: true
outputs:
- {id: BUS_2X_CLK.outFreq, value: 100 MHz}
- {id: BUS_CLK.outFreq, value: 50 MHz}
- {id: CPU_CLK.outFreq, value: 50 MHz}
- {id: IIC0_FLT_CLK.outFreq, value: 50 MHz}
- {id: MSTR_OSC.outFreq, value: 8 MHz}
- {id: PWM_2X_CLK.outFreq, value: 200 MHz}
- {id: PWM_CLK.outFreq, value: 100 MHz}
- {id: ROSC200kHz_CLK.outFreq, value: 200 kHz}
- {id: ROSC8MHz_CLK.outFreq, value: 8 MHz}
- {id: SCI0_CLK.outFreq, value: 50 MHz}
- {id: SCI1_CLK.outFreq, value: 50 MHz}
- {id: SYS_2X_CLK.outFreq, value: 100 MHz}
- {id: SYS_CLK.outFreq, value: 50 MHz}
- {id: SYS_FTFA.outFreq, value: 25 MHz}
- {id: TMR_CLK.outFreq, value: 50 MHz}
settings:
- {id: OCCS.COD.scale, value: '2', locked: true}
- {id: OCCS.DIV.scale, value: '1', locked: true}
- {id: OCCS.EXT_SEL.sel, value: OCCS.OSC}
- {id: OCCS.PLLDB.scale, value: '50', locked: true}
- {id: OCCS.PWM_DIV2.sel, value: OCCS.PLL_DIV2}
- {id: OCCS.ZSRC.sel, value: OCCS.PLL_DIV2}
- {id: OCCS_CTRL_PLLPD_CFG, value: Enabled}
- {id: OCCS_OSCTL2_ROPD200K_CFG, value: Enabled}
sources:
- {id: OCCS.ROSC200kHz.outFreq, value: 200 kHz}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockRUN configuration
 ******************************************************************************/
clock_config_t occsConfig_BOARD_BootClockRUN =
    {
        .bCrystalOscEnable = false,               /* Crystal oscillator is disabled */
        .bFircEnable = true,                      /* RC oscillator 8 MHz is enabled */
        .bSircEnable = true,                      /* RC oscillator 200 kHz is enabled */
        .bPllEnable = true,                       /* PLL is enabled */
        .bCrystalOscMonitorEnable = false,        /* External crystal (XOSC) clock monitor is disabled. */
        .eFircSel = kCLOCK_FircSel_8M,            /* FIRC normal mode, output 8M */
        .eCrystalOscMode = kCLOCK_CrystalOscModeFSP,/* High power mode of the external oscillator (crystal oscillator in in Full Swing Pierce (FSP) mode) */
        .eExtClkSrc = kCLOCK_ExtClkSrcCrystalOsc, /* External crystal oscillator (OSC) */
        .eClkInSel = kCLOCK_SelClkIn0,            /* External reference clock CLKIN0 */
        .eMstrOscClkSrc = kCLOCK_MstrOscClkSrcFirc,/* 8 MHz / 400KHz fast internal RC oscillator */
        .eMstr2xClkSrc = kCLOCK_Mstr2xClkSrcPllDiv2,/* PLL output clock divided by 2 */
        .eMstr2xClkPostScale = kCLOCK_PostscaleDiv2,/* mast_2x_clk = clkSrc / 2 */
        .u32PllClkFreq = 400000000U,              /* PLL output frequency: 400000000Hz */
    };

/*******************************************************************************
 * Code for BOARD_BootClockRUN configuration
 ******************************************************************************/
void BOARD_BootClockRUN(void)
{
    /* Check the run mode - switch all power regulators in the normal mode if they are placed in standby or disabled mode. */
    /* If the advanced power mode is enabled in the Flash Options register. */
    if (FTFA->FOPT & 0x1) {
        /* If the Very Low Power Run mode is active. */
        if (SIM->PWRMODE & SIM_PWRMODE_VLPMS_MASK) {
            SIM->PWRMODE &= ~SIM_PWRMODE_VLPMODE_MASK;
            while (SIM->PWRMODE & SIM_PWRMODE_VLPMS_MASK){} /* Waiting to switch back from the Very Low Power Run mode. */
        }
        /* If the Low Power Run mode is active. */
        if (SIM->PWRMODE & SIM_PWRMODE_LPMS_MASK) {
            SIM->PWRMODE &= ~SIM_PWRMODE_LPMODE_MASK;
            while (SIM->PWRMODE & SIM_PWRMODE_LPMS_MASK) {} /* Waiting to switch back from the Low Power Run mode. */
        }
        while (!(PMC->STS & PMC_STS_SR27_MASK)) {} /* Waiting for small regulator 2.7V supply is ready to be used. */
    } else {
        /* If a standby or power down state of any regulator is activated. */
        if (SIM->PWR & (SIM_PWR_SR12STDBY_MASK | SIM_PWR_SR27PDN_MASK | SIM_PWR_SR27STDBY_MASK | SIM_PWR_LRSTDBY_MASK)) {
            SIM->PWR = 0; /* Enter the run mode - switch all power regulators into the normal mode. */
             while (!(PMC->STS & PMC_STS_SR27_MASK)) {} /* Waiting for small regulator 2.7V supply is ready to be used. */
        }
    }
    /* Set clock configuration of the OCCS module. */
    CLOCK_SetClkConfig(&occsConfig_BOARD_BootClockRUN);
}

