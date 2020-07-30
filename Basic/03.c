#include<stdio.h>
#include<conio.h>
void main()
{
    int sub1,sub2,sub3,sub4,sub5,total;
    float avg,per;

    printf("Enter marks of five subject out of 100 : ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    avg=total/5;
    per=total*100/500;

    printf("Total marks of all Subject is : %d \n",total);
    printf("Average marks of Student is %f \n",avg);
    printf("Percentage of Student is  %.2f ",per);
 getch();
}
