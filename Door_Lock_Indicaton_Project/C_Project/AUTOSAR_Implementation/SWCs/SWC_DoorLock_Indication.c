/*
 * SWC_DoorLock_Indication.c
 *
 *  Created on: Jan 23, 2024
 *      Author: Abdelaziz Maher
 */

#include "Rte_SWC_DoorLock_Indication.h"


#define LEDON		0
#define LEDOFF		1


/*****************************************************
 * Runnable: 	DoorLock_Indication_Algo
 * Period:		0.012
 *****************************************************/
void DoorLock_Indication_Algo_Runnable(void)
{
	My_uint8 DoorState = 0;

	// Read DoorState from RTE SR-Interface
	DoorState = Rte_IRead_SWC_DoorLock_Indication_DoorLock_Indication_Algo_RP_SR_DoorLock_DoorState();

	if( DoorState )
	{
		// Door -> Opened
		// Invoke Operation ->	LedSwitch(My_uint8 LedState)
		Rte_Call_SWC_DoorLock_Indication_RP_CS_LedSwitch_LedSwitch(LEDON);
	}
	else
	{
		// Door -> Closed
		// Invoke Operation ->	LedSwitch(My_uint8 LedState)
		Rte_Call_SWC_DoorLock_Indication_RP_CS_LedSwitch_LedSwitch(LEDOFF);
	}
}
