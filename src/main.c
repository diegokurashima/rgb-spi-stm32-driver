/**
 * @file main.c
 *
 * @brief Main function
 */
#include "adapter_mcu.h"
#include "adapter_rgb.h"

/*****************************************
 * Main Function
 *****************************************/

int main(void) {
    // Initialization
    adapter_mcu_init();

    // Main Loop
    for (;;) {
        adapter_rgb_set_color(ADAPTER_RGB_COLOR_WHITE);
        HAL_Delay(1500);

        adapter_rgb_set_color(ADAPTER_RGB_COLOR_RED);
        HAL_Delay(1500);

        adapter_rgb_set_color(ADAPTER_RGB_COLOR_GREEN);
        HAL_Delay(1500);

        adapter_rgb_set_color(ADAPTER_RGB_COLOR_BLUE);
        HAL_Delay(1500);

        adapter_rgb_set_color(ADAPTER_RGB_OFF);
        HAL_Delay(1500);
    }
}

/*****************************************
 * Callbacks
 *****************************************/
