#include<stdio.h>
#include<conio.h>
void main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num<0)
        printf("Number is Negative ");
    else if (num >0)
        printf("Number is Positive ");
    else
        printf("Number is zero ");


getch();
}
