#include<stdio.h>
#include<conio.h>
void main()
{
    int sel_price,cost_price;

    printf("Enter the Selling price : ");
    scanf("%d",&sel_price);
    printf("Enter the cost price : ");
    scanf("%d",&cost_price);

    if(sel_price > cost_price)
        printf("It's Profit");
    else
        printf("It's Loss");

getch();
}
