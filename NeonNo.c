#include<stdio.h>
int main()
{
    int n,i,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n*n;
    while(temp!=0)
    {
        int rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    if(sum==n)
     printf("Neon number");
    else
     printf(" not Neon number");

     return 0;
}