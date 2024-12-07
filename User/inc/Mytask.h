#ifndef _MYTASK_H
#define _MYTASK_H

#include "main.h"

#define LED_ON(part,pin)  HAL_GPIO_WritePin(part, pin, GPIO_PIN_RESET)
#define LED_OFF(part,pin)  HAL_GPIO_WritePin(part, pin, GPIO_PIN_SET)


void LED_G_Task(void *pvParameters); //LEDµÆÈÎÎñ







#endif
