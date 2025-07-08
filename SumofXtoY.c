#include<stdio.h>
int main()
{
    int x,y,i,sum=0,temp;
    printf("Enter starting number: ");
    scanf("%d",&x);
     printf("Enter Ending number: ");
    scanf("%d",&y);

    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    
    for(i=x;i<=y;i++)
    {
       
        // printf("\n %d",i);
         sum=sum+i;
    }
    printf("\n Sum=%d",sum);
    return 0;
}