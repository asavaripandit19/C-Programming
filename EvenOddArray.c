#include<stdio.h>
int main()
{
    int n,i,a[100],ea[100],e=0,oa[100],o=0;
    

    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            oa[o]=a[i];
            o++;
        }
        if(a[i]%2==0)
        {
           ea[e]=a[i];
            e++; 
        }
    }
    printf("\n Even array : \n");
    for(i=0;i<e;i++)
        printf("\t%d",ea[i]);
    
    printf("\n Odd array :\n");
    for(i=0;i<o;i++)
        printf("\t%d",oa[i]);

    return 0;
}