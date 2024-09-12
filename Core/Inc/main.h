/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SW1_T_Pin GPIO_PIN_13
#define SW1_T_GPIO_Port GPIOC
#define SW1_DEN_Pin GPIO_PIN_14
#define SW1_DEN_GPIO_Port GPIOC
#define SW1_IN_Pin GPIO_PIN_15
#define SW1_IN_GPIO_Port GPIOC
#define ST2_T_Pin GPIO_PIN_0
#define ST2_T_GPIO_Port GPIOH
#define SW2_DEN_Pin GPIO_PIN_1
#define SW2_DEN_GPIO_Port GPIOH
#define SW2_IN_Pin GPIO_PIN_0
#define SW2_IN_GPIO_Port GPIOC
#define SW3_T_Pin GPIO_PIN_1
#define SW3_T_GPIO_Port GPIOC
#define SW3_DEN_Pin GPIO_PIN_2
#define SW3_DEN_GPIO_Port GPIOC
#define SW3_IN_Pin GPIO_PIN_3
#define SW3_IN_GPIO_Port GPIOC
#define SW4_T_Pin GPIO_PIN_0
#define SW4_T_GPIO_Port GPIOA
#define SW1_IS_Pin GPIO_PIN_3
#define SW1_IS_GPIO_Port GPIOA
#define SW2_IS_Pin GPIO_PIN_4
#define SW2_IS_GPIO_Port GPIOA
#define SW3_IS_Pin GPIO_PIN_5
#define SW3_IS_GPIO_Port GPIOA
#define SW4_IS_Pin GPIO_PIN_6
#define SW4_IS_GPIO_Port GPIOA
#define SW5_IS_Pin GPIO_PIN_7
#define SW5_IS_GPIO_Port GPIOA
#define SW6_IS_Pin GPIO_PIN_4
#define SW6_IS_GPIO_Port GPIOC
#define IS_R_Pin GPIO_PIN_5
#define IS_R_GPIO_Port GPIOC
#define IS_L_Pin GPIO_PIN_0
#define IS_L_GPIO_Port GPIOB
#define SW4_DEN_Pin GPIO_PIN_1
#define SW4_DEN_GPIO_Port GPIOB
#define SW4_IN_Pin GPIO_PIN_2
#define SW4_IN_GPIO_Port GPIOB
#define SW5_T_Pin GPIO_PIN_10
#define SW5_T_GPIO_Port GPIOB
#define SW5_DEN_Pin GPIO_PIN_11
#define SW5_DEN_GPIO_Port GPIOB
#define SW5_IN_Pin GPIO_PIN_12
#define SW5_IN_GPIO_Port GPIOB
#define SW6_T_Pin GPIO_PIN_13
#define SW6_T_GPIO_Port GPIOB
#define SW6_DEN_Pin GPIO_PIN_14
#define SW6_DEN_GPIO_Port GPIOB
#define SW6_IN_Pin GPIO_PIN_15
#define SW6_IN_GPIO_Port GPIOB
#define ENC1_A_Pin GPIO_PIN_6
#define ENC1_A_GPIO_Port GPIOC
#define ENC1_B_Pin GPIO_PIN_7
#define ENC1_B_GPIO_Port GPIOC
#define DIR_R_Pin GPIO_PIN_8
#define DIR_R_GPIO_Port GPIOC
#define DIR_L_Pin GPIO_PIN_9
#define DIR_L_GPIO_Port GPIOC
#define ENC2_A_Pin GPIO_PIN_8
#define ENC2_A_GPIO_Port GPIOA
#define ENC2_B_Pin GPIO_PIN_9
#define ENC2_B_GPIO_Port GPIOA
#define PWM_L_Pin GPIO_PIN_10
#define PWM_L_GPIO_Port GPIOA
#define PWM_R_Pin GPIO_PIN_11
#define PWM_R_GPIO_Port GPIOA
#define DI6_Pin GPIO_PIN_15
#define DI6_GPIO_Port GPIOA
#define DI5_Pin GPIO_PIN_10
#define DI5_GPIO_Port GPIOC
#define DI4_Pin GPIO_PIN_11
#define DI4_GPIO_Port GPIOC
#define DI3_Pin GPIO_PIN_12
#define DI3_GPIO_Port GPIOC
#define DI2_Pin GPIO_PIN_2
#define DI2_GPIO_Port GPIOD
#define DI1_Pin GPIO_PIN_4
#define DI1_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_6
#define LED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
