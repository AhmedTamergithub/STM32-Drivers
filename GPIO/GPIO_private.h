/*
 * GPIO_private.h
 *
 *  Created on: Sep 19, 2024
 *      Author: Ahmed
 */

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_
#define base_address_portA 0x40010800
#define base_address_portB 0x40010C00
#define base_address_portC 0x40011000
//GPIO PortA registers
#define  GPIOA_CRL   *((volatile u32*)base_address_portA)
#define  GPIOA_CRH   *((volatile u32*)(base_address_portA+0x04))
#define  GPIOA_IDR   *((volatile u32*)(base_address_portA+0x08))
#define  GPIOA_ODR   *((volatile u32*)(base_address_portA+0x0C))
#define  GPIOA_BSRR  *((volatile u32*)(base_address_portA+0x10))
#define  GPIOA_BRR   *((volatile u32*)(base_address_portA+0x14))
#define  GPIOA_LCKR  *((volatile u32*)(base_address_portA+0x18))

//GPIO PortB registers
#define  GPIOB_CRL   *((volatile u32*)base_address_portB)
#define  GPIOB_CRH   *((volatile u32*)(base_address_portB+0x04))
#define  GPIOB_IDR   *((volatile u32*)(base_address_portB+0x08))
#define  GPIOB_ODR   *((volatile u32*)(base_address_portB+0x0C))
#define  GPIOB_BSRR  *((volatile u32*)(base_address_portB+0x10))
#define  GPIOB_BRR   *((volatile u32*)(base_address_portB+0x14))
#define  GPIOB_LCKR  *((volatile u32*)(base_address_portB+0x18))

//GPIO PortC registers
#define  GPIOC_CRL   *((volatile u32*)base_address_portC)
#define  GPIOC_CRH   *((volatile u32*)(base_address_portC+0x04))
#define  GPIOC_IDR   *((volatile u32*)(base_address_portC+0x08))
#define  GPIOC_ODR   *((volatile u32*)(base_address_portC+0x0C))
#define  GPIOC_BSRR  *((volatile u32*)(base_address_portC+0x10))
#define  GPIOC_BRR   *((volatile u32*)(base_address_portC+0x14))
#define  GPIOC_LCKR  *((volatile u32*)(base_address_portC+0x18))






#endif /* GPIO_PRIVATE_H_ */
