/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Hana Ashraf
 * @brief          : Main program body

 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define GPIOA_BASE 	   0x40010800
#define GPIOA_CRH      *(volatile uint32_t *)(GPIOA_BASE+0x04)     //Port configuration register high
#define GPIOA_CRL      *(volatile uint32_t *)(GPIOA_BASE+0x00)     //Port configuration register low
#define GPIOA_ODR      *(volatile uint32_t *)(GPIOA_BASE+0x0C)     //Port output data register
#define GPIOA_IDR      *(volatile uint32_t *)(GPIOA_BASE+0x08)     //Port input data register

#define GPIOB_BASE 	   0x40010C00
#define GPIOB_CRH      *(volatile uint32_t *)(GPIOB_BASE+0x04)     //Port configuration register high
#define GPIOB_CRL      *(volatile uint32_t *)(GPIOB_BASE+0x00)     //Port configuration register low
#define GPIOB_ODR      *(volatile uint32_t *)(GPIOB_BASE+0x0C)     //Port output data register
#define GPIOB_IDR      *(volatile uint32_t *)(GPIOB_BASE+0x08)     //Port input data register

#define RCC_BASE 		0x40021000                                 //Reset and clock control (RCC)
#define RCC_APB2ENP 	*(volatile uint32_t *)(RCC_BASE+0x18)      //APB2 peripheral clock enable register

/************************************************************************************************************/

void clock_init()
{
	RCC_APB2ENP |= (1<<2);
	/*
	Bit 2 IOPAEN: IO port A clock enable
	Set and cleared by software.
	0: IO port A clock disabled
	1: IO port A clock enabled
	 */
	RCC_APB2ENP |= (1<<3);
	/*
	Bit 3 IOPAEN: IO port B clock enable
	Set and cleared by software.
	0: IO port A clock disabled
	1: IO port A clock enabled
	 */
}

void GPIO_init()
{
	GPIOA_CRL = 0;
	GPIOA_CRH = 0;
	GPIOB_CRL = 0;
	GPIOB_CRH = 0;
	//PortA1  (Input high impedence)
	GPIOA_CRL &= 0xFFFFFF0F;
	GPIOA_CRL |= 0x00000040;
	//PortA13 (Input high impedence)
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00400000;
	//PortB1  (Output push-pull)
	GPIOB_CRL &= 0xFFFFFF0F;
	GPIOB_CRL |= 0x00000010;
	//PortB13 (Output push-pull)
	GPIOB_CRH &= 0xFF0FFFFF;
	GPIOB_CRH |= 0x00100000;
}
void wait(void)
{
	int y = 1000;
	for (int x=1; x<y ; x++)
		y--;
}
int main(void)
{
	clock_init();
	GPIO_init();
	while(1)
	{
		//simple press pull up
		if((GPIOA_IDR &= 0x00000002)==0)
		{
			GPIOB_ODR ^= (1<<1);
			while((GPIOA_IDR &= 0x00000002)==0);
		}
		//Multi-press pull down
		if((GPIOA_IDR &= 0x00002000)==1)
		{
			GPIOB_ODR ^= (1<<13);
		}
		wait();
	}
}

