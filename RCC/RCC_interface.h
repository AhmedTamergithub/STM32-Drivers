/*
 * RCC_interface.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Ahmed
 */

#ifndef INC_RCC_INTERFACE_H_
#define INC_RCC_INTERFACE_H_

/* Peripherals on AHB BUS */

#define RCC_AHBENR_SDIO_EN  10
#define RCC_AHBENR_FSMC_EN  8
#define RCC_AHBENR_CRC_EN   6
#define RCC_AHBENR_FLITF_EN 4
#define RCC_AHBENR_SRAM_EN  2
#define RCC_AHBENR_DMA2_EN  1
#define RCC_AHBENR_DMA1_EN  0

/* Peripherals on APB2 BUS */

#define RCC_APB2ENR_TIM11EN  21
#define RCC_APB2ENR_TIM10EN  20
#define RCC_APB2ENR_TIM9EN   19
#define RCC_APB2ENR_ADC3EN   15
#define RCC_APB2ENR_USART1EN 14
#define RCC_APB2ENR_TIM8EN   13
#define RCC_APB2ENR_SPI1EN   12
#define RCC_APB2ENR_TIM1EN   11
#define RCC_APB2ENR_ADC2EN   10
#define RCC_APB2ENR_ADC1EN    9
#define RCC_APB2ENR_IOPGEN    8
#define RCC_APB2ENR_IOPFEN    7
#define RCC_APB2ENR_IOPEEN    6
#define RCC_APB2ENR_IOPDEN    5
#define RCC_APB2ENR_IOPCEN    4
#define RCC_APB2ENR_IOPBEN    3
#define RCC_APB2ENR_IOPAEN    2
#define RCC_APB2ENR_AFIOEN    0

/* Peripherals on APB1 BUS */
#define RCC_APB1ENR_DACEN     29
#define RCC_APB1ENR_PWREN     28
#define RCC_APB1ENR_BKPEN     27
#define RCC_APB1ENR_CANEN     25
#define RCC_APB1ENR_USBEN     23
#define RCC_APB1ENR_I2C2EN    22
#define RCC_APB1ENR_I2C1EN    21
#define RCC_APB1ENR_UART5EN   20
#define RCC_APB1ENR_UART4EN   19
#define RCC_APB1ENR_USART3EN  18
#define RCC_APB1ENR_USART2EN  17
#define RCC_APB1ENR_SPI3EN    15
#define RCC_APB1ENR_SPI2EN    14
#define RCC_APB1ENR_WWDGEN    11
#define RCC_APB2ENR_TIM14EN   8
#define RCC_APB2ENR_TIM13EN   7
#define RCC_APB2ENR_TIM12EN   6
#define RCC_APB2ENR_TIM7EN    5
#define RCC_APB2ENR_TIM6EN    4
#define RCC_APB2ENR_TIM5EN    3
#define RCC_APB2ENR_TIM4EN    2
#define RCC_APB2ENR_TIM3EN    1
#define RCC_APB2ENR_TIM2EN    0



void ClockEnable(u8 Copy_BusId,u8 Copy_PerphID);
void ClockDisable(u8 Copy_BusId,u8 Copy_PerphID);
void RCC_InitSysClock(void);

#endif /* INC_RCC_INTERFACE_H_ */
