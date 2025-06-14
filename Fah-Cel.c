#include<stdio.h>
int main()
{
    float f,c,k;

    printf("Enter Tcemperature in Fahrenheit: ");
    scanf("%f",&f);

    c=(5.0/9.0*(f-32));
    k=c+273.15;
    printf("\nFahrenheit to Celsius %.2f\n",c);
    printf("\nFahrenheit to kelvin %.2f\n",k);

    return 0;

}