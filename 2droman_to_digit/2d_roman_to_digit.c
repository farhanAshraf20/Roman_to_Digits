#include<stdio.h>  
#include<string.h>
int main(){      
int i=0,j=0;   
char roman[4];
char arr[10][5]={"I","II","III","IV","V","VI","VII","VIII","IX","X"};  
printf("Please give input I to X : ");
scanf("%s",roman);
//printf("\n roman = %s\n",roman);
for(i=0;i<10;i++){   
    //char *temp;
    //temp = arr[i];
    char temp[5];
    strcpy(temp , arr[i]);
   // printf("Output : %s\n",temp);
    if(strcmp(roman, temp) == 0)
    {
       printf("OUTPUT : %s = %d\n",arr[i],(i+1));
    }

   //printf("arr[%d] = %s\n",i,arr[i]);    
}    
return 0;  
}    
