#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter any Character: ");
    scanf("%c",&x);
    x = tolower(x);

    switch(x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
       
             printf(" Vowel");
             break;
        default: printf("Character is Consonant");
    }
    return 0;
}