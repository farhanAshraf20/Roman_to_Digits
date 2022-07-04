#include "headers.h"

char fix_letter[];
int fix_roman_no[];

int count_I=0, count_X=0, count_C=0,count_V=0,count_L=0,count_D=0;
int sum = 0;

int check_num(void)
{
    for(int i=0;i<size;i++)
        {
            //input_char_by_char = input[i];
            input_char_by_char = fun_input[i];

            switch(input_char_by_char)
            {
                case 'I':
                {
                    count_I++;
                    sum+=1;
                    fix_roman_no[6]=1;
                    //printf("\nvalue of fix_roman_no :%d\n",fix_roman_no[6]);
                    break;
                }
                case 'V':
                {
                    count_V++;

                    if(fix_roman_no[6]>=5)
                    {
                        sum+=5;
                        fix_roman_no[6]=5;
                    }
                    else if(sum == 1){
                        sum=5-sum;    
                    }
                    else
                    {
                        count_I=count_I+2;
                    }

                break;
                }
                case 'X':
                {
                    count_X++;
                    if(fix_roman_no[6]>=10)
                    {
                        sum+=10;
                        fix_roman_no[6]=10;
                    }
                    else if(sum == 1)
                    {
                        sum=10-sum;
                    }
                    else
                    {
                        count_X=count_X+2;
                    }

                break;
                }
                case 'L':
                {
                    count_L++;
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
                    count_D++;
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
}