#include<stdio.h>
int main()
{
    int a[100],n,i,j,key;

    printf("Enter a Size: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a any elements: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            break;
        }
    }
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);
    return 0;
}