#include<stdio.h>

int add(int a, int b)
{
   return (a+b);
}
int sub(int a, int b)
{
   return (a-b);
}
int mul(int a, int b)
{
    return (a*b);
}
int div(int a, int b)
{
    return (a/b);
}
int main()
{
    int x,y,ch;

    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    if(ch==5)
       return 0;

   printf("\n 1.Addition \n 2.Substraction\n 3.Multipication \n 4.Division \n 5.EXIT \n Select any One :");
   scanf("%d",&ch);

   switch(ch)
   {
        case 1 : printf("Addition is %d",add(x , y));
                    break;
         case 2 : printf("Substraction is %d",add(x , y));
                    break;
         case 3 : printf("Multipication is %d",add(x , y));
                    break;
         case 4 : printf("Division is %d",add(x , y));
                    break;
        case 5 : return 0;
                break ;
       default : printf("INVALID CHOICE");
       

   }
    return 0;


    
}