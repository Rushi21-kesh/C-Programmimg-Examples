#include<stdio.h>
#include<conio.h>
void main()
{
    float side1,side2,side3;
    printf("Enter length  of side 1 : ");
    scanf("%f",&side1);
    printf("Enter length  of side 2 : ");
    scanf("%f",&side2);
    printf("Enter length  of side 3 : ");
    scanf("%f",&side3);

    if(side1==side2 && side1==side3 && side2==side3)
        printf("Print it is a Equilateral Triangle ");

    else if(side1==side2||side1==side3||side2==side3)
        printf("Ii is isosceles triangle ");

    else
        printf("It is a scalene triangle");
getch();
}
