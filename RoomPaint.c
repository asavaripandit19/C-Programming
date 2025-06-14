#include<stdio.h>
int main()
{
    float rl,rb,rh,rarea,roofarea;
    float dl,db,darea;
    float wl,wb,warea;
    float parea;

    printf("Enter lenghth,breadth and height of room(in meter): ");
    scanf("%f%f%f",&rl,&rb,&rh);
    rarea=2*(rb+rl)*rh;

    printf("Enter lenghth and breadth of Door(in meter): ");
    scanf("%f%f",&dl,&db);
    darea=dl*db;

    printf("Enter lenghth and breadth of Window(in meter): ");
    scanf("%f%f",&wl,&wb);
    warea=(wl*wb)*2;

    parea=rarea-(darea+warea);
    roofarea=rb*rl;

    printf("\n Area of painted Walls %.2fsq.ms ",parea);
    printf("\n Area of whitewashed roof %.2fsq.ms ",roofarea);

    return 0;



}