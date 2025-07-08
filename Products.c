#include<stdio.h>
int main()
{
    int id=1,pid2,pid3,pid1;;
    int pqty1,pqty2,pqty3;
    float disAmt,total,Discount,payamt;
    char name[100],p1[100],p2[100],p3[100],mo[100];
    float price1,price2,price3;
    
    printf("\nEnter Customer Details..");


    printf("\nEnter Customer Name: ");
    scanf("%s",&name);
    printf("\nEnter Mobile number: ");
    scanf("%s",&mo);


    printf("\nEnter 1 product Details..");
    pid1=id++;
    printf("\nEnter first product name: ");
    scanf("%s",&p1);
    printf("\nPrice: ");
    scanf("%f",&price1);
    printf("\nQuantity: ");
    scanf("%d",&pqty1);

    printf("\nEnter 2 product Details..");
    pid2=id++;

    printf("\nEnter Second product name: ");
    scanf("%s",&p2);
    printf("\nPrice: ");
    scanf("%f",&price2);
    printf("\nQuantity: ");
    scanf("%d",&pqty2);

    printf("\nEnter 3 product Details..");
     pid3=id++;
    printf("\nEnter third product name: ");
    scanf("%s",&p3);
    printf("\nPrice: ");
    scanf("%f",&price3);
    printf("\nQuantity: ");
    scanf("%d",&pqty3);

    total=(price1*pqty1) + (price2*pqty2) + (price3*pqty3);

    if(total > 10000)
        Discount = 10;
    else if (total > 8000)
        Discount = 7;
    else if (total > 5000)
        Discount = 3;
    else
        Discount=0;

        disAmt = (total * Discount)/100;
        payamt = total - disAmt;

        printf("\n Customer Name: %s", name);
        printf("\n Mobile Number:%s",mo);
        printf("\n----------------------------------------------------------------------------------");
        printf("\n|   ID   |       NAME           |    PRICE    |    QTY    |          TOTAL        | ");
        printf("\n----------------------------------------------------------------------------------");
        printf("\n|%8d|%22s|%13f|%11d|%22f", pid1,p1,price1,pqty1,(price1*pqty1));
        printf("\n----------------------------------------------------------------------------------");
        printf("\n|%8d|%22s|%13f|%11d|%22f", pid2,p2,price2,pqty2,(price2*pqty2));
        printf("\n----------------------------------------------------------------------------------");
        printf("\n|%8d|%22s|%13f|%11d|%22f",pid3,p3,price3,pqty3,(price3*pqty3));
        printf("\n----------------------------------------------------------------------------------");
        printf("\n\t\t\t\t\t\t Total           :%.2f",total);
        printf("\n\t\t\t\t\t\t Discount(%%)     :%.2f",Discount);
        printf("\n\t\t\t\t\t\t Discount Amount :%.2f",disAmt);
        printf("\n\t\t\t\t\t\t Pay Amount      :%.2f",payamt);
        printf("\n----------------------------------------------------------------------------------");

        return 0;



}