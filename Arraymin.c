#include<stdio.h>
int main()
{
    int n,i,a[100],min;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);

    for(i=0;i<n; i++)
     scanf("%d",&a[i]);
     min=a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("Min is %d ",min);

    return 0;

}