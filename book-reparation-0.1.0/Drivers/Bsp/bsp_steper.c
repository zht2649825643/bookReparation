#include "bsp_steper.h"
#include "cmsis_os.h"

/* 步进电机结构体数组 */
Stepper_TypeDef stepers[4] =
{
        {MOTOR_PUL_0_GPIO_Port, MOTOR_PUL_0_Pin, MOTOR_DIR_0_GPIO_Port, MOTOR_DIR_0_Pin},
        {MOTOR_PUL_1_GPIO_Port, MOTOR_PUL_1_Pin, MOTOR_DIR_1_GPIO_Port, MOTOR_DIR_1_Pin},
				{MOTOR_PUL_2_GPIO_Port, MOTOR_PUL_2_Pin, MOTOR_DIR_2_GPIO_Port, MOTOR_DIR_2_Pin},
				{MOTOR_PUL_3_GPIO_Port, MOTOR_PUL_3_Pin, MOTOR_DIR_3_GPIO_Port, MOTOR_DIR_3_Pin},
};

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
void steper_move(Stepper_TypeDef steper, uint8_t dir, uint32_t speed, float angle)
{
	int n,i;
	/*根据细分数求得步距角被分成多少个方波*/
	n=(int)(angle/(1.8/SUBDIVIDE));

    /* 确定电机运动方向*/
	GPIO_PinState step_dir = dir==0?GPIO_PIN_RESET:GPIO_PIN_SET;
	HAL_GPIO_WritePin(steper.dir_pin_gpio, steper.dir_pin_port, step_dir);
	// osDelay(1);
	/*模拟方波*/
	for(i = 0; i < n; i++)
	{
		HAL_GPIO_WritePin(steper.pul_pin_gpio, steper.pul_pin_port, GPIO_PIN_SET);
		delay_us(speed);
		HAL_GPIO_WritePin(steper.pul_pin_gpio, steper.pul_pin_port, GPIO_PIN_RESET);
		delay_us(speed);
	}
}

/**
* @brief  步进电机旋转0.45mm
* @param  steper            被控电机
* @param  dir               选择正反转(取值范围：0,1)
* @param  speed             方波周期 单位MS   周期越短频率越高，转速越快 
* @note   无
* @retval 无
*/
void steperMove045mm(Stepper_TypeDef steper, uint8_t dir, uint32_t speed)
{
    /* 确定电机运动方向*/
	GPIO_PinState step_dir = dir==0?GPIO_PIN_RESET:GPIO_PIN_SET;
	HAL_GPIO_WritePin(steper.dir_pin_gpio, steper.dir_pin_port, step_dir);
	// osDelay(1);
	/*模拟方波*/
	for(int i = 0; i < 5; i++)
	{
		HAL_GPIO_WritePin(steper.pul_pin_gpio, steper.pul_pin_port, GPIO_PIN_SET);
		delay_us(speed);
		HAL_GPIO_WritePin(steper.pul_pin_gpio, steper.pul_pin_port, GPIO_PIN_RESET);
		delay_us(speed);
	}
}

/**
* @brief  步进电机步进dis毫米
* @param  i            			被控电机的序号
* @param  dir               选择正反转(取值范围：0,1)
* @param  speed             方波周期 单位MS   周期越短频率越高，转速越快 
* @param  dis 							步进距离  
* @note   无
* @retval 无
*/
void steperMove(uint8_t i, uint8_t dir, uint32_t speed, uint32_t dis)
{
	Stepper_TypeDef* steper = &stepers[i];
	int n = dis/0.45;
	for(int i = 0; i < n; ++i){
		steperMove045mm(*steper, dir, speed);
		steper->distance += 0.45;
	}
  
}

/**
* @brief  步进二维平面运动
* @param  x            		x轴需要移动的位置
* @param  y               y轴需要移动的距离
* @note   无
* @retval 无
*/
void steper_coordinate(float x, float y)
{
    int dir_x = x > 0 ? 1:0;
    float angle_x = x > 0 ? x*360:-x*360;
    steper_move(stepers[0], dir_x, 100, angle_x);

    int dir_y = y > 0 ? 1:0;
    float angle_y = y > 0 ? y*360:-y*360;
    steper_move(stepers[1], dir_y, 100, angle_y);
}

void steper_coordinate_x(float x)
{
    int dir_x = x > 0 ? 1:0;
    float angle_x = x > 0 ? x*360:-x*360;
    steper_move(stepers[0], dir_x, 500, angle_x);
}

void steper_coordinate_y(float y)
{
    int dir_y = y > 0 ? 1:0;
    float angle_y = y > 0 ? y*360:-y*360;
    steper_move(stepers[1], dir_y, 500, angle_y);
}

