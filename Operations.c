#include<stdio.h>
int main()
{
    int x,y,ch,num;
    

    printf("Enter x and y :");
    scanf("%d%d",&x,&y);

    printf("\n Select below opetions: ");
     printf("\n1.Equality ");
     printf("\n2.Less than ");
     printf("\n3.Remainder and Quotient  ");
     printf("\n4.Range ");
     printf("\n5.Swap ");

     printf("\nSelect your choice 1-5: ");
     scanf("%d",&ch);
A

     switch(ch)
     {
        case 1:if(x==y)
                {
                    printf("\n %d is equal to %d",x,y);
                }
                else
                {
                     printf("\n %d is not equal to %d",x,y);
                }
                break;
        case 2:if(x>y)
                {
                    printf("\n %d is larger than %d",x,y);
                }
                else
                {
                    printf("\n %d is smaller than %d",x,y);
                }
                break;
        case 3: if(y != 0) 
                {
                    printf("Quotient = %d\n", x / y);
                  printf("Remainder = %d\n", x % y);
                } 
                else 
                {
                     printf("\n Division by zero is not allowed");
                 }
                break;
        case 4: printf("Enter a number to check range: ");
                scanf("%d", &num);
                 if((num >= x && num <= y) || (num >= y && num <= x))
                 printf("Number lies between %d and %d ",x,y);
                   else
                   printf("Number is out of range\n");
                 break;
        case 5: x=x+y-(y=x);
                 printf("After swapping x = %d, y = %d\n", x, y);
                 break;
        default:printf("INVALID CHOICE!!");
 }
 return 0;

}