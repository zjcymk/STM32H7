/**
  ****************************(C) COPYRIGHT 2021 Boring_TECH*********************
  * @file       BSP_TIM.c/h
  * @brief      TIM的二次封装
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
#include "BSP_TIM.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if(htim==(&htim3))
    {
        HAL_GPIO_TogglePin(RED_GPIO_Port,RED_Pin);        //LED0反转
    }
}



