#include<stdio.h>
int main()
{
    int n,i,j,a[100],temp;

    printf("Enter Size of array: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                // a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);

            }
        }
    }
    printf("\n Sorted Array= ");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}