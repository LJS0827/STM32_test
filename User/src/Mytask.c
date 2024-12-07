#include "Mytask.h"



void LED_G_Task(void *pvParameters)
{
    while(1)
    {
        LED_ON(LED_G_GPIO_Port, LED_G_Pin);
        vTaskDelay(1000);
        LED_OFF(LED_G_GPIO_Port, LED_G_Pin);
        vTaskDelay(1000);
    }
}

