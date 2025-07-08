#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        cnt++;
    }
    (cnt==0)?printf("Prime Number"):printf("Not Prime Number");
    
    return 0;
}