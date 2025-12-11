/**
 * @file adapter_mcu.c
 *
 * @brief adapter for mcu
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 06/2025
 */

#include "adapter_mcu.h"

/*****************************************
 * Public Functions Prototypes
 *****************************************/

void adapter_mcu_init(void) {
    // HAL
    HAL_Init();

    // TIMERS
    SystemClock_Config();

    // GPIO
    MX_GPIO_Init();

    // SPI
    MX_SPI1_Init();
}
