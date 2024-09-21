/*
 * NVIC_program.c
 *
 *  Created on: Sep 20, 2024
 *      Author: Ahmed
 */


#include "BIT_Calc.h"
#include "STD_Types.h"
#include "NVIC_config.h"
#include"NVIC_private.h"
#include"NVIC_interface.h"

/*In our ST Microcontroller we have 59 external interrupts that can be controlled by NVIC 
 * so we will need 2 registers from each cateogry
 * ,also interrupt number can be u8 because we have  max 240 external interrupts
 * can be controlled by NVIC
 */
void NVIC_voidEnableInterrupt(u8 Copy_u8InterruptNumber){
if(Copy_u8InterruptNumber<32)
{
	Set_Bit(NVIC_ISER0,Copy_u8InterruptNumber);
}
else if(Copy_u8InterruptNumber<64)
{
	Set_Bit(NVIC_ISER1,Copy_u8InterruptNumber);
}



}
void NVIC_voidDisableInterrupt(u8 Copy_u8InterruptNumber){

	if(Copy_u8InterruptNumber<32)
	{
		Set_Bit(NVIC_ICER0,Copy_u8InterruptNumber);
	}
	else if(Copy_u8InterruptNumber<64)
	{
		Set_Bit(NVIC_ICER1,Copy_u8InterruptNumber);
	}


}
void NVIC_voidSetPendingFlag (u8 Copy_u8InterruptNumber){
	if(Copy_u8InterruptNumber<32)
		{
			Set_Bit(NVIC_ISPR0,Copy_u8InterruptNumber);
		}
		else if(Copy_u8InterruptNumber<64)
		{
			Set_Bit(NVIC_ISPR1,Copy_u8InterruptNumber);
		}



}
void NVIC_voidClearPendingFlag (u8 Copy_u8InterruptNumber){
	if(Copy_u8InterruptNumber<32)
			{
				Set_Bit(NVIC_ICPR0,Copy_u8InterruptNumber);
			}
			else if(Copy_u8InterruptNumber<64)
			{
				Set_Bit(NVIC_ICPR1,Copy_u8InterruptNumber);
			}



}
u8 NVIC_u8GetActiveFlag (u8 Copy_u8InterruptNumber){
u8 Local_FlagStatus;

            if(Copy_u8InterruptNumber<32)
			{
	            Local_FlagStatus=Get_Bit(NVIC_IABR0,Copy_u8InterruptNumber);
			}
			else if(Copy_u8InterruptNumber<64)
			{
				Local_FlagStatus=Get_Bit(NVIC_IABR1,Copy_u8InterruptNumber);
			}
return Local_FlagStatus;
}
void NVIC_voidSetPriority(u8 Copy_u8InterruptNumber,u8 Copy_Priority){
//Copy_u8InterruptNumber%=4;
switch(Copy_u8InterruptNumber){
case 0:
{
	NVIC_IPR0|= Copy_Priority<<(4+8*0);
	
break;	
}
case 1:
{
	NVIC_IPR0|= Copy_Priority<<(4+8*1);
	break;
}
case 2:
{
	NVIC_IPR0|= Copy_Priority<<(4+8*2);
	break;
}
case 3:{
	NVIC_IPR0|= Copy_Priority<<(4+8*3);
	break;
}
case 4:{
	NVIC_IPR1|= Copy_Priority<<(4+8*0);
	break;
}
case 5:{
	NVIC_IPR1|= Copy_Priority<<(4+8*1);
	break;
}
case 6:{
	NVIC_IPR1|= Copy_Priority<<(4+8*2);
	break;
}
case 7:{
	NVIC_IPR1|= Copy_Priority<<(4+8*3);
		break;
}
case 8:{
	NVIC_IPR2|= Copy_Priority<<(4+8*0);
		break;
}
case 9:{
	NVIC_IPR2|= Copy_Priority<<(4+8*1);
			break;
}
case 10:{
	NVIC_IPR2|= Copy_Priority<<(4+8*2);
			break;
}
case 11:{
	NVIC_IPR2|= Copy_Priority<<(4+8*3);
			break;
}

}
}
