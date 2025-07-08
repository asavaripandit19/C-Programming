#include<stdio.h>

void accpect(int a[100],int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void display(int a[100],int n)
{
    int i;
    printf("Array elements: \n");
    for(i=0;i<n;i++)
    printf("\t %d",a[i]);
}
int max(int a[100],int n)
{
    int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    max=(max < a[i])?a[i]:max;
    return max;       
    
}
int min(int a[100],int n)
{
    int i,min;
    min=a[0];
    for(i=0;i<n;i++)
    min=(min > a[i])?a[i]:min;
    return min;       
    
}
int sum(int a[100],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
     sum+=a[i];
    return sum;       
    
}
float avg(int a[100],int n)
{
   float avg=0;
   avg=(float)sum(a,n)/n;
   return avg;
    
}
void sort(int a[100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    display(a,n);
}
int LinearSerach(int a[100],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        return 1;
    }
    return 0;
}

int main()
{
    int a[100],n,ch,key;

    printf("Enter size of array: ");
    scanf("%d",&n);

    accpect(a,n);

    while(1)
    {
       
        printf("\n 1.Display array \n 2.Max \n 3.Min \n 4.Sum of array \n 5.Average \n 6.Linear Search \n 7. Sorted array \n 8.EXIT \n Select any one");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:display(a,n);
                    break;
            case 2:printf("\nMax Element of array is : %d ",max(a,n));
                    break;
            case 3:printf("\n Min Element of array is: %d ",min(a,n));
                    break;
            case 4:printf("\n Sum array elements is: %d ",sum(a,n));
                    break;
            case 5:printf("\n Avearage of array elements is: %.2f ",avg(a,n));
                    break;
            case 6:printf("\n Enter key :");
                   scanf("%d",&key);
                   if(LinearSerach(a,n,key))
                        printf("Element Found");
                   else 
                        printf("Element Not Found");
                    break;
            case 7:sort(a,n);
                    break;
            case 8:return 0;
                    break;
            default : printf("\n INVALID CHOICe");
        }

    }

   return 0;

}