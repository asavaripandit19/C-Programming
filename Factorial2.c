#include<stdio.h>
int main()
{
     int n,fact=1;

    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>=2)
    {
        fact =fact*n;
        n--;
    }
     printf("Factorial is %d",fact);
    return 0;
}
