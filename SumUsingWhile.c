#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=0;
   while(i<=n)
   {
    sum+=i;
    i++;
   }
   printf("\n Sum of 1 to %d is %d",n,sum);
   return 0;
}

