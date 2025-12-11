/**
 * @file protocol_ws2812b.c
 *
 * @brief WS2812B protocol
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 12/2025
 */

#include "protocol_ws2812b.h"

/*****************************************
 * Private Defines
 *****************************************/

#define WS2812B_0 (0b1000)
#define WS2812B_1 (0b1110)

/*****************************************
 * Public Functions
 *****************************************/

void protocol_ws2812b_set_transmit_buffer(rgb_color_t rgb_color, uint8_t* data_buffer) {
    uint32_t color = rgb_color.green << 16 | rgb_color.red << 8 | rgb_color.blue;

    uint8_t indx = 0;

    for (int8_t i = 23; i >= 0; i--) {
        if (((color >> i) & 0x01) == 1) {
            data_buffer[indx++] = WS2812B_1;
        } else {
            data_buffer[indx++] = WS2812B_0;
        }
    }
}

/*****************************************
 * Private Functions Bodies Definitions
 *****************************************/
