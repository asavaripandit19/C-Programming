#include<stdio.h>
int main()
{
    int x,y,result=1,i=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);

    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("\n %d ^ %d = %d ",x,y,result);

    return 0;
}