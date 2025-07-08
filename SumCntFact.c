#include<stdio.h>
int main()
{
    int n,i,sum=0,cnt=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            sum=sum+i;
            cnt++;
        }
        i++;
    }
    printf("Sum of factors: %d ",sum);
     printf("\nCount of factors: %d ",cnt);
}