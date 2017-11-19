/***************************************************************************//**
* @file     myTasks.h
* @authors  Rhys Thomas <rt8g15>
* @authors  Wujun Xie <wx1m17>
* @date     2017-11-13T14:40
*
* @brief    RTOS tasks are defined here.
*******************************************************************************/

#ifndef MYTASKS_H
#define MYTASKS_H

#include "FreeRTOS.h"
#include "task.h"
#include "slip.h"

/***************************************************************************//**
* @brief    Task to listen for incoming SLIP packets.
*******************************************************************************/
void task_listen(void *pv);

/***************************************************************************//**
* @brief    Task to serve the web page.
*******************************************************************************/
void task_serve(void *pv);

#endif /* MYTASKS_H */
