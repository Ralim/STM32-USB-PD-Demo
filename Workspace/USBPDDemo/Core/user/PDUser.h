/*
 * PDUser.h
 *
 *  Created on: 4 Jul 2021
 *      Author: ralim
 */

#ifndef USER_PDUSER_H_
#define USER_PDUSER_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"
#include "i2c.h"
void pd_user_main();
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
#ifdef __cplusplus
}
#endif

#endif /* USER_PDUSER_H_ */
