#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
     for(i=0;i<=n;i++)
    {
      if(i&1)
     {
          sum=sum+i;
     }
   
    }
    printf("Sum of Odd numbers %d ",sum);



    return 0;


}