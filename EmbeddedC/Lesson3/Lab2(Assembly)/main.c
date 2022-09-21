/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Hana Ashraf
 * @brief          : Toggling LED
 ******************************************************************************/

typedef volatile unsigned int vuint32_t ;

#include <stdint.h>

#define RCC_Base 0x40021000
#define	GPIOA_Base 0x40010800

#define GPIOA_CRH *(volatile uint32_t *)(GPIOA_Base+ 0x04)
#define GPIOA_ODR *(volatile uint32_t *)(GPIOA_Base+ 0x0C)
#define RCC_APB2ENR *(volatile uint32_t *)(RCC_Base+ 0x18)

#define RCC_IOPAEN (1<<2)
#define GPIOA13 (1UL<<13)

typedef union
{
	vuint32_t   all_fields;
	struct
	{
		vuint32_t     reserved:13 ;
		vuint32_t     P_13:1 ;
	}Pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_Base+ 0x0C);

int main(void)
{
	RCC_APB2ENR = RCC_IOPAEN;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

	while(1)
	{
		R_ODR->Pin.P_13 = 1;
		for(int i = 0; i< 5000; i++);//arbitrary delay
		R_ODR->Pin.P_13 = 0;
		for(int i = 0; i< 5000; i++);//arbitrary delay

	}
	return 0;
}
