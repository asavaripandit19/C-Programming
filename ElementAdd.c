#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Addition is %d",sum);

    return 0;
}