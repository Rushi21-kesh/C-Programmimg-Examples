#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2,sum,sub,mul,div;

    printf("Enter the two values : ");
    scanf("%f%f",&num1,&num2);
    printf("Value of First variable is %f and value of second variable is %f\n",num1,num2);

    sum=num1+num2;
    printf("Addition is :%.3f\n",sum);

    sub=num1-num2;
    printf("Substaction is : %.3f\n",sub);

    mul=num1*num2;
    printf("Multiplication is : %.3f\n",mul);

    div=num1/num2;
    printf("Division is : %.3f\n",div);

getch();

}
