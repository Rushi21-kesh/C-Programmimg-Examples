#include<stdio.h>
#include<conio.h>
void main()
{
    char start,end;
    float distance,time,speed,noof_br,br_time,br_total_time,total;

    printf("Enter Starting destination : ");
    scanf("%c",&start);

    printf("Distance is : ");
    scanf("%f",&distance);

    printf("Speed of Vehicle is :  ");
    scanf("%f",&speed);

    printf("Enter Number of break take : ");
    scanf("%f",&noof_br);

    printf("Enter time per break : ");
    scanf("%f",&br_time);

    br_total_time=(noof_br*br_time)/60;
    time=(distance/speed);
    total=(br_time+br_total_time);


    printf("Total time reaching to destination is : %f",total);

getch();

}
