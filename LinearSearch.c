#include<stdio.h>
int main()
{
    int n,i,a[100],key,flag=0;
    printf("Enter size: ");
    scanf("%d",&n);

     printf("\n Enter elements: ");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }

    printf("Enter elemtes which you want search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Found");
    else
           printf(" not Found");


}

