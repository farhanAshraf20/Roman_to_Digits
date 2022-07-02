#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char fix_letter[]="IVXLCDM";
int fix_roman_no[] = {1,5,10,50,100,500,1000};
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

int digit(char c){
 
    int value=0;
    /*
    
 
    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }
    */
 
    return value;
}



int main()
{
	char *input;
	char *temp, *first;
	char *letterPtr;

	int size=0;
	int i=0, num;
	int flag =1;
	long int number =0;


	first = input;
	temp = first;


	printf("Enter a roman No. (b/w I to M) : ");
	scanf("%s", input);

	// printf("your input : %s", input);
	
	// printf("\n%s\n",temp);
	
	// temp = first;
	
	
	while(*temp != '\0')
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
	
		for(int i=0; i<size;i++)
		{
			for(int j=0;j < 7;j++)
			{
				if(fix_letter[j] == input[i])
				{
					flag=0;
					printf("%c ",input[i]);
					break;
				}
				else
				{
					flag=1;
				}
			}
			
		}
		if(flag == 0)
		{
			i=0;
			while(input[i])
			{
				printf("\n Valid input \n");
				//code logic
				if(digit(input[i]) >= digit(input[i+1]))
				     number = number + digit(input[i]);
				 else{
				     number = number + (digit(input[i+1]) - digit(input[i]));
				     i++;
				 }
				 i++;
			}
			
			printf("Its decimal value is : %ld",number);
		}
		else
		{
			printf("\nInvalid entry\n");
		}
		
	}

	
	return 0;
}
	

