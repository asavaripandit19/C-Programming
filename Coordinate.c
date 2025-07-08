#include<stdio.h>
int main()
{
    float x,y;
    printf("\nEnter x coordinate: ");
    scanf("%f",&x);
    printf("\nEnter y coordinate: ");
    scanf("%f",&y);

    if(x==0 && y==0)
    {
        printf("The points lies at the origin.");
    }
    else if(x>0 && y>0)
    {
        printf("The points lies  Qudarant I.");
    }
    else if(x>0 && y<0)
    {
        printf("The points lies  Qudarant IV.");
    }
     else if(x<0 && y<0)
    {
        printf("The points lies  Qudarant III.");
    }
     else if(x<0 && y>0)
    {
        printf("The points lies  Qudarant II.");
    }
    else if(x==0)
    {
        printf("The points lies on Y-axis");
    }
    else if(y==0)
    {
        printf("The points lies on x-axis");
    }

    return 0;

}