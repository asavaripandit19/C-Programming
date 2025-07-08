#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    i=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
   printf("Sum of 1 to %d is %d",n,sum);

    return 0;
}