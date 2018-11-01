#ifndef __CONFIGURATION_H__
#define __CONFIGURATION_H__

enum
{
  INTF_DISABLED = 0,
  INTF_SPI_SLAVE,
  INTF_SPI_MASTER,
  INTF_I2C_SLAVE,
  INTF_I2C_MASTER,
  INTF_UART
};  

typedef struct InterfaceRegisters
{
  unsigned char InterfaceType[6];
};

#endif