#include<stdio.h>
int main()
{
    int a[100],max ,i,n;

    printf("How many elements you want: ");
    scanf("%d",&n);

    for(i=0;i<n; i++)
     scanf("%d",&a[i]);
     max=a[0];

    for(i=0;i<n;i++)
    {
        max=(max<a[i])?a[i]:max;

    }
    printf("Max is %d ",max);

    return 0;
}