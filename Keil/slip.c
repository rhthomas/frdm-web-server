/***************************************************************************//**
* @file     slip.c
* @authors  Rhys Thomas <rt8g15>
* @authors  Wujun Xie <wx1m17>
* @date     2017-11-13T10:47
*
* @brief    Functions for sending SLIP packets.
*
* @see 		https://tools.ietf.org/html/rfc1055
*******************************************************************************/

#include "slip.h"

void tx_packet(char *p, int len)
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
                break;
            default:
                send_char(*p);
                break;
        }
        p++;
    }
    send_char(END);
}

int rx_packet(char *p, int len)
{
    char c;
    int received = 0;
    while (1) {
        c = receive_char();
        switch (c) {
            case END:
                if (received)
                    return received;
                else
                    break;
            case ESC:
                c = receive_char();
                switch (c) {
                    case ESC_END:
                        c = END;
                        break;
                    case ESC_ESC:
                        c = ESC;
                        break;
                }
            default:
                if (received < len) {
                    p[received++] = c;
                }
        }
    }
}

void send_char(unsigned char c)
{

}

char receive_char(void)
{

}
