#ifndef MAIN_H
#define MAIN_H

#include "stm32f4xx_hal.h"
#define MRBC_NO_TIMER           1
#define LED_PIN                 GPIO_PIN_5
#define LED_GPIO_PORT           GPIOA
#define LED_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOA_CLK_ENABLE()

static void mrbc_define_methods();
void c_toggle_pin();
void LED_Init();

#endif
