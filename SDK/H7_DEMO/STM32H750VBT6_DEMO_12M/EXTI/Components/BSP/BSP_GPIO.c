/**
  ****************************(C) COPYRIGHT 2021 Boring_TECH*********************
  * @file       BSP_GPIO.c/h
  * @brief      GPIO的二次封装
  * @note      	
  * @history
  *  Version    Date            Author          Modification
  *  V3.0.0     2020.7.14     	              	1. done
  *
  @verbatim
  ==============================================================================

  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2021 Boring_TECH*********************
  */
#include "BSP_GPIO.h"

//配置文件在.h文件中

//LED配置文件在.h文件中

//中断服务程序中需要做的事情
//在HAL库中所有的外部中断服务函数都会调用此函数
//GPIO_Pin:中断引脚号
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
//    static u8 led0sta=1,led1sta=1;
	
	 //消抖，此处为了方便使用了延时函数，实际代码中禁止在中断服务函数中调用任何delay之类的延时函数！！！
//    HAL_Delay(20);     
    switch(GPIO_Pin)
    {

			case GPIO_PIN_13:
					if(HAL_GPIO_ReadPin(KEY_GPIO_Port,KEY_Pin)==0)  	//控制LED0翻转
					{
						HAL_GPIO_TogglePin(RED_GPIO_Port,RED_Pin);
					}
					break;
    }
}
