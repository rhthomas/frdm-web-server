/***************************************************************************//**
* @file     slip.h
* @author   Rhys Thomas <rt8g15>
* @author   Wujun Xie <wx1m17>
* @date     2017-11-13T10:47
********************************************************************************
* @brief    Functions for sending SLIP packets.
********************************************************************************
* @see 		https://tools.ietf.org/html/rfc1055
*******************************************************************************/

#include "slip.h"

void tx_packet(unsigned char *p, int len)
{
    send_char(END);
    while (len--) {
        switch (*p) {
            case END:
                send_char(ESC);
                send_char(ESC_END);
                break;
            case ESC:
                send_char(ESC);
                send_char(ESC_ESC);
            default:
                send_char(*p);
        }
        p++;
    }
    send_char(END);
}

void rx_packet(unsigned char *p, int len)
{
    unsigned char c;
    int received = 0;
    while (1) {
        c = receive_char();
        switch (c) {
            case ESC_END:
                c = END;
                break;
            case ESC_ESC:
                c = ESC;
            default:
                if (received < len) {
                    p[received++] = c;
                }
                break;
        }
    }
}

void send_char(unsigned char c)
{
    /// @todo This.
}

unsigned char receive_char(void)
{
    /// @todo This.
    unsigned char c;
    return c;
}
