#include<stdio.h>
int main()
{
    int a,b;
    char op;

    printf("Enter any two numbers:  ");
    scanf("%d%c%d",&a,&op,&b);

    switch(op)
    {
        case '+': printf(" %d + %d = %d ", a,b,(a+b));
                break;
         case '-': printf(" %d - %d = %d " ,a,b,(a-b));
                break;
          case '*': printf(" %d * %d = %d ", a,b,(a*b));
                break;
           case '/': printf(" %d / %d = %d ", a,b,(a/b));
                break;
            
                default: printf("Invalid operater");
    }
    return 0;

}
