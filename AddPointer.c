#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Addition is %d",*p+*q);
    return 0;
}


