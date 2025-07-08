#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%f%f%f",&a,&b,&c);

    printf("Maxinum number is %.2f",fmax(a,fmax(b,c)));

    return 0;
}