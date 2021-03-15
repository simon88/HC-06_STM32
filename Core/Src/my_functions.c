/*
 * my_functions.c
 *
 *  Created on: Mar 12, 2021
 *      Author: simon
 */


#include "my_functions.h"

char buffer[50];
uint8_t timer_count = 0, buffer_index = 0;


void messageHandler(){
	HAL_StatusTypeDef val_ret;

	if( strcmp(buffer, LED_ON) == 0 ){
		 HAL_GPIO_WritePin(GPIOB, LD3_Pin, GPIO_PIN_SET);
		 val_ret = HAL_UART_Transmit(&huart1, (uint8_t*)"LED is ON.\n", strlen("LED is ON.\n"), 500);
	}else if( strcmp(buffer, LED_OFF) == 0 ){
		 HAL_GPIO_WritePin(GPIOB, LD3_Pin, GPIO_PIN_RESET);
		 val_ret = HAL_UART_Transmit(&huart1, (uint8_t*)"LED is OFF.\n", strlen("LED is OFF.\n"), 500);
	}else{
		strcat(buffer, "\n");
		val_ret = HAL_UART_Transmit(&huart1, (uint8_t*)buffer, strlen(buffer), 500);
	}

	if(val_ret != HAL_OK){
		Error_Handler();
	}

	memset(buffer, 0, sizeof(buffer));
	buffer_index = 0;
	timer_count = 0;
}
