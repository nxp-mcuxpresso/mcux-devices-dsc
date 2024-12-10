# Copyright 2024 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_add_source( SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.dsc_sim_mc56f80xxx)
    mcux_add_source( SOURCES fsl_sim.h )
    mcux_add_include( INCLUDES . )
endif()
