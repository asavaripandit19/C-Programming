#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Character: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("UpperCase letter:%c ",ch);
    }
   else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        printf("LowerCase letter:%c ",ch);
    }else
    {
        printf("Invalid input ");
    }
    return 0;
}