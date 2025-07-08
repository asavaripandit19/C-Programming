#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=1;
    printf("Enter a number: ");
    scanf("%d",&n);

       for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
       {
        flag=0;
       }
    }
    (flag==1)?printf("Prime Number"):printf("Not Prime Number");
    
    return 0;

}