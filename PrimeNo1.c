#include<stdio.h>
int main()
{
    int n,i,cnt=0;
     printf("Enter a number: ");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
        if(n%i==0)
        {
            // printf("%d \n ",i);
           cnt++;
        }
     }
     (cnt==2)?printf("Prime Number"):printf("Not Prime Number");
     return 0;
}