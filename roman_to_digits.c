#include"roman_to_digits.h"
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
	
	
	while(*temp != '\0')
	{
		size += sizeof(*temp);
		temp++;
	}
	
	printf("size of input : %d\n", size);
	
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
