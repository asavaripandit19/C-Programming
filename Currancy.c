#include<stdio.h>
int main()
{
    int amt;
    int ten,five,one;
     printf("Enter amount to be withdrawn: ");
     scanf("%d",&amt);

     ten=amt/10;
     amt=amt%10;

     five=amt/5;
     amt=amt%5;

     one=amt;

     printf("\n 10 rupayee notes: %d",ten);
      printf("\n 5 rupayee notes: %d",five);
       printf("\n 1 rupayee notes: %d",one);

}