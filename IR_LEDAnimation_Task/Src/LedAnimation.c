/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  LedAnimation.c
 *        Author: Mohamed Osama
 *		   Date:  Mar 6, 2024
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include"LedAnimation.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
static Led_t* Leds_objects_ptrs[LEDS_NUM]={&led_red1,&led_yellow1,&led_red2,&led_yellow2,&led_green1,&led_red3,&led_green2,&led_red4};
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
void LedAnimation_8Leds_Init(void)
{
	u8 Local_LedsCounter =ZERO_INIT;
	for(Local_LedsCounter=ZERO_INIT;Local_LedsCounter<LEDS_NUM;Local_LedsCounter++)
	{
		LED_voidInit(Leds_objects_ptrs[Local_LedsCounter]);
	}
}
void LedAnimation_Flashing(void)
{
	u8 Local_FlashingCounter=ZERO_INIT;
	u8 Local_LedsCounter =ZERO_INIT;
	for(Local_FlashingCounter=ZERO_INIT;Local_FlashingCounter<4;Local_FlashingCounter++)
	{
		for(Local_LedsCounter=ZERO_INIT;Local_LedsCounter<LEDS_NUM;Local_LedsCounter++)
		{
			LED_voidOn(Leds_objects_ptrs[Local_LedsCounter]);
		}
		MSystick_Delay_ms(400);
		for(Local_LedsCounter=ZERO_INIT;Local_LedsCounter<LEDS_NUM;Local_LedsCounter++)
		{
			LED_voidOff(Leds_objects_ptrs[Local_LedsCounter]);
		}
		MSystick_Delay_ms(400);
	}
}
void LedAnimation_Snake(void)
{
	u8 Local_LedsCounter1 =ZERO_INIT;
	u8 Local_LedsCounter2 =ZERO_INIT;
	for(Local_LedsCounter1=ZERO_INIT;Local_LedsCounter1<LEDS_NUM;Local_LedsCounter1++)
	{
		for(Local_LedsCounter2=ZERO_INIT;Local_LedsCounter2<LEDS_NUM-Local_LedsCounter1-1;Local_LedsCounter2++)
		{
			LED_voidOn(Leds_objects_ptrs[Local_LedsCounter2]);
			MSystick_Delay_ms(200);
			LED_voidOff(Leds_objects_ptrs[Local_LedsCounter2]);
			MSystick_Delay_ms(50);
		}
		LED_voidOn(Leds_objects_ptrs[Local_LedsCounter2]);
			MSystick_Delay_ms(200);
	}
	MSystick_Delay_ms(700);
	for(Local_LedsCounter1=ZERO_INIT;Local_LedsCounter1<LEDS_NUM;Local_LedsCounter1++)
	{
		LED_voidOff(Leds_objects_ptrs[Local_LedsCounter1]);
	}
}
void LedAnimation_PingPong(void)
{
	s8 Local_LedsCounter1 =ZERO_INIT;
	for(Local_LedsCounter1=ZERO_INIT;Local_LedsCounter1<LEDS_NUM;Local_LedsCounter1++)
	{
		LED_voidOn(Leds_objects_ptrs[Local_LedsCounter1]);
		MSystick_Delay_ms(300);
		if(Local_LedsCounter1 != LED8){
		LED_voidOff(Leds_objects_ptrs[Local_LedsCounter1]);
		}
		MSystick_Delay_ms(50);
	}
	for(Local_LedsCounter1=LED8;Local_LedsCounter1>=0;Local_LedsCounter1--)
	{
			LED_voidOn(Leds_objects_ptrs[Local_LedsCounter1]);
			MSystick_Delay_ms(300);
			LED_voidOff(Leds_objects_ptrs[Local_LedsCounter1]);
			MSystick_Delay_ms(50);
	}
	MSystick_Delay_ms(200);
}
void LedAnimation_Fat7yYaWarda(void)
{
	s8 Local_LedsCounter1 =ZERO_INIT;
	s8 Local_LedsCounter2 =LED5;
	for(Local_LedsCounter1=LED4;Local_LedsCounter1>=0;Local_LedsCounter1--)
	{
		LED_voidOn(Leds_objects_ptrs[Local_LedsCounter1]);
		LED_voidOn(Leds_objects_ptrs[Local_LedsCounter2]);
		MSystick_Delay_ms(1000);
		Local_LedsCounter2++;
	}
	for(Local_LedsCounter1=ZERO_INIT;Local_LedsCounter1<LEDS_NUM;Local_LedsCounter1++)
	{
		LED_voidOff(Leds_objects_ptrs[Local_LedsCounter1]);
	}
}
void LedAnimation_2aflyYaWarda(void)
{
	u8 Local_LedsCounter1 =ZERO_INIT;
	u8 Local_LedsCounter2 =LED1;
	for(Local_LedsCounter1=LED8;Local_LedsCounter1>=LED4;Local_LedsCounter1--)
	{
		LED_voidOn(Leds_objects_ptrs[Local_LedsCounter1]);
		LED_voidOn(Leds_objects_ptrs[Local_LedsCounter2]);
		MSystick_Delay_ms(1000);
		Local_LedsCounter2++;
	}
	for(Local_LedsCounter1=ZERO_INIT;Local_LedsCounter1<LEDS_NUM;Local_LedsCounter1++)
	{
		LED_voidOff(Leds_objects_ptrs[Local_LedsCounter1]);
	}
}
/**********************************************************************************************************************
 *  END OF FILE: LedAnimation.c
 *********************************************************************************************************************/
