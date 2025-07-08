#include<stdio.h>
int main()
{
    int i,SumEven=0,SumOdd=0;

    for(i=100;i<=200;i++)
    {
        if(i%2==0)
         SumEven=SumEven+i;
        else
         SumOdd=SumOdd+i;
    }
     printf("\n Sum of Even :%d",SumEven);
     printf("\n Sum of Odd :%d",SumOdd);
}