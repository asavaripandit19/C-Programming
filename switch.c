#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

     printf("\na1.Addition ");
    printf("\n 2.Substraction ");
    printf("\n 3.Multipication ");
    printf("\n 4.Division ");

    printf("\n Enter a choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("Addition %d",(a+b));
                break;
         case 2: printf("Substraction %d",(a-b));
                break;
         case 3: printf("Multipilcation %d",(a*b));
                break;
         case 4: printf("Division %d",(a/b));
                break;

    }
   

    return 0;

}