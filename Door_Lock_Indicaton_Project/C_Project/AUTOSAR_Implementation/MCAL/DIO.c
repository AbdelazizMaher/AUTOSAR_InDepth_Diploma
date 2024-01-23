/*
 * DIO.c
 *
 *  Created on: Dec 31, 2023
 *      Author: Abdelaziz Maher
 */

//-----------------------------------------------
//Includes
//-----------------------------------------------
#include "DIO.h"


/*
 *-----------------------------------------------------------
 * 				APIs Functions Definitions
 *-----------------------------------------------------------
 */


/**================================================================
 * @Fn			- MCAL_DIO_ReadChannel
 * @brief 		- Read specific Pin value
 * @param [in]	- ID: Set Pin number
 * @retval 		- The input Pin value
 * Note			- None
 **================================================================*/
uint8_t MCAL_DIO_ReadChannel(uint8_t ID)
{
	return MCAL_GPIO_ReadPin(GPIO_PORT_USED, ID);
}

/**================================================================
 * @Fn			- MCAL_DIO_WriteChannel
 * @brief 		- Write on specific output Pin
 * @param [in]	- ID: set pin number
 * @param [in]	- Level: Pin value
 * @retval 		- None
 * Note			- None
 **================================================================*/
void  MCAL_DIO_WriteChannel(uint8_t ID, uint8_t Level)
{
	MCAL_GPIO_WritePin(GPIO_PORT_USED, ID, Level);
}
