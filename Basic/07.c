#include<stdio.h>
#include<conio.h>
void main()
{
    float year,amount,rate,interest;
    printf("Enter the Amount : ");
    scanf("%f",&amount);

    printf("Enter duration in year : ");
    scanf("%f",&year);

    printf("Enter rate of interest : ");
    scanf("%f",&rate);

    interest=(year*amount*rate)/100;
    printf("Interest is = %f ",interest);

getch();
}
