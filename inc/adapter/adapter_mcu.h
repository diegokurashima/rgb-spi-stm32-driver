/**
 * @file adapter_mcu.h
 *
 * @brief adapter for mcu
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 05/2025
 */

#ifndef __MCU_H__
#define __MCU_H__

#include "gpio.h"
#include "main.h"
#include "tim.h"
#include <stdint.h>

/*****************************************
 * Public Macros
 *****************************************/

// TRUE & FALSE
#define TRUE (1)
#define FALSE (0)

// Timers
#define reset_timer(ticks) (ticks = HAL_GetTick())
#define get_timer(ticks) (HAL_GetTick() - ticks)

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief Initializes MCU and some peripherals.
 */
void adapter_mcu_init(void);

/**
 * @brief Initializes System Clock.
 *
 * @note  Defined by cube.
 */
void SystemClock_Config(void);

#endif // __MCU_H__
