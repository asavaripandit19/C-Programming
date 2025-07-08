#include<stdio.h>
int main()
{
    int n,i=2,fact=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}