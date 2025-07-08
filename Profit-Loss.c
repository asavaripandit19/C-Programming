#include<stdio.h>
int main()
{
    float cp,sp,amt;
    printf("Enter Selling price: ");
    scanf("%f",&sp);
    printf("Enter Cost price: ");
    scanf("%f",&cp);

    if(sp>cp)
    {
        amt=sp-cp;
        printf("Profit=%.2f",amt);
        
    }
    
    else if(cp>sp)
    {
         amt=cp-sp;
         printf("Loss=%.2f",amt);
       
    }
    
     else
     {
       printf("No profit no loss");
    }
    return 0;
}