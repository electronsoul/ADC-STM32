/*
 * ADC Library For STM32 ARM MCU
 * 	Created On: July 17 2020
 * 	Author: Satyam Khanna (satyamkhanna66@gmail.com)
 * 	GitHub: https://github.com/samkhannaind
 */
#include "stm32f1xx_hal.h" // CHANGE THIS ACCORDING TO YOUR MCU
#include "ADC.h"
#include <stdio.h>
#include <string.h>

// Used To Get ADC Value
int analogRead(ADC_HandleTypeDef hadc){
	 HAL_ADC_Start(&hadc);
	 HAL_ADC_PollForConversion(&hadc, HAL_MAX_DELAY);
	 return HAL_ADC_GetValue(&hadc);
}
