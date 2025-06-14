#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2!=1)
        printf("Even No");
    else
        printf("Odd No");
    return 0;
}