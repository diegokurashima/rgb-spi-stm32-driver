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

#include "handler_spi.h"
#include "spi.h"

/*****************************************
 * Public Types
 *****************************************/

/**
 * @brief rgb color enum
 */
typedef enum {
    ADAPTER_RGB_OFF,
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
 *
 * @param rgb_color rgb color (from enumeration) to be set
 */
void adapter_rgb_set_color(adapter_rgb_color_enum_t rgb_color);

#endif // __ADAPTER_RGB_H__
