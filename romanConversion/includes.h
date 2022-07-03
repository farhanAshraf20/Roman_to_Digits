#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*********************************************************************
Roman numeral (n)	Decimal value (v)
	I			1
	IV			4
	V			5
	IX			9
	X			10
	XL			40
	L			50
	XC			90
	C			100
	CD			400
	D			500
	CM			900
	M			1000
	
	rules
	
	The letters I, X, C can be repeated thrice in succession.
	If a lower value digit is written to the left of a higher value digit, it is subtracted.
	If a lower value digit is written to the right of a higher value digit, it is added.
	Only I, X, and C can be used as subtractive numerals.
	The symbols V, L, D are never repeated in a Roman number. 
	This is because ‘VV’ would give you the value of 10 which is already represented by the symbol X. 
	In the same fashion, ‘LL’ would already be equal to C and ‘DD’ to M.
	
*****************************************************************************/
char fix_letter[]="IVXLCDM";
int fix_roman_no[] = {1,5,10,50,100,500,1000};


int function_check(char input);



