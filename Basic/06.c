#include<stdio.h>
#include<conio.h>
void main()
{
    float cel,fahr,kel;

    printf("Enter the Temprature in Celsius : ");
    scanf("%f",&cel);

    fahr=1.8*cel+32;
    printf("Temprature in Fahrenheit is : %.3f\n",fahr);

    kel=cel+273;
    printf("Temprature in Kelvin is : %.3f",kel);
}
