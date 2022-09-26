/* linker script CortexM3
By : Hana Ashraf
*/




MEMORY
{
 	FLASH(RX) : ORIGIN = 0X8000000    , LENGTH = 128k
	SRAM(RWX)  : ORIGIN = 0X20000000 , LENGTH =	20k
}

SECTIONS
{
	
	.text : {
		*(.vectors*) 
		*(.text*)
		*(.rodata*)
		. = ALIGN(4);
		_E_TEXT = .;
	} > FLASH
	.data : {
		_S_DATA = .;
		*(.data*)
		. = ALIGN(4);
		_E_DATA = .;
	}> SRAM AT> FLASH
	.bss  : {
		_S_BSS = .;
		*(.bss*)
		. = ALIGN(4);
		_E_BSS = .;
	} > SRAM
	. = . + 0x2000;
	stack_top = .;
}