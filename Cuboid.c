#include<stdio.h>
int main()
{
    float area,vol,l,b,h;
    printf("Enter Length: ");
    scanf("%f",&l);
    printf("Enter Breath: ");
    scanf("%f",&b);
    printf("Enter Height: ");
    scanf("%f",&h);

    vol=l*b*h;
    area=2*(l*b + l*h + b*h);

    printf("Volune of Cuboid: %.2f",vol);
    printf("\nSurface area of Cuboid: %.2f",area);

    return 0;


}