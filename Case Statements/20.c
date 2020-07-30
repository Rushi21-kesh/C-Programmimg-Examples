#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%5==0)
    {
        if(num%11==0)
            printf("Number %d is divisible by 5 and 11",num);
        else
            printf("Number %d is not divisible by 5 and 11 ",num);
    }
    else
            printf("Number %d is not divisible by 5 and 11 ",num);

getch();
}
