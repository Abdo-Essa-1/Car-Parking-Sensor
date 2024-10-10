/*
 * buzzer.c
 *
 *  Created on: Oct 8, 2024
 *      Author: Essa
 */

#include "buzzer.h"
#include "../../MCAL/gpio/gpio.h"

/*******************************************************************************
 *                      Functions Definitions                                   *
 *******************************************************************************/

/*
 * Description :
 * Function to Initialize the Buzzer and turn it initially off
 * Input: void
 * Output: void
 */
void Buzzer_init(void)
{
	GPIO_setupPinDirection(BUZZER_PORTID, BUZZER_PINID, PIN_OUTPUT);
	GPIO_writePin(BUZZER_PORTID, BUZZER_PINID, LOGIC_LOW);
}

/*
 * Description :
 * Function to Turn Buzzer ON
 * Input: void
 * Output: void
 */
void Buzzer_on(void)
{
	GPIO_writePin(BUZZER_PORTID, BUZZER_PINID, LOGIC_HIGH);
}

/*
 * Description :
 * Function to Turn Buzzer OFF
 * Input: void
 * Output: void
 */
void Buzzer_off(void)
{
	GPIO_writePin(BUZZER_PORTID, BUZZER_PINID, LOGIC_LOW);
}
