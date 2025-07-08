#include<stdio.h>
int main()
{
    int temp,sum=0,rem,num;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;


    }
    if(temp=sum)
    {
        printf("Number is armstrong ");
    }
    else
     {
        printf("Number is  not armstrong ");
    }
    return 0;

}