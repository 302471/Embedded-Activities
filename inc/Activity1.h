#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define SET_LED DDRB|=(1<<PB0)
/**
 * @brief A macro to set 6th bit of PORTB as input
 *
 */

#define SET_BUTTON DDRD&=~(1<<PD1)

/**
 * @brief A macro to set 7th bit of PORTD as input
 *
 */

#define PULLUP_BUTTON PORTD|=(1<<PD1)

/**
 * @brief A macro to set 7th bit of PORTD
 *
 */

#define SET_HEATER DDRD&=~(1<<PD2)

/**
 * @brief A macro to set 6th bit of PORTD
 *
 */

#define PULLUP_HEATER PORTD|=(1<<PD2)
/**
 * @brief A macro to set PD1 bit as a fast PWM output port with timer1, A channel
 *
 */
void Activity1();
#endif // ACTIVITY1_H_INCLUDED
