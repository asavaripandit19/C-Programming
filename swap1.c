#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    a=a+b-(b=a);

    printf("a=%d",a);
    printf("\nb=%d",b);
    return 0;

}