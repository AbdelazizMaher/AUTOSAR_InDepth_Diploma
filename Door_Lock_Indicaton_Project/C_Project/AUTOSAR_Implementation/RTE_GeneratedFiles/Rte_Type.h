/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_Type.h
 * Generated on: Tue Jan 23 24:58:33 EET
 ********************************************************************/

#ifndef RTE_TYPE_H
#define RTE_TYPE_H


#include "Rte.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/**************************** datatypes ******************************/

typedef unsigned char My_uint8;


/********************* mode declaration groups ***********************/


/********************** per instance memories ************************/


/******************* implicit buffer declaration *********************/

typedef struct {
	My_uint8 value;
} Rte_DE_My_uint8;


/******************** component data structures **********************/

/*********************************************************************
 * component data structure for SWC: SWC_DoorSensor_LedActuator_Abs 
 *********************************************************************/
typedef struct Rte_CDS_SWC_DoorSensor_LedActuator_Abs
{
	/* Data Handles section*/
	Rte_DE_My_uint8 *Read_DoorSensor_PP_SR_DoorLock_DoorState;
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
} Rte_CDS_SWC_DoorSensor_LedActuator_Abs;

/*********************************************************************
 * component data structure for SWC: SWC_DoorLock_Indication 
 *********************************************************************/
typedef struct Rte_CDS_SWC_DoorLock_Indication
{
	/* Data Handles section*/
	Rte_DE_My_uint8 *DoorLock_Indication_Algo_RP_SR_DoorLock_DoorState;
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
} Rte_CDS_SWC_DoorLock_Indication;

/*********************************************************************
 * component data structure for SWC: SWC_Composite_DoorLock_Indication 
 *********************************************************************/
typedef struct Rte_CDS_SWC_Composite_DoorLock_Indication
{
	/* Data Handles section*/
	/* Per-Instance Memory Handles section*/
	/* Inter-runnable Variable Handles section*/
	/* Calibration Parameter Handles section*/
	/* Exclusive-area Handles section*/
	/* Port API Handles section*/
	/* Inter Runnable Variable API Handles section*/
	uint8 _dummy;
} Rte_CDS_SWC_Composite_DoorLock_Indication;


#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_TYPE_H */