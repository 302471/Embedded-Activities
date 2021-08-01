/**
 * @file activity2.c
 * @author Bellamkonda Sushma sfid:302471 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-07-25
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <avr/io.h>
#include"activity2.h"

/**
 * @brief of Analog to Digital convertor
 *
 */

void InitADC(){
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);

}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);

}
