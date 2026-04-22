/**
 * @file handler_spi.c
 *
 * @brief Handler for SPI.
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 12/2025
 */

#include "handler_spi.h"

/*****************************************
 * Private Defines
 *****************************************/

/*****************************************
 * Public Functions Prototypes
 *****************************************/

void handler_spi_transmit(handler_spi_t* handler_spi, uint8_t* buffer, uint16_t buffer_size) {
    HAL_SPI_Transmit_DMA(handler_spi->hspi, buffer, buffer_size);
}
