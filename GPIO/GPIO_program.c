/*
 * GPIO_program.c
 *
 *  Created on: Sep 19, 2024
 *      Author: Ahmed
 */
#include "BIT_Calc.h"
#include "STD_Types.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


void GPIO_voidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode){

	//Algorithm1
	if(Copy_u8Pin<8){
		switch(Copy_u8Port){
		case GPIO_PORTA:
		{
			//Step1:Masking the current 4bits
			Clr_Bit(GPIOA_CRL,(4*Copy_u8Pin));
			Clr_Bit(GPIOA_CRL,(4*Copy_u8Pin+1));
			Clr_Bit(GPIOA_CRL,(4*Copy_u8Pin+2));
			Clr_Bit(GPIOA_CRL,(4*Copy_u8Pin+3));
			//Step2:Assigning in CRL Register
			GPIOA_CRL|=((Copy_u8Mode)<<(4*Copy_u8Pin));
			break;
		}
		case GPIO_PORTB:
		{
			//Step1:Masking the current 4bits
			Clr_Bit(GPIOB_CRL,(4*Copy_u8Pin));
			Clr_Bit(GPIOB_CRL,(4*Copy_u8Pin+1));
			Clr_Bit(GPIOB_CRL,(4*Copy_u8Pin+2));
			Clr_Bit(GPIOB_CRL,(4*Copy_u8Pin+3));
			//Step2:Assigning in CRL Register
			GPIOB_CRL|=((Copy_u8Mode)<<(4*Copy_u8Pin));
			break;
		}
		case GPIO_PORTC:
		{
			//Step1:Masking the current 4bits
			Clr_Bit(GPIOC_CRL,(4*Copy_u8Pin));
			Clr_Bit(GPIOC_CRL,(4*Copy_u8Pin+1));
			Clr_Bit(GPIOC_CRL,(4*Copy_u8Pin+2));
			Clr_Bit(GPIOC_CRL,(4*Copy_u8Pin+3));
			//Step2:Assigning in CRL Register
			GPIOC_CRL|=((Copy_u8Mode)<<(4*Copy_u8Pin));
			break;
		}
		default:
		{
			break;
		}
		}



	}
	else if((Copy_u8Pin>=8) && (Copy_u8Pin<16)){
        Copy_u8Pin-=8;
		switch(Copy_u8Port){
		case GPIO_PORTA:


		{
			//Step1:Masking the current 4bits
			Clr_Bit(GPIOA_CRH,(4*Copy_u8Pin));
		Clr_Bit(GPIOA_CRH,(4*Copy_u8Pin+1));
		Clr_Bit(GPIOA_CRH,(4*Copy_u8Pin+2));
		Clr_Bit(GPIOA_CRH,(4*Copy_u8Pin+3));
		//Step2:Assigning in CRH Register
		GPIOA_CRH|=((Copy_u8Mode)<<(4*Copy_u8Pin));
		break;
		}
		case GPIO_PORTB:
		{
			//Step1:Masking the current 4bits
			Clr_Bit(GPIOB_CRH,(4*Copy_u8Pin));
			Clr_Bit(GPIOB_CRH,(4*Copy_u8Pin+1));
			Clr_Bit(GPIOB_CRH,(4*Copy_u8Pin+2));
			Clr_Bit(GPIOB_CRH,(4*Copy_u8Pin+3));
			//Step2:Assigning in CRH Register
			GPIOB_CRH|=((Copy_u8Mode)<<(4*Copy_u8Pin));
			break;
		}
		case GPIO_PORTC:
		{
			//Step1:Masking the current 4bits
			Clr_Bit(GPIOC_CRH,(4*Copy_u8Pin));
			Clr_Bit(GPIOC_CRH,(4*Copy_u8Pin+1));
			Clr_Bit(GPIOC_CRH,(4*Copy_u8Pin+2));
			Clr_Bit(GPIOC_CRH,(4*Copy_u8Pin+3));
			//Step2:Assigning in CRH Register
			GPIOC_CRH|=((Copy_u8Mode)<<(4*Copy_u8Pin));
			break;
		}
		default:
		{
			break;
		}
		}



	}



}

