#include"includes.h"


int main()
{
	char *input;
	char *temp, *first;
	char *letterPtr;

	int size=0;
	int i=0, num;
	int flag =1;


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
				printf("\n Valid input \n");
				//code logic
			}
			else
			{
				printf("\nInvalid entry\n");
			}

	


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

	else
	{
	
			
		
	}

	
	return 0;
}