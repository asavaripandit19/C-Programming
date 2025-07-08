#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\n Odd numbers 1 to %d",n);
    for(i=1;i<=n;i++)
    {

        if(i&1)
        {
        printf("\n %d",i);
        count++;
        }
    }
    printf("\nTotal odd no 1 to %d=%d",n,count);
    return 0;
}