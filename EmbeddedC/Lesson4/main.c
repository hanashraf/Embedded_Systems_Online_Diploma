/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Hana Ashraf
 * @brief          : Lab3
 ******************************************************************************/

typedef volatile unsigned long vul64_t ;

#define SYSCTL_RCGC2_R  (*((vul64_t*)(0x400FE108)))
#define GPIO_PORTF_DIR_R  (*((vul64_t*)(0x40025400)))
#define GPIO_PORTF_DEN_R  (*((vul64_t*)(0x4002551C)))
#define GPIO_PORTF_DATA_R  (*((vul64_t*)(0x400253FC)))

int main(void)
{
	vul64_t delay_count ;
	SYSCTL_RCGC2_R = 0x20 ;
	
	for(delay_count=0 ; delay_count< 200 ; delay_count++ ) ; //dummy delay
	
	GPIO_PORTF_DIR_R |= 1 << 3 ; // set pin 3 in port F 
	GPIO_PORTF_DEN_R |= 1 << 3 ;
	
	while(1)
	{
		GPIO_PORTF_DATA_R |= 1 << 3 ;
		for(delay_count=0 ; delay_count< 200000 ; delay_count++ ) ; //dummy delay
		GPIO_PORTF_DATA_R &= ~(1 << 3) ;
		for(delay_count=0 ; delay_count< 200000 ; delay_count++ ) ; //dummy delay
	}
	return 0;
}