/***************************************************************************//**
* @file     main.c
* @authors  Rhys Thomas <rt8g15>
* @authors  Wujun Xie <wx1m17>
* @date     2017-11-13T10:47
*
* @brief    Functions for sending SLIP packets.
*******************************************************************************/

#include "MKW41Z4.h"
#include "Board_LED.h"
#include "slip.h"
#include "myTasks.h"

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

    xTaskCreate(
        task_serve, // Task function.
        "Serving", // Task name (for simulations).
        configMINIMAL_STACK_SIZE, // Size of task stack.
        (void *)NULL, // Parameter passed to task at startup.
        (unsigned portBASE_TYPE)tskIDLE_PRIORITY+1, // Priority.
        (xTaskHandle *)NULL // Pointer to reference of the task.
    );

    vTaskStartScheduler();
}
