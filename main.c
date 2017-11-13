/***************************************************************************//**
* @file     main.c
* @author   Rhys Thomas <rt8g15>
* @author   Wujun Xie <wx1m17>
* @date     2017-11-13T10:47
********************************************************************************
* @brief    Functions for sending SLIP packets.
*******************************************************************************/

#include "MKW41Z4.h"
#include "Board_LED.h"
#include "FreeRTOS.h"
#include "task.h"
#include "slip.h"

/// Buffer for incoming data.
unsigned char rx_buf[128];

void task_listen(void *pv);
void task_serve(void *pv);

int main(void)
{
    LED_Initialize();
    
    xTaskCreate(
        task_listen, // Task function.
        "Listening", // Task name (for simulations).
        configMINIMAL_STACK_SIZE, // Size of task stack.
        (void *)NULL, // Parameter passed to task at startup.
        (unsigned portBASE_TYPE)tskIDLE_PRIORITY+1, // Priority.
        (xTaskHandle *)NULL // Pointer to reference of the task.
    );
    
    vTaskStartScheduler();
}

// listening task
void task_listen(void *pv) 
{
    rx_packet(/**/);
}

// replying task
void task_serve(void *pv)
{
    
}
