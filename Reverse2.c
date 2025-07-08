#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    printf("Enter number: ");
    scanf("%s",&num);
    strrev(num);
    printf("Reverse No %s",num);
    return 0;
}