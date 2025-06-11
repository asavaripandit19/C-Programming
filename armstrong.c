#include<stdio.h>
int main()
{
    int rem,num,sum=0,temp;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }

  
        if(temp==sum)
        {
            printf("armstrong");
        }
        else
        {
         
            printf("not");
            
        }
    
    return 0;
}