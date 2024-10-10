/*
 * buzzer.h
 *
 *  Created on: Oct 8, 2024
 *      Author: Essa
 */

#ifndef BUZZER_H_
#define BUZZER_H_

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define BUZZER_PORTID             PORTC_ID
#define BUZZER_PINID              PIN5_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function to Initialize the Buzzer and turn it initially off
 * Input: void
 * Output: void
 */
void Buzzer_init(void);

/*
 * Description :
 * Function to Turn Buzzer ON
 * Input: void
 * Output: void
 */
void Buzzer_on(void);

/*
 * Description :
 * Function to Turn Buzzer OFF
 * Input: void
 * Output: void
 */
void Buzzer_off(void);

#endif /* BUZZER_H_ */
