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
	
*****************************************************************************/


char fix_letter[]="IVXLCDM";
int fix_roman_no[] = {1,5,10,50,100,500,1000};



int main()
{
	char *input;
	char *temp, *first;
	char *letterPtr;

	int size=0;
	int i=0, num;


	first = input;
	temp = first;


	printf("Enter a roman No. (b/w I to M) : ");
	scanf("%s", input);

	// printf("your input : %s", input);
	
	// printf("\n%s\n",temp);
	
	// temp = first;
	
	
	while(*`temp != '\0')
	{
		size += sizeof(*temp);
		temp++;
	}
	
	printf("size of your input is : %d\n", size);
	
	temp = first;
	letterPtr = fix_letter;

	if(size == 1)
	{
		i = 0;
		while(*letterPtr != '\0')
		{
			if(*letterPtr == *temp)
			{
				num = i;
				break;
			}

			i++;
			letterPtr++;
		}

		printf("Interger is : %d\n", fix_roman_no[num]);

	}

	else{
		printf("Invalid entry\n");
	}

	
	return 0;
}
	

