#include<stdio.h>
int main()
{
    int a[100],*p,i,n;
    p=&a[0];

    printf("Enter a sixe: ");
    scanf("%d",&n);

    printf("Enter a elements: ");
    for(i=0;i<n;i++)
     scanf("%d",&p[i]);
    
    printf("Given data \n");

    for(i=0;i<n;i++)
    printf("\t %d",p[i]);

}