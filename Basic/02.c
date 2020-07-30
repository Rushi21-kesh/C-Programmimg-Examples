#include<stdio.h>
#include<conio.h>
void main()
{
    int length ,width,peri;

    printf("Enter Length and Width of rectangle : ");
    scanf("%d%d",&length,&width);

    peri=2*(length+width);
    printf("From given data Perimeter of rectangle is : %d ",peri);

getch();
}
