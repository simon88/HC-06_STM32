/*
 * my_functions.h
 *
 *  Created on: Mar 12, 2021
 *      Author: simon
 */

#ifndef INC_MY_FUNCTIONS_H_
#define INC_MY_FUNCTIONS_H_

#include "main.h"
#include <string.h>

#define MAX_TIMER_COUNT 5U

extern char buffer[50];
extern uint8_t timer_count, buffer_index;
extern UART_HandleTypeDef huart1;

void messageHandler(void);


#endif /* INC_MY_FUNCTIONS_H_ */
