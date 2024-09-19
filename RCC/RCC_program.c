
/*
 * RCC_program.c
 *
 *  Created on: Sep 15, 2024
 *      Author: Ahmed
 */
#include "STD_Types.h"
#include "BIT_Calc.h"
#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"

void ClockEnable(u8 Copy_BusId, u8 Copy_PerphID) {
    switch (Copy_BusId) {
        case AHB:
            Set_Bit(RCC_AHBENR, Copy_PerphID);
            break;

        case APB1:
            Set_Bit(RCC_APB1ENR, Copy_PerphID);
            break;

        case APB2:
            Set_Bit(RCC_APB2ENR, Copy_PerphID);
            break;

        default:

            break;
    }
}

void ClockDisable(u8 Copy_BusId, u8 Copy_PerphID) {
    switch (Copy_BusId) {
        case AHB:
            Clr_Bit(RCC_AHBENR, Copy_PerphID);
            break;

        case APB1:
            Clr_Bit(RCC_APB1ENR, Copy_PerphID);
            break;

        case APB2:
            Clr_Bit(RCC_APB2ENR, Copy_PerphID);
            break;

        default:{

    }
}
}
void RCC_InitSysClock(void){
	//initialization of CFGR register
//RCC_CFGR=0x00000000;
//RCC_CR  =0x00000000;
#if  System_Clk==HSI
	Set_Bit(RCC_CR,RCC_CR_HSION);
	while(Get_Bit(RCC_CR,RCC_CR_HSIRDY)!=1);
	RCC_CFGR=0x00000000;

#elif System_Clk==HSE


#elif Sytem_Clk==PLL

	//Set_Bit(RCC_CR,PLLON)
#endif

}
