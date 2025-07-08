#include<stdio.h>
int main()
{
    char x;
    printf("Enter any Character: ");
    scanf("%c",&x);

    switch(x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
             printf("%c is Vowel",x);
             break;
        default: printf("Character is Consonant");
    }
    return 0;
}