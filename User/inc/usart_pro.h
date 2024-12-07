#ifndef _USART_PRO_H
#define _USART_PRO_H

#include "main.h"

#define RX_BUF_SIZE  200






extern uint8_t rx_buf[RX_BUF_SIZE];
extern volatile uint32_t rx_len;
extern uint8_t rx_flag;


//发送一个数组
void USART_SendArray(uint8_t *array, uint16_t len);
//发送字符串
void USART_SendString(char *str);



#endif






