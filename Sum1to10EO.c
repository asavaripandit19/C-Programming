#include<stdio.h>
int main()
{
    int i,sumEven=0,sumOdd=0;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
         sumEven=sumEven+i;
        else
        sumOdd=sumOdd+i;
    }
    printf("\n Sum of Even :%d",sumEven);
     printf("\n Sum of Odd :%d",sumOdd);

  
}
   
