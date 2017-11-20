/** @file ppp-blinky.cpp */
#include "mbed.h"
#include "ppp-blinky.h"

// PPP-Blinky - "The Most Basic Internet Thing"

int main()
{
//    int i =1;
    initializePpp(); // initialize the serial port(s) and structures
//    l_on();
    while(1) {
       waitForPcConnectString(); // wait for PC to send a connect message
//        l_off();
        while( connectedPpp() ) {
            
            waitForPppFrame(); // process PPP frames until we receive a disconnect command
        }
    
    } 
}
