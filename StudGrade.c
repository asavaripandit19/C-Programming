#include<stdio.h>
int main()
{
    int rollno;
    char java[100],C[100],python[100],grade,name[100];
    float m1,m2,m3,total,avg;

    printf("Enter Student Details \n");
    printf("Roll no : ");
    scanf("%d",&rollno);

    printf("Name: ");
    scanf("%s",&name);

    printf("Subject 1 :" );
    scanf("%s",&java);
     printf("Subject 2 :" );
    scanf("%s",&C);
     printf("Subject 3 :" );
    scanf("%s",&python);

    printf(" Marks 1: ");
    scanf("%f",&m1);
    printf("Marks 2: ");
    scanf("%f",&m2);
    printf(" Marks 3: ");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;
     if(avg<=100 && avg>=90)
        grade='A';
      else if (avg<=90 && avg>80)
        grade='B';
      else if (avg<=80 && avg>70)
        grade='C';
      else if (avg<=70 && avg>50)
        grade='A';
      else if (avg<=50 && avg>35)
        grade='E';
     else
      grade='F';
    printf("\n------ Subject Details------");
      printf("\n Roll No: %d ",rollno);
      printf("\n Name: %s ",name);
      printf("\n Sub1: %s",java);
      printf("\n Sub2: %s",C);
      printf("\n Sub3 : %s",python);
      printf("\n Marks 1 : %.2f",m1);
      printf("\n Marks 2 : %.2f",m2);
      printf("\n Marks 3 : %.2f",m3);
      printf("\n Total marks : %.2f",total);
      printf("\n Average : %.2f",avg);
      printf("\n Grade : %c",grade);

      return 0;
      

}