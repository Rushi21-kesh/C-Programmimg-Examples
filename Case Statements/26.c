#include<stdio.h>
#include<conio.h>
void main()
{
    int units;
    int amount,extra;
    float total;

    printf("Enter the units of electricity bill : ");
    scanf("%d",&units);

    if(units <= 50)
    {
        amount=units*0.50;
        printf("1 = %d",amount);
    }

    else if(units <= 150)
    {
        amount=25+((units-50)*0.75);
        printf("2 = %d",amount);
    }

    else if(units <=250)
    {
        amount=100+((units-150)*1.20);
        printf("3 = %d",amount);
    }
    else
    {
        amount=220+((units-250)*1.50);
        printf("4 = %d",amount);
    }

    extra=amount*0.20;
    total=amount+extra;
    printf("Electricity Bill of %d units is %.2f .",units,total);

getch();
}
