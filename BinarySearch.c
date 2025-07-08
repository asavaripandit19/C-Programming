#include<stdio.h>
int main()
{
    int i,j,n,low=0,a[100];
 
    int flag=0,key,mid;
    int high;

    printf("Enter size: ");
    scanf("%d",&n);
    high=n-1;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter key = \n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);
            }
        }
    }
    while(low<=high)
    {
         mid=(low+high)/2;

        if(a[mid]==key)
        {
            flag=1;
            break;

        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag==1)
        printf("Found");
    else
        printf("Not found");

        return 0;
}