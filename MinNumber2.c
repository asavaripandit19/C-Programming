#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);

    (a<b)? printf("%d is Min",a): printf("%d is Min ",b);
    return 0;
}