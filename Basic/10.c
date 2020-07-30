#include<stdio.h>
#include<conio.h>
void main()
{
    float pay,day,sal;

    printf("Enter per day salary : ");
    scanf("%f",&pay);

    printf("Enter how many days work do : ");
    scanf("%f",&day);

    sal=pay*day;

    printf("Total salary is %.2f ",sal);
getch();
}
