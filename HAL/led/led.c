/*
 * led.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Essa
 */

#include "led.h"

/*******************************************************************************
 *                      Functions Definitions                                   *
 *******************************************************************************/

/*
 * Description :
 * Function to initialize the LEDs
 * Input: void
 * Output: void
 */
void LEDs_init(void)
{
	/* Setting the LEDs Pins to output */
	GPIO_setupPinDirection(LEDR_PORTID, LEDR_PINID, PIN_OUTPUT);
	GPIO_setupPinDirection(LEDG_PORTID, LEDG_PINID, PIN_OUTPUT);
	GPIO_setupPinDirection(LEDB_PORTID, LEDB_PINID, PIN_OUTPUT);

	/* Turning OFF the LEDs initially */
	GPIO_writePin(LEDR_PORTID, LEDR_PINID, LED_OFF_LOGIC);
	GPIO_writePin(LEDG_PORTID, LEDG_PINID, LED_OFF_LOGIC);
	GPIO_writePin(LEDB_PORTID, LEDB_PINID, LED_OFF_LOGIC);
}

/*
 * Description :
 * Function to Turn ON the LED
 * Input: LED_ID
 * Output: void
 */
void LED_ON(LED_ID id)
{
	switch(id)
	{
	case LEDR_ID:
		GPIO_writePin(LEDR_PORTID, LEDR_PINID, LED_ON_LOGIC);
		break;
	case LEDG_ID:
		GPIO_writePin(LEDG_PORTID, LEDG_PINID, LED_ON_LOGIC);
		break;
	case LEDB_ID:
		GPIO_writePin(LEDB_PORTID, LEDB_PINID, LED_ON_LOGIC);
		break;
	}
}

/*
 * Description :
 * Function to Turn OFF the LED
 * Input: LED_ID
 * Output: void
 */
void LED_OFF(LED_ID id)
{
	switch(id)
	{
	case LEDR_ID:
		GPIO_writePin(LEDR_PORTID, LEDR_PINID, LED_OFF_LOGIC);
		break;
	case LEDG_ID:
		GPIO_writePin(LEDG_PORTID, LEDG_PINID, LED_OFF_LOGIC);
		break;
	case LEDB_ID:
		GPIO_writePin(LEDB_PORTID, LEDB_PINID, LED_OFF_LOGIC);
		break;
	}
}
