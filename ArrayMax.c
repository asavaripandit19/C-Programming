#include<stdio.h>
int main()
{
    int n,i,a[100],max;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);

    for(i=0;i<n; i++)
     scanf("%d",&a[i]);
     max=a[0];

    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("Max is %d ",max);

    return 0;

}