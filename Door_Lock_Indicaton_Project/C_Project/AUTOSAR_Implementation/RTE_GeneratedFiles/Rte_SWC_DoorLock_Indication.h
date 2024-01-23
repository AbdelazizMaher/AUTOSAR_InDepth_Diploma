/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_SWC_DoorLock_Indication.h
 * Generated on: Tue Jan 23 24:58:33 EET
 ********************************************************************/

#ifndef RTE_SWC_DOORLOCK_INDICATION_H
#define RTE_SWC_DOORLOCK_INDICATION_H

#include "Rte_SWC_DoorLock_Indication_Type.h"

#ifdef __cplusplus
	extern "C" {
#endif /* __cplusplus */

/**************** component data structure definition ****************/

#ifndef IN_RTE_C
typedef const Rte_CDS_SWC_DoorLock_Indication * const Rte_Instance;
#endif

/************************* instance handle ***************************/

extern const Rte_CDS_SWC_DoorLock_Indication * const Rte_Inst_SWC_DoorLock_Indication;

/************************ application errors *************************/

#define RTE_E_CS_LedSwitch_E_OK ((Std_ReturnType)0)
#define RTE_E_CS_LedSwitch_E_NOT_OK ((Std_ReturnType)1)

/*************************** init values *****************************/


/****************** per instance memory definition *******************/


/************************* exclusive areas ***************************/


/************************* RTE API mapping ***************************/

/*****************************************************
 * Port: 		RP_SR_DoorLock
 * Interface:	SR_DoorLock
 * DataElement:	DoorState
 * Runnable:	DoorLock_Indication_Algo
 *****************************************************/
extern My_uint8 Rte_IRead_SWC_DoorLock_Indication_DoorLock_Indication_Algo_RP_SR_DoorLock_DoorState (void);
#ifndef IN_RTE_C
#define Rte_IRead_DoorLock_Indication_Algo_RP_SR_DoorLock_DoorState() \
	Rte_IRead_SWC_DoorLock_Indication_DoorLock_Indication_Algo_RP_SR_DoorLock_DoorState()
#endif

/*****************************************************
 * Port: 		RP_CS_LedSwitch
 * Interface:	CS_LedSwitch
 * Operation:	LedSwitch
 * Sync/Async:	Synchronous
 *****************************************************/
extern Std_ReturnType Rte_Call_SWC_DoorLock_Indication_RP_CS_LedSwitch_LedSwitch (My_uint8 LedState);
#ifndef IN_RTE_C
#define Rte_Call_RP_CS_LedSwitch_LedSwitch(LedState) \
	Rte_Call_SWC_DoorLock_Indication_RP_CS_LedSwitch_LedSwitch(LedState)
#endif


/**************** event triggered runnable entities *******************/

/*****************************************************
 * Runnable: 	DoorLock_Indication_Algo
 * Period:		0.012
 *****************************************************/
extern void DoorLock_Indication_Algo_Runnable(void);


/******** ARUnit-specific function pointers for server call delegates *********/
typedef Std_ReturnType (*FunctionPtr_SWC_DoorLock_Indication_RP_CS_LedSwitch_LedSwitch)(My_uint8 LedState);


#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_SWC_DOORLOCK_INDICATION_H */