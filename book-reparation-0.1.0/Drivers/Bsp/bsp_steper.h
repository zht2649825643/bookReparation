#ifndef __BSP_STEPER_H__
#define __BSP_STEPER_H__

#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "delay.h"
///*************X轴电机引脚定义****************/
////Motor 方向引脚
//#define X_MOTOR_DIR_GPIO GPIOE
//#define X_MOTOR_DIR_PIN GPIO_PIN_8
////Motor 脉冲引脚
//#define X_MOTOR_PUL_GPIO GPIOB
//#define X_MOTOR_PUL_PIN GPIO_PIN_1

///*************Y轴电机引脚定义****************/
// //Motor 方向引脚
//#define Y_MOTOR_DIR_GPIO GPIOC
//#define Y_MOTOR_DIR_PIN GPIO_PIN_5
// //Motor 脉冲引脚
//#define Y_MOTOR_PUL_GPIO GPIOC
//#define Y_MOTOR_PUL_PIN GPIO_PIN_4

#define SUBDIVIDE 4

/* 步进电机结构体 */
typedef struct{
	GPIO_TypeDef* pul_pin_gpio;        //脉冲引脚
	uint16_t pul_pin_port;        //方向引脚
	GPIO_TypeDef* dir_pin_gpio;
	uint16_t dir_pin_port; 
	double distance;
	uint8_t stopFlag;
}Stepper_TypeDef;


/* 步进电机结构体 */
typedef struct{
	float x_dis;
	float y_dis;
}StepDistance_Def;

/* 坐标轴枚举 */
typedef enum{
   x_axis = 0U,
   y_axis
}Axis_TypeDef;

/**
* @brief  步进电机旋转
* @param  steper            被控电机
* @param  dir               选择正反转(取值范围：0,1)
* @param  speed             方波周期 单位MS   周期越短频率越高，转速越快 细分为1时最少10ms
* @param  angle             需要转动的角度值
* @param  subdivide         细分值
* @note   无
* @retval 无
*/
void steper_move(Stepper_TypeDef steper, uint8_t dir, uint32_t speed, float angle);

/**
* @brief  步进电机旋转0.45mm
* @param  steper            被控电机
* @param  dir               选择正反转(取值范围：0,1)
* @param  speed             方波周期 单位MS   周期越短频率越高，转速越快 
* @note   无
* @retval 无
*/
void steperMove045mm(Stepper_TypeDef steper, uint8_t dir, uint32_t speed);

/**
* @brief  步进电机步进dis毫米
* @param  i            			被控电机的序号
* @param  dir               选择正反转(取值范围：0,1)
* @param  speed             方波周期 单位MS   周期越短频率越高，转速越快 
* @param  dis 							步进距离  
* @note   无
* @retval 无
*/
void steperMove(uint8_t i, uint8_t dir, uint32_t speed, uint32_t dis);

void steper_coordinate(float x, float y);
void steper_coordinate_x(float x);
void steper_coordinate_y(float y);

#endif

