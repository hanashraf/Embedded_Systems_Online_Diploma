/* linker script CortexM4
By : Hana Ashraf
*/




MEMORY
{
 	FLASH(RX) : ORIGIN = 0X8000000    , LENGTH = 512M
	SRAM(RWX)  : ORIGIN = 0X20000000 , LENGTH =  512M
}

SECTIONS
{
	
	.text : {
		*(.vectors*) 
		*(.text*)
		*(.rodata*)
		_E_TEXT = .;
	} > FLASH
	.data : {
		_S_DATA = .;
		*(.data*)
		_E_DATA = .;
	}> SRAM AT> FLASH
	.bss  : {
		_S_BSS = .;
		*(.bss*)
		_E_BSS = .;
	} > SRAM
}