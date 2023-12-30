#include "RTE_SWC1.h"

void SUM (void)
{
	Std_ReturnType Status = E_NOT_OK;
	
	unsigned char x , y;
	unsigned int z;
	
	Status = RTE_READ_RP_SR_DataInputs_VAL1( &x );
	Status = RTE_READ_RP_SR_DataInputs_VAL2( &y );
	
	z = x + y;
	
	Status = RTE_WRITE_PP_SR_SumResults_SumResults( z );
}