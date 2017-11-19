/***************************************************************************//**
* @file     slip.h
* @authors  Rhys Thomas <rt8g15>
* @authors  Wujun Xie <wx1m17>
* @date     2017-11-13T10:47
*
* @brief    Functions for sending SLIP packets.
*
* @see 		https://tools.ietf.org/html/rfc1055
*******************************************************************************/

#ifndef SLIP_H
#define SLIP_H

#include <stdint.h>

#define END     0xC0 ///< End of packet.
#define ESC     0xDB ///< Byte stuffing.
#define ESC_END 0xDC ///< End data byte.
#define ESC_ESC 0xDD ///< Escape data byte.

/***************************************************************************//**
* @brief	Send a SLIP packet.
*
* @param 	p : Location the packet starts at.
* @param	len : Length of packet.
* @see 		https://tools.ietf.org/html/rfc1055
*******************************************************************************/
void tx_packet(char *p, int len);

/***************************************************************************//**
* @brief	Receive a SLIP packet.
*
* @param 	p : Location of start of receive buffer.
* @param	len : Length of packet. More than len bytes are truncated.
* @see 		https://tools.ietf.org/html/rfc1055
*******************************************************************************/
int rx_packet(char *p, int len);

/***************************************************************************//**
* @brief 	Sends character to UART port.
*
* @param	c : Character to send.
*******************************************************************************/
void send_char(unsigned char c);

/***************************************************************************//**
* @brief 	Receive character over UART.
*
* @return	Incoming character.
*******************************************************************************/
char receive_char(void);

#endif /* SLIP_H */
