#include<stdio.h>
int main()
{
    int n,i,count=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
            count++;
        }
    }
    printf("\n Total even no is:%d ",count);
    return 0;
}