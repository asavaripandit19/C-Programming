#include<stdio.h>
int main()
{
    int i,n,rev=0,temp;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(rev==temp)
    {
        printf("\n Palindrome Number");
    }
    else
    {
        printf("\n Not Palindrome Number");
    }
    return 0;
}