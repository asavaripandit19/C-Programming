#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    printf("How many elements you want to enter: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

    // for(i=0;i<n;i++)
    sum=sum+a[i];
   }
    printf("Sum of array is: %d",sum);

    return 0;
}