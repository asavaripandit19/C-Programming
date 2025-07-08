#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter an Character: ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        if(islower(ch))
        {
            printf("UpperCase letter:%c ",toupper(ch));
        }
        else if(isupper(ch))
        {
            printf("LowerCase letter:%c ",tolower(ch));
        }
    }
    else
    {
        printf("Invalid input..");
    }
    return 0;
}