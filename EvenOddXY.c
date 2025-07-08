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
        if(i%2==0)
        {
         sum=sum+i;
        }

    }
     printf("Sum of Even: %d",sum);
     
     sum=0;
      for(i=x;i<=y;i++)
    {
        if(i%2!=0)
        {
         sum=sum+i;
        }

    }
     printf("\n Sum of Odd: %d",sum);
   
}
