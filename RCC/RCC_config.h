/*
 * RCC_config.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Ahmed
 */

#ifndef INC_RCC_CONFIG_H_
#define INC_RCC_CONFIG_H_

/*Bus Types
 * AHB
 * APB1
 * APB2
 *
 * */
#define AHB  0
#define APB1 1
#define APB2 2

/*Clock systems
 *
 * 0--->HSI
 * 1--->HSE
 * 2--->PLL
 *
 */
#define HSI 0
#define HSE 1
#define PLL 2


/*System Clock Initialization
 *
 * HSE or HSI or PLL
 * */
#define System_Clk HSI



/*
 * Multiplication factor
 *
 *
 *
 */
#define PLL_MUL   1

#endif /* INC_RCC_CONFIG_H_ */
