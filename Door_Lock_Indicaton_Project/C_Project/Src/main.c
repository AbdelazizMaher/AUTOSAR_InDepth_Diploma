/*
 * main.c
 *
 *  Created on: Dec 31, 2023
 *      Author: Abdelaziz Maher
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include"Stm32f103x6.h"
#include"Stm32f103c6_GPIO_Driver.h"

extern void Read_DoorSensor_Runnable(void);
extern void DoorLock_Indication_Algo_Runnable(void);

#define CYCLES_PER_LOOP 3
void wait_cycles( uint32_t n )
{
	uint32_t l = n/CYCLES_PER_LOOP;
	asm volatile( "0:" "SUBS %[count], 1;" "BNE 0b;" :[count]"+r"(l) );
}


void MCU_Init(void);
void StartOS(void);
int main(void)
{
	MCU_Init();

	StartOS();

	while(1)
	{

	}
}

void MCU_Init(void)
{
	GPIOA_CLOCK_ENABLE();

	GPIO_PinConfig_t PinCfg_Door_Sensor;

	/* PA3 ---> Door Sensor */
	PinCfg_Door_Sensor.GPIO_PinNumber = GPIO_PIN_3;
	PinCfg_Door_Sensor.GPIO_Mode = GPIO_PIN_MODE_INPUT_FLOA;
	MCAL_GPIO_Init(GPIOA, &PinCfg_Door_Sensor);

	/* PA7 ---> Led On/OFF */
	PinCfg_Door_Sensor.GPIO_PinNumber = GPIO_PIN_7;
	PinCfg_Door_Sensor.GPIO_Mode = GPIO_PIN_MODE_OUTPUT_PP;
	PinCfg_Door_Sensor.GPIO_Output_Speed = GPIO_PIN_SPEED_10MHZ;
	MCAL_GPIO_Init(GPIOA, &PinCfg_Door_Sensor);
}


void StartOS(void)
{
	uint8_t i = 0;

	while(1)
	{
		if( i == 10 )
		{
			// mimic RTE_EVENT_10ms
			Read_DoorSensor_Runnable();

			i++;
		}
		else if( i == 12 )
		{
			// mimic RTE_EVENT_12ms
			DoorLock_Indication_Algo_Runnable();

			i = 0;
		}
		else
		{
			i++;
		}

		wait_cycles(10);
	}
}
