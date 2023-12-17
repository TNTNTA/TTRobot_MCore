/*
 * led.h
 *
 *  Created on: Dec 17, 2023
 *      Author: taotang
 */

#ifndef BSP_INC_LED_H_
#define BSP_INC_LED_H_

#include "main.h"


#define LED_ON()                                                                        \
do{                                                                                     \
	HAL_GPIO_WritePin(M4_HeartBeat_LED_GPIO_Port, M4_HeartBeat_LED_Pin, GPIO_PIN_SET);  \
}while(0)


#define LED_OFF()                                                                        \
do{                                                                                      \
	HAL_GPIO_WritePin(M4_HeartBeat_LED_GPIO_Port, M4_HeartBeat_LED_Pin, GPIO_PIN_RESET); \
}while(0)




#endif /* BSP_INC_LED_H_ */
