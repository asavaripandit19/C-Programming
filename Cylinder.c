#include<stdio.h>
int main()
{
    float r,h;
    float area,volume,pi=3.14;

    printf("Enter height of cylinder (in cm) : ");
    scanf("%f",&h);
    printf("Enter radius of cylinder (in cm) : ");
    scanf("%f",&r);

    area= 2*pi*r*r + 2*pi*r*h;
    volume=pi*r*r*h;

    printf("\nSurface Area of Cylinder %.2f sq.cm ",area);
    printf("\nVolume of Cylinder %.2f ",volume);

     return 0;

}