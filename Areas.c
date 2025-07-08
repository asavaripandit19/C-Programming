#include<stdio.h>
int main()
{
    int ch;
    float r,pi=3.14,area,Circumference,volume;
    printf("Enter radius: ");
    scanf("%f",&r);

    printf("\n1.Area of circle");
    printf("\n2.Circumference of circle");
    printf("\n3.Volume of Sphere");

    printf("\nEnter choice 1,2 & 3 :");
    scanf("%d",&ch);

    
    switch(ch)
    {
        case 1:area=pi*r*r;
                printf("Area of circle is:%.2f",area);
                break;
        case 2:Circumference=2*pi*r;
                printf("Area of circle is:%.2f",Circumference);
                break;
        case 3:volume=(4.0 / 3.0) * pi * r * r * r;
                printf("Area of circle is:%.2f",volume);
                break;
        default: printf("Invalid Choice");
    }
    return 0;
}