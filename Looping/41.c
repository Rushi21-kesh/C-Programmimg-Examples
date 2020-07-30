#include<stdio.h>
#include<conio.h>
void main()
{
    int lim,i,fib1=0,fib2=1,fib3;

    printf("Enter the limit of fibonacci :");
    scanf("%d",&lim);
    printf("Given fibonacci series of limit %d is : ",lim);
    for(i=1;i<=lim;i++)
        {
            printf("%d ",fib1);
            fib3=fib1+fib2;
            fib1=fib2;
            fib2=fib3;

        }
getch();
}
