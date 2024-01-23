/*
 * DIO.h
 *
 *  Created on: Dec 31, 2023
 *      Author: Abdelaziz Maher
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_


//-----------------------------------------------
//Includes
//-----------------------------------------------
#include"Stm32f103x6.h"
#include"Stm32f103c6_GPIO_Driver.h"

/*
 *----------------------------------------------------------
 * 				  Generic Macros
 *----------------------------------------------------------
 */

#define DOOR_ID					GPIO_PIN_3
#define LED_ID					GPIO_PIN_7

#define GPIO_PORT_USED			GPIOA

/*
 * =======================================================================================
 *                         APIs Supported by "MCAL DIO DRIVER"
 * =======================================================================================
 */
uint8_t MCAL_DIO_ReadChannel(uint8_t ID);
void  MCAL_DIO_WriteChannel(uint8_t ID, uint8_t Level);

#endif /* MCAL_DIO_H_ */
