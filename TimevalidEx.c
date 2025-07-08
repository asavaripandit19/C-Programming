#include<stdio.h>
int main()
{
    int h,s,m;

    printf("\nEnter hours: ");
    scanf("%d",&h);
    printf("\nEnter mintus: ");
    scanf("%d",&m);
    printf("\nEnter second: ");
    scanf("%d",&s);

    if(h>=0 && h<24)
    {
        if(m>=0 && m<60 )
        {
            if(s>=0 && s<60 )
            {
                printf("Time is Valid");

            }
            else
            {
                printf("Seconds Invalid");
            }

         }
         else
         {
            printf("Mintus invalid ");
         }
    }
    else
         {
            printf("Time invalid ");
         }

         return 0;

}