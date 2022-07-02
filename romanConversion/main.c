#include"includes.h"

int main()
{
	char *input;
	char *temp, *first;
	char *letterPtr;
	char k;

	int size=0;
	int i=0, num;
	int flag =1;
	int sum = 0;
	int p=10000;


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
					//printf("%c ",input[i]);
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
			printf("\nValid input \n");
			//code logic
			for(i=0;i<size;i++){
        		k=input[i];
        		
        		
			switch(k){
			    case 'I':
				{
				    sum+=1;
				    p=1;
				    break;
				}
			    case 'V':
			    {
				if(p>=5){
				    sum+=5;
				    p=5;
				}
				else{
				    sum=5-sum;
				    
				}
				break;
			    }
			    case 'X':
			    {
				if(p>=10){
				    sum+=10;
				    p=10;
				}
				else{
				    sum=10-sum;
				}
				break;
			    }
			    case 'L':
			    {
				if(p>=50){
				    sum+=50;
				    p=50;
				}
				else{
				    sum=50-sum;
				}
				break;
			    }
			    case 'C':
			    {
				if(p>=100){
				    sum+=100;
				    p=100;
				}
				else{
				    sum=100-sum;
				}
				break;
			    }
			    case 'D':
			    {
				if(p>=500){
				    sum+=500;
				    p=500;
				}
				else{
				    sum=500-sum;
				}
				break;
			    }
			    case 'M':
			    {
				if(p>=1000){
				    sum+=1000;
				    p=1000;
				}
				else{
				    sum=1000-sum;
				}
				break;
			    }

			}
		    }
		    printf("\nInterger is : %d\n",sum);
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

		//printf("Interger is : %d\n", fix_roman_no[num]);
		

	}

	else
	{
	
	
	
			
		
	}

	
	return 0;
}
