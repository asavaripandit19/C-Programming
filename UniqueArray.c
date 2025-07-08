#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,key;
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

   

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
         {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                 a[k]=a[k+1];
                 n--;
                 j--;
            }

             
                
        }


    }
   printf("\nUnique Array: ");
   for(i=0;i<n;i++)
   printf("\t%d\t",a[i]);

return 0;

}