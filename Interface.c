#include <propeller.h>
#include <stdint.h>

#include "spi_interface.h"

void StartSPISlave(void)
{
  extern unsigned int* _load_start_spi_slave_cog_cog;
  cognew(_load_start_spi_slave_cog_cog, NULL);
}  

int main(int argc, char** argv)
{
  while(1)
  {
  }
  
  return 1;    
}
