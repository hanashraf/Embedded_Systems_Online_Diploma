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
#define GPIOA_ODR      *(volatile uint32_t *)(GPIOA_BASE+0x0C)     //Port output data register

#define RCC_BASE 		0x40021000                                 //Reset and clock control (RCC)
#define RCC_APB2ENP 	*(volatile uint32_t *)(RCC_BASE+0x18)      //APB2 peripheral clock enable register

#define EXTI_BASE		0x40010400                                 //External interrupt/event controller (EXTI)
#define EXTI_IMR		*(volatile uint32_t *)(EXTI_BASE+0x00)     //Interrupt mask register
#define EXTI_RTSR		*(volatile uint32_t *)(EXTI_BASE+0x08)     //Rising trigger selection register
#define EXTI_PR			*(volatile uint32_t *)(EXTI_BASE+0x14)     //Pending register

#define AFIO_BASE		0x40010000                                 //Alternate function I/O and debug configuration
#define AFIO_EXTICR1	*(volatile uint32_t *)(AFIO_BASE+0x08)     //External interrupt configuration register 1

#define NVIC_EXTIE0		*(volatile uint32_t *)(0xE000E100)         //NVIC CPU Cortex M3


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
	RCC_APB2ENP |= (1<<0);
	/*
	Bit 0 AFIOEN: Alternate function IO clock enable
	Set and cleared by software.
	0: Alternate Function IO clock disabled
	1: Alternate Function IO clock enabled
	*/
}

void GPIO_init()
{
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0X00200000;
	/*
	In input mode (MODE[1:0]=00):
	00: Analog mode
	01: Floating input (reset state)
	10: Input with pull-up / pull-down
	11: Reserved
	*/
}
int main(void)
{
	clock_init();
	GPIO_init();

	AFIO_EXTICR1 = 0X0;                   //Select portA for EXTI0
	EXTI_RTSR |= (1<<0);                  //Rising trigger enabled
	EXTI_IMR |= (1<<0);                   //Enable Mask EXT0

	NVIC_EXTIE0 |= (1<<6);                //Enable NVIC IRQ 6 (EXTI0)

	while(1);
}
	void EXTI0_IRQHandler (void)
{
	GPIOA_ODR ^=(1<<13);                 //Toggling LED
	EXTI_PR	|= (1<<0);                   //Clear EXTI0 pending request
}
