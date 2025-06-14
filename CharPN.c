#include<stdio.h>
int main()
{
    char c;
    printf("Enter any charater: ");
    scanf("%c",&c);
    printf("The Previous Character is :%c",c-1);
    printf("\nThe Next Character is :%c",c+1);
    return 0;
    
}