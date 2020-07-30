#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact;
    printf("Enter the number : ");
    scanf("%d",&num);
    fact=1;
    for(i=1;i<=num;i+=1)
        {
            fact=fact*i;
        }
    printf("Factorial of %d is %d",num,fact);
getch();
}
