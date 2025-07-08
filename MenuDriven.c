#include<stdio.h>
int main()
{
    int i,n,j,flag,a[100],ch,max,min,sum,key;
    float avg;

   
    printf("Enter array size: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Enter valid number!!");
        return 0;
    }
    


    printf("Enter array elemtes: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n---------Select any one---------");
    printf("\n 1.Display Array ");
    printf("\n 2.Maximum in Array ");
    printf("\n 3.Minimum in Array ");
    printf("\n 4.Sum of array elements ");
    printf("\n 5.Average of array elemtes ");
    printf("\n 6.Sort array ");
    printf("\n 7.Linear Search");
    printf("\n---------------------------------");

    printf("\n Enter a choice: ");
    scanf("%d",&ch);

    switch(ch) 
    {
        case 1  : printf("\n-------Display Array-------");
                    for(i=0;i<n;i++)
                    {
                        printf("\n \t%d\t",a[i]);
                    }
                    break;

       case 2  : printf("\n-------Maximum in Array-------"); 
                    max=a[0];
                    for(i=1;i<n;i++)
                    {
                        if(max<a[i])
                        max=a[i];
                    }
                    printf("\nMax is %d",max);
                    break;

        case 3 : printf("\n-------Manimum in Array-------"); 
                     min=a[0];
                    for(i=0;i<n;i++)
                    {
                        if(min>a[i])
                        min=a[i];
                    }
                    printf("\nMin is %d",min);
                    break;

        case 4 : printf("\n-------Sum of Array elements-------"); 
                     sum=0;
                    for(i=0;i<n;i++)
                    {
                        sum=sum+a[i];
                    }
                    printf("\n Sum of elements %d",sum);
                    break;

        case 5 : printf("\n-------Average of Array elemtes-------"); 
                    sum=0;
                    for(i=0;i<n;i++)
                    {
                       sum=sum+a[i];
                    }
                    avg=sum/n;

                    printf("\n Average of array elements %.2f",avg);
                    break;

        case 6 : printf("\n-------Sorted Array-------"); 
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
                                  printf("\n Sorted Array= ");
                                 for(i=0;i<n;i++)
                                 printf("%d\n",a[i]);
                                break;
                    
        case 7 : printf("\n-------Linear search-------"); 
                    flag=0;
                    printf("\n Enter elemtes which you want search: ");
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
                            printf("\n Found");
                     else
                         printf(" not Found");
                        break;


        default:printf("\n INVALID CHOICE");
        break;


        }
        return 0;

}