#include<stdio.h>
int main()
{
    float a,b,AM,HM;
    printf("Enter First number: ");
    scanf("%f",&a);
    printf("Enter Second number: ");
    scanf("%f",&b);

    AM=(a+b)/2;
    HM=2*a*b/(a+b);

    printf("Arithmatic mean : %.2f",AM);
    printf("\nHarmonic mean : %.2f",HM);

    return 0;
}