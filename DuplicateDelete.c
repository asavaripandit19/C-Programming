#include<stdio.h>
int main()
{
    int a[100],n,i,j,key;
    printf("Enter Array Size: ");
    scanf("%d" ,&n);

    printf("Enter elements: " );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array is: ");
    for(i=0;i<n;i++)
    printf("\t%d\t",a[i]);

    printf("\nEnter which number want to delete: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
             for(j=i;j<n-1;j++)
             
                a[j]=a[j+1];
                n+-1;
             
                
        }


    }
   for(i=0;i<n;i++)
   printf("\t%d\t",a[i]);

return 0;

}