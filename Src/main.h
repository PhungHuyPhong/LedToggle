/*
 * main.h
 *
 *  Created on: Feb 7, 2025
 *      Author: phong
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<stdint.h>

#define ADDR_REG_AHB1ENR  ((RCC_AHB1ENR_t*) 0x40023830)
#define ADDR_REG_GPIOD_MODE ((GPIOx_MODER_t*) 0x40020C00)
#define ADDR_REG_GPIOD_ODR ((GPIOx_ODR_t*) 0x40020C14)

#define CLOCK_ENABLE (1)
#define MODE_CONF_OUTPUT (1)
#define PIN_STATE_HIGH (1)
#define DELAY_COUNT (300000UL)
#define PIN_STATE_LOW (0)

typedef struct
{
	uint32_t GPIOAEN	:1;
	uint32_t GPIOBEN	:1;
	uint32_t GPIOCEN	:1;
	uint32_t GPIODEN	:1;
	uint32_t GPIOEEN	:1;
	uint32_t GPIOFEN	:1;
	uint32_t GPIOGEN	:1;
	uint32_t GPIOHEN	:1;
	uint32_t GPIOIEN	:1;
	uint32_t reserved1	:3;
	uint32_t CRCEN		:1;
	uint32_t reserved2	:5;
	uint32_t BKPSPAMEN	:1;
	uint32_t reserved3	:1;
	uint32_t CCMDATARAMEN:1;
	uint32_t DMA1EN		:1;
	uint32_t DMA2EN		:1;
	uint32_t reserved4	:2;
	uint32_t ETHMACEN	:1;
	uint32_t ETHMACTXEN	:1;
	uint32_t ETHMACRXEN	:1;
	uint32_t ETHMACPTPEN:1;
	uint32_t OTGHSEN	:1;
	uint32_t OTGHSULPIEN:1;
	uint32_t reserved5	:1;
}RCC_AHB1ENR_t;

typedef struct
{
	uint32_t ODR0	:1;
	uint32_t ODR1	:1;
	uint32_t ODR2	:1;
	uint32_t ODR3	:1;
	uint32_t ODR4	:1;
	uint32_t ODR5	:1;
	uint32_t ODR6	:1;
	uint32_t ODR7	:1;
	uint32_t ODR8	:1;
	uint32_t ODR9	:1;
	uint32_t ODR10	:1;
	uint32_t ODR11	:1;
	uint32_t ODR12	:1;
	uint32_t ODR13	:1;
	uint32_t ODR14	:1;
	uint32_t ODR15	:1;
	uint32_t reserved:16;
}GPIOx_ODR_t;

typedef struct
{
	uint32_t MODER0	:2;
	uint32_t MODER1	:2;
	uint32_t MODER2	:2;
	uint32_t MODER3	:2;
	uint32_t MODER4	:2;
	uint32_t MODER5	:2;
	uint32_t MODER6	:2;
	uint32_t MODER7	:2;
	uint32_t MODER8	:2;
	uint32_t MODER9	:2;
	uint32_t MODER10:2;
	uint32_t MODER11:2;
	uint32_t MODER12:2;
	uint32_t MODER13:2;
	uint32_t MODER14:2;
	uint32_t MODER15:2;
}GPIOx_MODER_t;


#endif /* MAIN_H_ */
