/*
 * RCC_private.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Ahmed
 */

#ifndef INC_RCC_PRIVATE_H_
#define INC_RCC_PRIVATE_H_

//Registers for enabling clk on processor
#define RCC_CR      *((volatile u32*)0x40021000)
#define RCC_CFGR    *((volatile u32*)0x40021004)

/* RCC_CR bits*/
#define RCC_CR_PLLRDY 25
#define RCC_CR_PLLON  24
#define RCC_CR_CSSON  19
#define RCC_CR_HSEBYP 18
#define RCC_CR_HSERDY 17
#define RCC_CR_HSEON  16
#define RCC_CR_HSIRDY 1
#define RCC_CR_HSION  0

//RCC_CFGR bits/
#define RCC_CFGR_MCO0     24
#define RCC_CFGR_MCO1     25
#define RCC_CFGR_MCO2     26
#define RCC_CFGR_USBPRE   22
#define RCC_CFGR_PLLMUL0  18
#define RCC_CFGR_PLLMUL1  19
#define RCC_CFGR_PLLMUL2  20
#define RCC_CFGR_PLLMUL3  21
#define RCC_CFGR_PLLXTPRE 17
#define RCC_CFGR_PLLSRC   16
#define RCC_CFGR_ADCPRE0  14
#define RCC_CFGR_ADCPRE1  15
#define RCC_CFGR_PPRE20   11
#define RCC_CFGR_PPRE21   12
#define RCC_CFGR_PPRE22   13
#define RCC_CFGR_PPRE10   8
#define RCC_CFGR_PPRE11   9
#define RCC_CFGR_PPRE12   10
#define RCC_CFGR_HPRE0    4
#define RCC_CFGR_HPRE1    5
#define RCC_CFGR_HPRE2    6
#define RCC_CFGR_HPRE3    7
#define RCC_CFGR_SWS0     2
#define RCC_CFGR_SWS1     3
#define RCC_CFGR_SW0      0
#define RCC_CFGR_SW1      1

//Registers for enabling clk on perpherials/
#define RCC_AHBENR  *((volatile u32*)0x40021014)
#define RCC_APB1ENR *((volatile u32*)0x4002101C)
#define RCC_APB2ENR *((volatile u32*)0x40021018)

#endif /* INC_RCC_PRIVATE_H_ */
