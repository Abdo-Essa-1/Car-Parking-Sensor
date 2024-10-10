/*
 * led.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Essa
 */

#ifndef LED_H_
#define LED_H_

#include "../../MCAL/gpio/gpio.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define LEDR_PORTID       PORTC_ID
#define LEDR_PINID        PIN0_ID

#define LEDG_PORTID       PORTC_ID
#define LEDG_PINID        PIN1_ID

#define LEDB_PORTID       PORTC_ID
#define LEDB_PINID        PIN2_ID

#define Positive_LOGIC

#ifdef Positive_LOGIC

#define LED_ON_LOGIC      LOGIC_HIGH
#define LED_OFF_LOGIC     LOGIC_LOW

#endif

#ifdef Negative_LOGIC

#define LED_ON_LOGIC      LOGIC_LOW
#define LED_OFF_LOGIC     LOGIC_HIGH

#endif


typedef enum{
	LEDR_ID, LEDG_ID, LEDB_ID
}LED_ID;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function to initialize the LEDs
 * Input: void
 * Output: void
 */
void LEDs_init(void);

/*
 * Description :
 * Function to Turn ON the LED
 * Input: LED_ID
 * Output: void
 */
void LED_ON(LED_ID id);

/*
 * Description :
 * Function to Turn OFF the LED
 * Input: LED_ID
 * Output: void
 */
void LED_OFF(LED_ID id);

#endif /* LED_H_ */
