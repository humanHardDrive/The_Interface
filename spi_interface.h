#ifndef __SPI_INTERFACE_H__
#define __SPI_INTERFACE_H__

#include "configuration.h"
#include <stdint.h>

typedef enum
{
  CS_PIN = 0,
  CLK_PIN,
  MOSI_PIN,
  MISO_PIN,
  NUM_SPI_PINS
}SPI_PIN;  

typedef struct
{
  uint8_t pins[NUM_SPI_PINS];
  uint8_t mode;
}SPI_INTERFACE;  

#endif