#include "usart_pro.h"
#include "usart.h"
#include "stdio.h"

uint8_t rx_buf[RX_BUF_SIZE];
volatile uint32_t rx_len = 0;
uint8_t rx_flag = 0;
//�����ض���
int fputc(int ch, FILE *f)
{
    HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xFFFFFFFF);
    return ch;
}

//����һ������
void USART_SendArray(uint8_t *array, uint16_t len)
{
    while (len--)
    HAL_UART_Transmit(&huart1, array, 1, 0xFFFFFFFF);
}
//�����ַ���
void USART_SendString(char *str)
{
    HAL_UART_Transmit(&huart1, (uint8_t *)str, strlen(str), 0xFFFFFFFF);
}



