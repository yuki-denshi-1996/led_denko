/*
 * denko_main.h
 *
 *  Created on: May 22, 2025
 *      Author: User
 */

#ifndef USER_DENKO_MAIN_H_
#define USER_DENKO_MAIN_H_

#include "ch32v203_GPIO_mylib.h"

#define ROW1_SERIAL PA0
#define ROW2_SERIAL PB7
#define ROW3_SERIAL PA1
#define ROW4_SERIAL PA15

#define ROW_SRCLK PB3
#define ROW_SRCLR PB4
#define ROW_RCLK PB5
#define ROW_OE PB6

#define COL1_DATA PA2
#define COL2_DATA PA3
#define COL4_DATA PA4
#define COL8_DATA PA12
#define COL16_DATA PA11
#define COL32_DATA PA8
#define COL_OE PD1

#endif /* USER_DENKO_MAIN_H_ */
