/**
 * @file adapter_rgb.c
 *
 * @brief rgb led adapter
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 12/2025
 */

#include "adapter_rgb.h"
#include "handler_spi.h"
#include "protocol_ws2812b.h"

/*****************************************
 * Private Defines
 *****************************************/

#define RGB_SPI_BUFFER_SIZE (24)

/*****************************************
 * Private Variables
 *****************************************/

static handler_spi_t handler_spi_rgb = {
    .hspi = &hspi1,
};

uint8_t rgb_transmit_buffer[RGB_SPI_BUFFER_SIZE];

static rgb_color_t rgb_colors[] = {
    {
        /* ADAPTER_RGB_OFF */
        .red = 0,
        .green = 0,
        .blue = 0,
    },
    {
        /* ADAPTER_RGB_COLOR_RED */
        .red = 255,
        .green = 0,
        .blue = 0,
    },
    {
        /* ADAPTER_RGB_COLOR_GREEN */
        .red = 0,
        .green = 255,
        .blue = 0,
    },
    {
        /* ADAPTER_RGB_COLOR_BLUE */
        .red = 0,
        .green = 0,
        .blue = 255,
    },
    {
        /* ADAPTER_RGB_COLOR_WHITE */
        .red = 255,
        .green = 255,
        .blue = 255,
    },
};

/*****************************************
 * Private Functions Prototypes
 *****************************************/

/**
 * @brief transmit the rgb color buffer
 *
 * @param rgb_color rgb color (from rgb type)
 *
 */
void adapter_rgb_transmit(rgb_color_t rgb_color);

/*****************************************
 * Public Functions
 *****************************************/

void adapter_rgb_set_color(adapter_rgb_color_enum_t rgb_color_enum) {
    adapter_rgb_transmit(rgb_colors[rgb_color_enum]);
}

/*****************************************
 * Private Functions Bodies Definitions
 *****************************************/

void adapter_rgb_transmit(rgb_color_t rgb_color) {
    protocol_ws2812b_set_transmit_buffer(rgb_color, rgb_transmit_buffer);
    handler_spi_transmit(&handler_spi_rgb, rgb_transmit_buffer, RGB_SPI_BUFFER_SIZE);
}
