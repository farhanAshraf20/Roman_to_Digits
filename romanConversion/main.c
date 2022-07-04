#include "headers.h"

//define global vars -- declared in headers.h
int flag = 1;
int size = 0;
char fix_letter[]="IVXLCDM";
int fix_roman_no[] = {1,5,10,50,100,500,1000};



int main()
{
    char *input;
    char *temp, *first;

    //char *letterPtr;

    printf("Enter a roman No. (b/w I to M) : ");
    scanf("%s", input);

    first = input;
    fun_input=input;
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
            check_num();

            if(( count_I <= 3 ) && ( count_C <= 3 ) && ( count_X <=3 )&&(count_V<=1)&&(count_L<=1)&&(count_D<=1))
            {
                printf("\nInterger is : %d\n",sum);
            }
            else
            {
                printf("\ninvalid input\n");
            }
        }

        else
        {
            //printf("\nINPUT !!!!! : %s\n",first);
            printf("\ninvalid input\n");
        }

        ///***********************************

    return 0;
}
