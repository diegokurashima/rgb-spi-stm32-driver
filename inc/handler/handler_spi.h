/**
 * @file handler_spi.h
 *
 * @brief Handler for SPI.
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 12/2025
 */

#ifndef __HANDLER_SPI_H__
#define __HANDLER_SPI_H__

#include <stdint.h>
#include "spi.h"
#include "tim.h"

/*****************************************
 * Public Defines
 *****************************************/

/*****************************************
 * Public Types
 *****************************************/

/**
 * @brief SPI handler struct
 */
typedef struct {
    SPI_HandleTypeDef* hspi;
} handler_spi_t;

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief Transmit data with SPI
 *
 * @param handler_spi pointer to handler_spi.
 * @param buffer buffer with data to be transmitted
 * @param buffer_size biffer size
 * @param timeout timeout of data transmission in ms
 */
void handler_spi_transmit(handler_spi_t* handler_spi, uint8_t* buffer, uint16_t buffer_size);

#endif // __HANDLER_SPI_H__
