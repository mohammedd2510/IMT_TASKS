/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
#include"main.h"

// ----------------------------------------------------------------------------
void EXTI0_Handler(void){
	LED_voidToggle(&led_red1);
}
void EXTI1_Handler(void){
	LED_voidToggle(&led_yellow1);
}
int main(void)
{
	MEXTI_voidInit(&EXTI0_CONFIG,EXTI0_Handler);
	MEXTI_voidInit(&EXTI1_CONFIG,EXTI1_Handler);
	LED_voidInit(&led_red1);
	LED_voidInit(&led_yellow1);
	HButton_init(&btn1);
	HButton_init(&btn2);
    /* Loop forever */
	while(1)
	{

	}
}
