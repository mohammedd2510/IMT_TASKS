/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  BUTTON_interface.h
 *        Author: Mohamed Osama
 *		   Date:  Mar 30, 2024
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef HAL_BUTTON_BUTTON_INTERFACE_H_
#define HAL_BUTTON_BUTTON_INTERFACE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "MCAL/GPIO/GPIO_interface.h"
#include"MCAL/SYSTICK/SYSTICK_interface.h"
#include"MCAL/RCC/RCC_interface.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum{
    BUTTON_PRESSED =0,
    BUTTON_RELEASED
}button_state_t;

typedef enum{
    BUTTON_ACTIVE_HIGH,
    BUTTON_ACTIVE_LOW
}button_active_t;

typedef struct{
	pin_index_t button_pin;
	port_index_t button_port;
    button_state_t button_state;
    button_active_t button_connection;
}button_t;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void HButton_init(const button_t *btn);
button_state_t HButton_ReadState(const button_t *btn);
 
#endif /* HAL_BUTTON_BUTTON_INTERFACE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: BUTTON_interface.h
 *********************************************************************************************************************/
