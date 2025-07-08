#include<stdio.h>
int main()
{
    int n,even=0,odd,i,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        if(n%2==0)
        {
            even=even*10+rem;
        }
        
        n=n/10;
        
    }
    printf("\n even array =\n");
    while(even>0){
        r=even%10;
        printf("\n%d ",even);
        even=even/10;
    }

}