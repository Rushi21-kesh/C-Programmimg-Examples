#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;


    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);

    printf("Two numbers Before swapping is %d and %d\n",num1,num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("Two numbers after swapping is %d and %d\n",num1,num2);
getch();
}

