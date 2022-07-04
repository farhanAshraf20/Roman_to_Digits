#include"includes.h"
//char *far;
//char input_char_by_char;
//int size=0;
// int i=0;
 int flag =1;
// int sum = 0;
// int count_I=0, count_X=0, count_C=0,count_V=0,count_L=0,count_D=0;

int main()
{
	char *input;
	char *temp, *first;
	//char *letterPtr;
	
	printf("Enter a roman No. (b/w I to M) : ");
	scanf("%s", input);

	first = input;
	far=input;
	temp = first;

	// printf("your input : %s", input);
	
	// printf("\n%s\n",temp);
	
	// temp = first;
	
	
	while(*temp != '\0')
	{
		size += sizeof(*temp);
		temp++;
	}
	
	//printf("size of your input is : %d\n", size);
	
	//temp = first;

		for(int i=0; i<size;i++)
		{
			for(int j=0;j < 7;j++)
			{
				//if(fix_letter[j] == input[i])
				if(fix_letter[j] == input[i])
				{
					flag=0;
					//printf("%c ",input[i]);
					break;
				}
				else
				{
					flag=1;
				}
			}	
		}
		if (flag == 0 )
		{
			function_check();
		}
		else
		{
			//printf("\nINPUT !!!!! : %s\n",first);
			printf("\ninvalid input\n");
		}

		///***********************************

	return 0;
}
