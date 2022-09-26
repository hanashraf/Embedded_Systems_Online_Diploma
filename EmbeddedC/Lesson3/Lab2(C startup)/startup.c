/* startup.c
By : Hana Ashraf
*/

#include <stdint.h>

extern void Reset_Handler(void);
extern int main(void);

extern uint8_t stack_top;
extern uint8_t  _E_TEXT;
extern uint8_t  _S_DATA;
extern uint8_t  _E_DATA;
extern uint8_t  _S_BSS;
extern uint8_t  _E_BSS;

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

void NMI_Handler()__attribute__((weak,alias ("Default_Handler")));;
void H_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;
void MM_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;
void Bus_fault()__attribute__((weak,alias ("Default_Handler")));;
void Usage_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;

uint32_t Vectors[] __attribute__((section(".vectors")))={
(uint32_t)	   &stack_top,
(uint32_t)         &Reset_Handler,
(uint32_t)         &NMI_Handler,
(uint32_t)         &H_fault_Handler,
(uint32_t)         &MM_fault_Handler,
(uint32_t)         &Bus_fault,
(uint32_t)         &Usage_fault_Handler
};







 


 

 
 
 










