/*
 * NVIC_private.h
 *
 *  Created on: Sep 20, 2024
 *      Author: Ahmed
 */

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

#define NVIC_ISER0   *((voltaile u32*)0xE000E100)
#define NVIC_ISER1   *((voltaile u32*)0xE000E104)
#define NVIC_ICER0   *((voltaile u32*)0xE000E180)
#define NVIC_ICER1   *((voltaile u32*)0xE000E184)
#define NVIC_ISPR0   *((voltaile u32*)0xE000E200)
#define NVIC_ISPR1   *((voltaile u32*)0xE000E204)
#define NVIC_ICPR0   *((voltaile u32*)0xE000E280)
#define NVIC_ICPR1   *((voltaile u32*)0xE000E284)
#define NVIC_IABR0   *((voltaile u32*)0xE000E300)
#define NVIC_IABR1   *((voltaile u32*)0xE000E304)

/*Priority registers*/
#define NVIC_IPR0    *((voltaile u32*)0xE000E400)
#define NVIC_IPR1    *((voltaile u32*)0xE000E401)
#define NVIC_IPR2    *((voltaile u32*)0xE000E402)
#define NVIC_IPR3    *((voltaile u32*)0xE000E403)
#define NVIC_IPR4    *((voltaile u32*)0xE000E404)
#define NVIC_IPR5    *((voltaile u32*)0xE000E405)
#define NVIC_IPR6    *((voltaile u32*)0xE000E406)
#define NVIC_IPR7    *((voltaile u32*)0xE000E407)
#define NVIC_IPR8    *((voltaile u32*)0xE000E408)
#define NVIC_IPR9    *((voltaile u32*)0xE000E409)
#define NVIC_IPR10   *((voltaile u32*)0xE000E410)
#define NVIC_IPR11   *((voltaile u32*)0xE000E411)
#define NVIC_IPR12   *((voltaile u32*)0xE000E412)
#define NVIC_IPR13   *((voltaile u32*)0xE000E413)
#define NVIC_IPR14   *((voltaile u32*)0xE000E414)
#define NVIC_IPR15   *((voltaile u32*)0xE000E415)
#define NVIC_IPR16   *((voltaile u32*)0xE000E416)
#define NVIC_IPR17   *((voltaile u32*)0xE000E417)
#define NVIC_IPR18   *((voltaile u32*)0xE000E418)
#define NVIC_IPR19   *((voltaile u32*)0xE000E419)
#define NVIC_IPR20   *((voltaile u32*)0xE000E420)
#endif /* NVIC_PRIVATE_H_ */
