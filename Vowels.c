#include<stdio.h>
int main()
{
    char x;

    printf("Enter any character: ");
    scanf("%c",&x);

    switch(x)
    {
        case 'a': printf(" %c is Vowel",x);
                break;
         case 'e': printf(" %c is Vowel",x);
                break;
          case 'i': printf(" %c is Vowel",x);
                break;
         case 'o': printf(" %c is Vowel",x);
                break;
           case 'u': printf(" %c is Vowel",x);
                break;
            default: printf("%c is consonant",x);
    }
    return 0;
}