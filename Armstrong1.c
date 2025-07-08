#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,cnt=0;
    float result=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n=n/10;
        cnt++;
    }
    n=temp;
    while(n>0)
    {
        int rem=n%10;
        result=result+pow(rem,cnt);
        n/=10;
    }
    (temp==result)?printf("armstrong"): printf("Not armstrong");
      
        //     if(temp==result)
        // {
        //     printf("armstrong");
        // }
        // else
        // {
         
        //     printf("Not armstrong");
            
        // }
    
    return 0;
}