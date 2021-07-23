#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
void Activity1(){

    SET_LED;    //set led as output port
    SET_BUTTON;  //clear bit 6 of DDR B
    PULLUP_BUTTON;        //Set bit 6 of Port B
    SET_HEATER;  //clear bit 7 of DDR B
    PULLUP_HEATER;        //Set bit 7 of DDR B

}


