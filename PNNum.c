#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if(num>0)
        printf("%d is positive number",num);
    else
         printf("%d is Negative number",num);

         return 0;
}