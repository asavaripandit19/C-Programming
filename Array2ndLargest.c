#include<stdio.h>
int main()
{
    int n,i,First,Second,a[100];
    First=Second=a[0];

    printf("Enter Array Size: ");
    scanf("%d" ,&n);

    printf("Enter elements: " );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


      for(i=0;i<n;i++)
    {
        if(a[i]>First)
        {
            First=a[i];
        }
       
    }
     for(i=0;i<n;i++)
    {
        if(a[i] != First)
        {
            if(a[i]>Second)
            {
                 Second=a[i];
            }
        }
       
    }
    printf("Second largest no %d",Second);
    return 0;
}