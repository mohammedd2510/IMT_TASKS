/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC_program.c
 *        Author: Mohamed Osama
 *		   Date:  Mar 15, 2024
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "MCAL/NVIC/NVIC_interface.h"
#include "MCAL/NVIC/NVIC_private.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void MNVIC_voidInit(void)
{
	MSCB_voidSetPriorityGrouping();
}

void MNVIC_voidEnableIRQ(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		NVIC->ISER[((u32)IRQn >> 5)] = (1UL << ((u32)IRQn & 0x1F));
	}
}

void MNVIC_voidDisableIRQ(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		NVIC->ICER[((u32)IRQn >> 5)] = (1UL << ((u32)IRQn & 0x1F));
	}
}

void MNVIC_voidPeripheralInterruptControl(IRQn_Type IRQn ,NVIC_INT_CTRL_t Copy_tInterruptState)
{
	switch (Copy_tInterruptState)
	{
	case MNVIC_INT_ENABLE:
		MNVIC_voidEnableIRQ(IRQn);
		break;
	case MNVIC_INT_DISABLE:
		MNVIC_voidDisableIRQ(IRQn);
		break;
	default: // error
		break;
	}
}
void MNVIC_voidSetPendingIRQ(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		NVIC->ISPR[((u32)IRQn >> 5)] = (1UL << ((u32)IRQn & 0x1F));
	}

}


void MNVIC_voidClearPendingIRQ(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		NVIC->ICPR[((u32)IRQn >> 5)] = (1UL << ((u32)IRQn & 0x1F));
	}
}


u32 MNVIC_u32GetActiveIRQ(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		return	NVIC->IABR[((u32)IRQn >> 5)] && (1UL << ((u32)IRQn & 0x1F));
	}
	else return 0;
}

void MNVIC_voidSetPriority(IRQn_Type IRQn, u32 Priority)
{
	if(IRQn >=0)
	{
		NVIC->IP[(u32)IRQn] = (u8)(Priority << (8 - NVIC_PRIO_BITS));
	}
	else
	{
		/*Nothing*/
	}
}


u32 MNVIC_u32GetPriority(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		return ( (NVIC->IP[(u32)IRQn]) >> (8U - NVIC_PRIO_BITS) );
	}
	else
	{
		/*Nothing*/
	}
	return 0;
}

void MNVIC_voidGenerateSGI(IRQn_Type IRQn)
{
	if(IRQn >=0)
	{
		NVIC->STIR = (u8)IRQn;
	}
	else
	{
		/*Nothing*/
	}
}

/**********************************************************************************************************************
 *  END OF FILE: NVIC_program.c
 *********************************************************************************************************************/