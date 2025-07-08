#include<stdio.h>
int main()
{
    int days;
    int fine=0;

    printf( "Enter no of days: ");
    scanf("%d",&days);

    if(days<=0)
    {
        printf("No fine.Book is return in time");
    }
    else if(days<=5)
    {
        fine=days*1;
        printf("Fine is Rs.%d",fine);
    }
     else if(days<=10)
    {
        fine=days*2;
        printf("Fine is Rs.%d",fine);
    }
     else 
    {
        fine=days*5;
        printf("Fine is Rs.%d",fine);
    }
    return 0;

}