/**
 * @file activity1.c
 * @author Bellamkonda Sushma sfid:302471 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-07-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include"activity1.h"

/**
 * @brief of activity1
 * 
 */
 void activity1()


{
SET_LED; // set LED as output
CLEAR_BUTTON_DATA; //clear PORTD with 0th bit.
PULLUP_BUTTON; //Set PortB with 0th bit.
CLEAR_HEATER_DATA; //clear PORTD as 1st bit.
PULLUP_HEATER;// Set PortB as 1st bit.

}
