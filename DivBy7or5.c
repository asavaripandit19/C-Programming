#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%5==0 && n%7==0)
    {
        if(n%5==0)
        {
            printf("%d divisible by 5",n);

        }
        if(n%7==0)
        {
            printf("\n%d divisible by 7",n);

        }
    }
    else
    {
        printf("%d is not divisible by 5 or 7",n);
    }
}