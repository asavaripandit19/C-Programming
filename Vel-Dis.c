#include<stdio.h>
int main()
{
    float a,t,v,u,s;
    printf("Enter acceleration: ");
    scanf("%f",&a);
    printf("Enter Time: ");
    scanf("%f",&t);
    printf("Enter initial velocity: ");
    scanf("%f",&u);

    v=u+a*t;
    s=u*t+0.5*a*t*t;

    printf("Final velocity: %.2f",v);
    printf("\n Distance Travelled: %.2f",s);


}