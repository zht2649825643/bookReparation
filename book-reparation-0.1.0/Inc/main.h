/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOE
#define LED3_Pin GPIO_PIN_6
#define LED3_GPIO_Port GPIOE
#define BEEP_Pin GPIO_PIN_10
#define BEEP_GPIO_Port GPIOI
#define MOTOR_DIR_2_Pin GPIO_PIN_1
#define MOTOR_DIR_2_GPIO_Port GPIOF
#define RELAY_3_Pin GPIO_PIN_0
#define RELAY_3_GPIO_Port GPIOC
#define RELAY_2_Pin GPIO_PIN_3
#define RELAY_2_GPIO_Port GPIOC
#define RELAY_1_Pin GPIO_PIN_4
#define RELAY_1_GPIO_Port GPIOA
#define RELAY_0_Pin GPIO_PIN_6
#define RELAY_0_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_9
#define LED1_GPIO_Port GPIOH
#define MOTOR_DIR_1_Pin GPIO_PIN_11
#define MOTOR_DIR_1_GPIO_Port GPIOD
#define Limit1_Pin GPIO_PIN_6
#define Limit1_GPIO_Port GPIOC
#define Limit1_EXTI_IRQn EXTI9_5_IRQn
#define Limit2_Pin GPIO_PIN_7
#define Limit2_GPIO_Port GPIOC
#define Limit2_EXTI_IRQn EXTI9_5_IRQn
#define MOTOR_DIR_3_Pin GPIO_PIN_8
#define MOTOR_DIR_3_GPIO_Port GPIOC
#define MOTOR_PUL_3_Pin GPIO_PIN_2
#define MOTOR_PUL_3_GPIO_Port GPIOI
#define Limit3_Pin GPIO_PIN_15
#define Limit3_GPIO_Port GPIOA
#define Limit3_EXTI_IRQn EXTI15_10_IRQn
#define MOTOR_DIR_0_Pin GPIO_PIN_3
#define MOTOR_DIR_0_GPIO_Port GPIOD
#define Limit4_Pin GPIO_PIN_3
#define Limit4_GPIO_Port GPIOB
#define Limit4_EXTI_IRQn EXTI3_IRQn
#define MOTOR_PUL_0_Pin GPIO_PIN_5
#define MOTOR_PUL_0_GPIO_Port GPIOI
#define MOTOR_PUL_1_Pin GPIO_PIN_6
#define MOTOR_PUL_1_GPIO_Port GPIOI
#define MOTOR_PUL_2_Pin GPIO_PIN_7
#define MOTOR_PUL_2_GPIO_Port GPIOI
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
