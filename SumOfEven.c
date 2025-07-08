#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("Sum 0f Even number:%d",sum);

    return 0;

}