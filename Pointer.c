#include<stdio.h>
int main()
{
    int a;
    int *p;

    printf("Enter a number: ");
    scanf("%d",&a);

    p=&a;
    printf("Number is %d",*p);

    return 0;
}