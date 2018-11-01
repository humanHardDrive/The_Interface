#ifndef __SPI_INTERFACE_H__
#define __SPI_INTERFACE_H__

#include "configuration.h"

#define SPI_MEMORY_SIZE   512

typedef struct
{
  unsigned char mem[SPI_MEMORY_SIZE];
  
  InterfaceRegisters* intfreg;
};  

#endif