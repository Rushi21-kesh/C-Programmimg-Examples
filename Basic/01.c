#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,temp;

    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);

    printf("Two numbers Before swapping is %d and %d\n",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("Two numbers After swapping is %d and %d ",num1,num2);

getch ();
}
