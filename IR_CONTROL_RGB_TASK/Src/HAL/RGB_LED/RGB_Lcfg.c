/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  RGB_Lcfg.c
 *        Author: Mohamed Osama
 *		   Date:  Mar 31, 2024
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include"HAL/RGB_LED/RGB_Lcfg.h"

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
RGB_Config_t RGB_Lcfg =
{
		.RGB_Red_Pin = GPIO_PIN0,
		.RGB_Red_Port =GPIO_PORTB,
		.RGB_Red_State = RGB_LED_OFF,
		.RGB_Green_Pin = GPIO_PIN1,
		.RGB_Green_Port = GPIO_PORTB,
		.RGB_Green_State = RGB_LED_OFF,
		.RGB_Blue_Pin = GPIO_PIN2,
		.RGB_Blue_Port = GPIO_PORTB,
		.RGB_Blue_State = RGB_LED_OFF
};


/**********************************************************************************************************************
 *  END OF FILE: RGB_Lcfg.c
 *********************************************************************************************************************/
