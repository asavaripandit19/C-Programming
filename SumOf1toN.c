#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\n Sum of 1 To %d is %d",n,sum);

    return 0;
}
