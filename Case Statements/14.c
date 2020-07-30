#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3,larg;
    printf("Enter three number : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        larg=num1;
    }
    else if(num2>num1 && num2>num3)
    {
        larg=num2;
    }
    else
    {
        larg=num3;
    }
printf("Largest number is : %d",larg);
getch();
}
