/**
 * @file activity4.h
 * @author Bellamkonda Sushma sfid:302471 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-07-27
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED


#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief A macro to check if the data is received into the buffer or not
 * 
 */
#define UART_DATA_NOT_RECEIVED !(UCSR0A & (1<<RXC0))

/**
 * @brief A macro to check if the data is not written into the buffer
 * 
 */
#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))

/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value);

/**
 * @brief A function to read characters coming from other UART port
 * 
 * @return char 
 */
char UARTreadchar();

/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data);


#endif
