#include"includes.h"

int main()
{
	char *input;
	char *temp, *first;
	char *letterPtr;
	char input_char_by_char;

	int size=0;
	int i=0;
	int flag =1;
	int sum = 0;
	int count_I=0, count_X=0, count_C=0;

	printf("Enter a roman No. (b/w I to M) : ");
	scanf("%s", input);

	first = input;
	temp = first;

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

		// for(int i=0; i<size;i++)
		// {
		// 	for(int j=0;j < 7;j++)
		// 	{
		// 		if(fix_letter[j] == input[i])
		// 		{
		// 			switch (input[i])
		// 			{

		// 			}
		// 			flag=0;
		// 			//printf("%c ",input[i]);
		// 			break;
		// 		}
		// 		else
		// 		{
		// 			flag=1;
		// 		}
		// 	}	
		// }
		///*********************************
		for(i=0;i<size;i++)
			{
        		input_char_by_char = input[i];
        
				switch(input_char_by_char)
				{
					case 'I':
					{
						count_I++;
						sum+=1;
						fix_roman_no[6]=1;
						break;
					}
					case 'V':
					{
					if(fix_roman_no[6]>=5){
						sum+=5;
						fix_roman_no[6]=5;
					}
					else{
						sum=5-sum;
						
					}
					break;
					}
					case 'X':
					{
						 count_X++;
					if(fix_roman_no[6]>=10){
						sum+=10;
						fix_roman_no[6]=10;
					}
					else{
						sum=10-sum;
					}
					break;
					}
					case 'L':
					{
					if(fix_roman_no[6]>=50){
						sum+=50;
						fix_roman_no[6]=50;
					}
					else{
						sum=50-sum;
					}
					break;
					}
					case 'C':
					{
						 count_C++;
					if(fix_roman_no[6]>=100){
						sum+=100;
						fix_roman_no[6]=100;
					}
					else{
						sum=100-sum;
					}
					break;
					}
					case 'D':
					{
					if(fix_roman_no[6]>=500){
						sum+=500;
						fix_roman_no[6]=500;
					}
					else{
						sum=500-sum;
					}
					break;
					}
					case 'M':
					{
					if(fix_roman_no[6]>=1000){
						sum+=1000;
						fix_roman_no[6]=1000;
					}
					else{
						sum=1000-sum;
					}
					break;
					}
					default :
					{
						printf("\nInvalid entry\n");
						break;
					}

				}
		    }
			if(( count_I <= 3 ) && ( count_C <= 3 ) && ( count_X <=3 ))
			{
				printf("\nInterger is : %d\n",sum);
			}
			else
			{
				printf("\ninvalid input\n");
			}
		    

		///***********************************
		//i = 0;
		while(*letterPtr != '\0')
		{
			// if(*letterPtr == *temp)
			// {
			// 	num = i;
			// 	break;
			// }

			//i++;
			letterPtr++;
		}

	return 0;
}


// int function_check(char input)
// {
// 	return 0;
// }