/*
 * GPIO_interface.h
 *
 *  Created on: Sep 19, 2024
 *      Author: Ahmed
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

//PIN VALUES
#define PIN_HIGH 1
#define PIN_LOW  0
//PORTS
#define GPIO_PORTA 0
#define GPIO_PORTB 1
#define GPIO_PORTC 2
//PIN NUMBERS
#define GPIO_PIN0   0
#define GPIO_PIN1   1
#define GPIO_PIN2   2
#define GPIO_PIN3   3
#define GPIO_PIN4   4
#define GPIO_PIN5   5
#define GPIO_PIN6   6
#define GPIO_PIN7   7
#define GPIO_PIN8   8
#define GPIO_PIN9   9
#define GPIO_PIN10  10
#define GPIO_PIN11  11
#define GPIO_PIN12  12
#define GPIO_PIN13  13
#define GPIO_PIN14  14
#define GPIO_PIN15  15

//Pins Mode and Configuration
//For input pin

#define ANALOG_INPUT        0000
#define FLOATING_INPUT      0100
#define PULL_UP_DOWN_INPUT  1000


//for output pin

//PIN FREQUENCY MAX 10MHZ
#define PUSH_PULL_10MHZ_OUTPUT       0001
#define OPEN_DRAIN_10MHZ_OUTPUT      0101
#define AF_PUSH_PULL_10MHZ_OUTPUT    1001
#define AF_OPEN_DRAIN_10MHZ_OUTPUT   1101


//PIN FREQUENCY MAX 2MHZ
#define PUSH_PULL_2MHZ_OUTPUT       0010
#define OPEN_DRAIN_2MHZ_OUTPUT      0110
#define AF_PUSH_PULL_2MHZ_OUTPUT    1010
#define AF_OPEN_DRAIN_2MHZ_OUTPUT   1110

//PIN FREQUENCY MAX 50MHZ
#define PUSH_PULL_50MHZ_OUTPUT       0011
#define OPEN_DRAIN_50MHZ_OUTPUT      0111
#define AF_PUSH_PULL_50MHZ_OUTPUT    1011
#define AF_OPEN_DRAIN_50MHZ_OUTPUT   1111


//Function Prototypes
void GPIO_voidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode);
void GPIO_voidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value);
void GPIO_voidSetPortValue(u8 Copy_u8Port,u16 Copy_u16PortValue);
u8 GPIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin);
u8 GPIO_voidLockPin(u8 Copy_u8Port,u8 Copy_u8Pin);
#endif /* GPIO_INTERFACE_H_ */
