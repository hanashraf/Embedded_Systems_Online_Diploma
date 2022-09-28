/* startup.c
By : Hana Ashraf
*/

#include <stdint.h>
typedef volatile unsigned int vuint32_t ;

extern void Reset_Handler(void);
extern void main(void);

static vuint32_t stack_top[256];

extern uint8_t  _E_TEXT;
extern uint8_t  _S_DATA;
extern uint8_t  _E_DATA;
extern uint8_t  _S_BSS;
extern uint8_t  _E_BSS;

void NMI_Handler()__attribute__((weak,alias ("Default_Handler")));;
void H_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;

void ( * global_pointer_to_function [] ) () __attribute__((section(".vectors")))=
{
	(void (*) ()) ((unsigned long )stack_top+sizeof(stack_top)),
	&Reset_Handler,  
	&NMI_Handler,     
	&H_fault_Handler, 
};

void Default_Handler(void)
{
	Reset_Handler();
}

void Reset_Handler(void)
{
	//Copying data from FLASH to SRAM
	uint32_t DATA_size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA ;
	uint8_t* P_src = (uint8_t*)&_E_TEXT ;
	uint8_t* P_dst = (uint8_t*)&_S_DATA ;
	uint32_t i;
	for(i=0;i < DATA_size ;i++)
	{
		*((uint8_t*)P_dst++) = *((uint8_t*)P_src++) ;
	}
	
	//Initializing .bss to zeros
	uint32_t bss_size = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS ;
	P_dst = (uint8_t*)&_S_BSS ;
	for(i=0;i < bss_size ;i++)
	{
		*((uint8_t*)P_dst++) = (uint8_t)0 ;
	}
	//Jumping to main
	main();
}








 


 

 
 
 










