/**
 * @file activity1.h
 * @author Bellamkonda Sushma sfid:302471  (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-07-23
 *
 * @copyright Copyright (c) 2021
 *
 */


#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>

#define SET_LED DDRB|=(1<<PB0) 
//A macro to set the LED and making 1st bit as PORTB .

#define CLEAR_BUTTON_DATA DDRD&=~(1<<PD0) 
//A macro to clear previous data in the register D0

#define CLEAR_HEATER_DATA DDRD&=~(1<<PD1) 
//A macro to clear previous data in the register D1.

#define PULLUP_BUTTON PORTD|=(1<<PD0) 
//A macro to Set 0th bit as PORTD and make it as Button sensor.

#define PULLUP_HEATER PORTD|=(1<<PD1) 
//A macro to Set PORTD as 1st bit and make it as Heater.


#define BUTTON_ON (PIND&(1<<PD0)) 
//A macro to Set 0th bit as PIND and it checks if the button is on or off.

#define HEATER_ON (PIND&(1<<PD1)) 
// A macro to Set PIND as 1st pin and it checks if the button is on or off.

#define SET_LED_ON PORTB|=(1<<PB0) 
//A macro to Set the LED  0th Bit of PORTB.


#define SET_LED_OFF PORTB&=~(1<<PB0) 
//A macro to clear the LED 1st bit as PORTB .


void activity1();



#endif // ACTIVITY1_H_INCLUDED
