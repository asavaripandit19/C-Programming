#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter 1st side length of triangle(in cm): ");
    scanf("%d",&s1);
     printf("Enter 2st side length of triangle(in cm): ");
    scanf("%d",&s2);
     printf("Enter 3rd side length of triangle(in cm): ");
    scanf("%d",&s3);

    if((s1+s2>s3) && (s2+s3>s1) && (s3+s1>s2))
    {
        printf("Triangle is valid");
    }
    else
     {
        printf("Triangle is not valid");
    }
    return 0;
}