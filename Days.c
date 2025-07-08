#include<stdio.h>
int main()
{
    int days;
    printf("Enter a day number between 1 to 7: ");
    scanf("%d",&days);

    switch(days)
    {
        case 1:printf("1.Monday");
                break;
        case 2:printf("2.Tuesday",days);
                break;
        case 3:printf("3.Wednesday",days);
                break;
        case 4:printf("4.Thrusday",days);
                break;
        case 5:printf("5.Friday ",days);
                break;
        case 6:printf("6.Saturnday",days);
                break;
        case 7:printf("7.Sunday",days);
                break;
        default : printf("Invalid Choice!!");
                

    }

    return 0;

}