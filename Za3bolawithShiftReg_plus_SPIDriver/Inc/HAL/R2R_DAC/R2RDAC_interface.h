/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  R2RDAC_interface.h
 *        Author: Mohamed Osama
 *		   Date:  Apr 5, 2024
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef HAL_R2R_DAC_R2RDAC_INTERFACE_H_
#define HAL_R2R_DAC_R2RDAC_INTERFACE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "MCAL/GPIO/GPIO_interface.h"
#include "MCAL/RCC/RCC_interface.h"
#include "LIB/Delay.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define R2RDAC_RESOLUTION 0x08u

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct{
	pin_index_t R2RDAC_Bit_Pin[R2RDAC_RESOLUTION];
	port_index_t R2RDAC_Bit_Port[R2RDAC_RESOLUTION];
}R2RDAC_config_t;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void R2RDAC_voidInit(R2RDAC_config_t* R2RDAC_Config);
void R2RDAC_voidSetSignal(R2RDAC_config_t* R2RDAC_Config,const u8* Copy_pu8Signal , u32 Copy_u32SignalLength);
 
#endif /* HAL_R2R_DAC_R2RDAC_INTERFACE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: R2RDAC_interface.h
 *********************************************************************************************************************/

