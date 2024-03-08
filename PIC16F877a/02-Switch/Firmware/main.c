#include <xc.h>

#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // watchdog time enable bit (WDTE disabled)
#pragma config PWRTE = OFF // Power up Timer enable bit
#pragma config BOREN = ON
#pragma config LVP = ON
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

#define _XTAL_FREQ 8000000 //20 Mhz clock

int main(void)
{
    // Write your code here
    TRISA0 = 0; // Set RA0 as output for LED
    TRISA1 = 0;
    TRISB1 = 1; // Set RA1 as input for switch
    TRISB2 = 1;

    

    while (1) // Continuous loop
    {
        
    }

    return 0;
}
