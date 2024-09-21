/*
 * NVIC_interface.h
 *
 *  Created on: Sep 20, 2024
 *      Author: Ahmed
 */

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

void NVIC_voidEnableInterrupt(u8 Copy_u8InterruptNumber);
void NVIC_voidDisableInterrupt(u8 Copy_u8InterruptNumber);
void NVIC_voidSetPendingFlag (u8 Copy_u8InterruptNumber);
void NVIC_voidClearPendingFlag (u8 Copy_u8InterruptNumber);
u8 NVIC_u8GetActiveFlag (u8 Copy_u8InterruptNumber);
void NVIC_voidSetPriority(u8 Copy_u8InterruptNumber,u8 Copy_Priority);
#endif /* NVIC_INTERFACE_H_ */
