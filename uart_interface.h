#define UART_RX_BUFFER_SIZE   512
#define UART_TX_BUFFER_SIZE   512

typedef struct uart_interface
{
  char rxbuffer[UART_RX_BUFFER_SIZE];
  char txbuffer[UART_TX_BUFFER_SIZE];
};  