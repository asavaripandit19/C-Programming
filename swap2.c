#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("a=%d",a);
    printf("\nb=%d",b);
    return 0;

}