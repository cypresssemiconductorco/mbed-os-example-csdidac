/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* psoc6pdl 1.4.1.2240
* personalities 1.0.0.0
* udd 1.1.3.98
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

cy_stc_csd_context_t cy_csd_0_context = 
{
	.lockKey = CY_CSD_NONE_KEY,
};
static const cy_stc_csdidac_pin_t CSDIDAC_csdidac_a_pin = 
{
	.ioPcPtr = GPIO_PRT10,
	.pin = 0u,
};
static const cy_stc_csdidac_pin_t CSDIDAC_csdidac_b_pin = 
{
	.ioPcPtr = GPIO_PRT13,
	.pin = 7u,
};
const cy_stc_csdidac_config_t CSDIDAC_csdidac_config = 
{
	.base = CSDIDAC_HW,
	.csdCxtPtr = &cy_csd_0_context,
	.configA = CY_CSDIDAC_GPIO,
	.configB = CY_CSDIDAC_GPIO,
	.ptrPinA = (const cy_stc_csdidac_pin_t *) &CSDIDAC_csdidac_a_pin,
	.ptrPinB = (const cy_stc_csdidac_pin_t *) &CSDIDAC_csdidac_b_pin,
	.cpuClk = 100000000u,
	.csdInitTime = 25u,
};


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_8_BIT, 1U);
}
