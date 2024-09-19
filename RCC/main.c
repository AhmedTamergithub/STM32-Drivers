#include "STD_Types.h"
#include "BIT_Calc.h"
#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"


#define GPIO_A    *((volatile u32*)0x40010800)

#define GPIO_ODR  *((volatile u32*)0x4001080C)



void main(void){

	ClockEnable(APB2,2);
	RCC_InitSysClock();


	GPIO_A  =0x00000002;
	GPIO_ODR=0X00000001;






	while(1){

	}
}
