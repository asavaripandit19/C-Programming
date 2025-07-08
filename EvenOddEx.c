#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d",&num);



  
    if(num<0)
    {
        printf("Enter positive number");
    }
    else if(num%2==0)
    {
        printf("%d Even",num);
    }
    else
    {
        printf("%d Odd",num);
    }
    
  
   
    return 0;
}