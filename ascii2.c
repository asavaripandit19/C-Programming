#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter Anything: ");
    scanf("%c",&ch);

    if(isalpha(ch))
     printf("Alphabet");
    else if(isdigit(ch))
     printf("Digit");
    else if
     printf("Special symbol");// for special character ispunct

     return 0;

}