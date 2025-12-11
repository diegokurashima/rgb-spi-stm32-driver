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
 * @brief SPI Struct
 */
typedef struct {
    SPI_HandleTypeDef* hspi;
} handler_spi_t;

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief SPI init
 *
 * @param handler_spi Pointer to handler_spi.
 */
void handler_spi_init(handler_spi_t* handler_spi);

/**
 * @brief Transmit data with SPI
 *
 * @param handler_spi Pointer to handler_spi.
 * @param data Data to send
 */
void handler_spi_transmit(handler_spi_t* handler_spi, uint8_t* buffer, uint16_t buffer_size, uint32_t timeout);

#endif // __HANDLER_SPI_H__
