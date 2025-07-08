#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("\nGiven data: ");
    for(i=0; i<n; i++)
         printf("\t %d",a[i]);

         return 0;
}