void GPIO_voidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value){

	if(Copy_u8Value==PIN_HIGH){
		switch(Copy_u8Port){

		case GPIO_PORTA:
		{
			Set_Bit(GPIOA_ODR,Copy_u8Pin);
			break;
		}
		case GPIO_PORTB:{
			Set_Bit(GPIOB_ODR,Copy_u8Pin);
			break;
		}
		case GPIO_PORTC:{
			Set_Bit(GPIOC_ODR,Copy_u8Pin);
			break;
		}
		default:{
			break;

		}
		}
	}

	else if(Copy_u8Value==PIN_LOW){
		switch(Copy_u8Port){

		case GPIO_PORTA:
		{
			Clr_Bit(GPIOA_ODR,Copy_u8Pin);
			break;
		}
		case GPIO_PORTB:{
			Clr_Bit(GPIOB_ODR,Copy_u8Pin);
			break;
		}
		case GPIO_PORTC:{
			Clr_Bit(GPIOC_ODR,Copy_u8Pin);
			break;
		}
		default:{
			break;
		}
		}
	}
}


void GPIO_voidSetPortValue(u8 Copy_u8Port,u16 Copy_u16PortValue){

	switch(Copy_u8Port){

			case GPIO_PORTA:
			{
				GPIOA_ODR=Copy_u16PortValue;
				break;
			}
			case GPIO_PORTB:{
				GPIOB_ODR=Copy_u16PortValue;
				break;
			}
			case GPIO_PORTC:{
				GPIOC_ODR=Copy_u16PortValue;
				break;
			}
			default:{
				break;

			}
			}


}
u8 GPIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin){

	u8 value_read;
	switch(Copy_u8Port){

	case GPIO_PORTA:{
		value_read=Get_Bit(GPIOA_IDR,Copy_u8Pin);
		break;
	}
	case GPIO_PORTB:{
		value_read=Get_Bit(GPIOB_IDR,Copy_u8Pin);
		break;
	}
	case GPIO_PORTC:{
		value_read=Get_Bit(GPIOC_IDR,Copy_u8Pin);
		break;
	}
	default:{
		break;
	}
	}

	return value_read;


}
u8 GPIO_voidLockPin(u8 Copy_u8Port,u8 Copy_u8Pin){
	u8 lock_status=0;
	switch(Copy_u8Port){

	case GPIO_PORTA:{
		//Locking the bit
		Set_Bit(GPIOA_LCKR,Copy_u8Pin);
		//Locking Sequence
		Set_Bit(GPIOA_LCKR,16);
		Clr_Bit(GPIOA_LCKR,16);
		Set_Bit(GPIOA_LCKR,16);
		if(Get_Bit(GPIOA_LCKR,16)==1){
			lock_status=1; //Lock Successful
		}
		break;
	}
	case GPIO_PORTB:{
		//Locking the bit
		Set_Bit(GPIOB_LCKR,Copy_u8Pin);
		//Locking Sequence
		Set_Bit(GPIOB_LCKR,16);
		Clr_Bit(GPIOB_LCKR,16);
		Set_Bit(GPIOB_LCKR,16);
		if(Get_Bit(GPIOB_LCKR,16)==1){
			lock_status=1; //Lock Successful
		}
		break;
	}
	case GPIO_PORTC:{
		//Locking the bit
		Set_Bit(GPIOC_LCKR,Copy_u8Pin);
		//Locking Sequence
		Set_Bit(GPIOC_LCKR,16);
		Clr_Bit(GPIOC_LCKR,16);
		Set_Bit(GPIOC_LCKR,16);
		if(Get_Bit(GPIOC_LCKR,16)==1){
			lock_status=1; //Lock successful
		}
		break;
	}
	default :{
		lock_status=0; //Lock failed
		break;
	}
	}


	return lock_status;  // Return 1 if the lock was successful, 0 otherwise
}
