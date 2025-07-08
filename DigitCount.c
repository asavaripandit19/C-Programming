#include<stdio.h>
int main()
{
    int count=0,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        
        n=n/10;
        count++;
        
    }
    printf("Count of Digit is %d",count);
    return 0;
}