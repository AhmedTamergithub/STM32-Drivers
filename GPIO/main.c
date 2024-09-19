
#include "BIT_Calc.h"
#include "STD_Types.h"
#include "GPIO_interface.h"
#include "RCC_interface.h"

void main(void){

	RCC_InitSysClock();
	//Enable GPIO_PORTA Perph
	 ClockEnable(APB2,2);
	 //Enable GPIO_PORTB Perph
	 ClockEnable(APB2, 3);
	 //Enable GPIO_PORTC Perph
	 ClockEnable(APB2, 4);


GPIO_voidSetPinDirection(GPIO_PORTA, GPIO_PIN0, PUSH_PULL_2MHZ_OUTPUT);


	while(1){
		GPIO_voidSetPinValue(GPIO_PORTA, GPIO_PIN0, PIN_HIGH);
	}
}
