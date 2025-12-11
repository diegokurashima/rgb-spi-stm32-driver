/**
 * @file adapter_rgb.h
 *
 * @brief rgb led adapter
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 12/2025
 */

#ifndef __ADAPTER_RGB_H__
#define __ADAPTER_RGB_H__

#include <stdint.h>
#include <stdbool.h>

#include "handler_spi.h"
#include "spi.h"

/*****************************************
 * Public Types
 *****************************************/

/**
 * @brief rgb color type
 */
typedef struct {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} rgb_color_t;

/**
 * @brief rgb color enum
 */
typedef enum {
    ADAPTER_RGB_COLOR_RED,
    ADAPTER_RGB_COLOR_GREEN,
    ADAPTER_RGB_COLOR_BLUE,
    ADAPTER_RGB_COLOR_WHITE,
} adapter_rgb_color_enum_t;

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief set the color to the rgb adapter
 */
void adapter_rgb_set_color(adapter_rgb_color_enum_t rgb_color);

#endif // __ADAPTER_RGB_H__
