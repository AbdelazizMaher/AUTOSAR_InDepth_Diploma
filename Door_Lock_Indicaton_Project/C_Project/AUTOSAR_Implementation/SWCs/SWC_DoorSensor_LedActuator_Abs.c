/*
 * SWC_DoorSensor_LedActuator_Abs.c
 *
 *  Created on: Jan 23, 2024
 *      Author: Abdelaziz Maher
 */


#include "Rte_SWC_DoorSensor_LedActuator_Abs.h"
#include "DIO.h"

#define LEDON		0
#define LEDOFF		1


/*****************************************************
 * Port: 		PP_CS_LedSwitch
 * Interface:	CS_LedSwitch
 * Operation:	LedSwitch
 *****************************************************/
Std_ReturnType Set_LedSwitch_Runnable(My_uint8 LedState)
{
	Std_ReturnType Status = RTE_E_CS_LedSwitch_E_NOT_OK;

	if( LedState == LEDON )
	{
		// Switch LEDON -> Door opened
		MCAL_DIO_WriteChannel(LED_ID, LEDON);

		Status = RTE_E_CS_LedSwitch_E_OK;
	}
	else if( LedState == LEDOFF )
	{
		// Switch LEDOFF -> Door closed
		MCAL_DIO_WriteChannel(LED_ID, LEDOFF);

		Status = RTE_E_CS_LedSwitch_E_OK;
	}

	return Status;
}


/**************** event triggered runnable entities *******************/

/*****************************************************
 * Runnable: 	Read_DoorSensor
 * Period:		0.01
 *****************************************************/
void Read_DoorSensor_Runnable(void)
{
	uint8_t DoorState = 0;

	// Read Data from DoorSensor Pin
	DoorState = MCAL_DIO_ReadChannel(DOOR_ID);
	// Write DoorState -> PP -> SR_IF
	Rte_IWrite_SWC_DoorSensor_LedActuator_Abs_Read_DoorSensor_PP_SR_DoorLock_DoorState(DoorState);
}
