#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter a numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    b=(a>b)?a:b;
    b=(c>b)?c:b;

    
    printf("Max is %d",b);

    
    return 0;
}