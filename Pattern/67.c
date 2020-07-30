#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;

    for(row=0;row<=5;row++)
        {
            for(col=0;col<=row;col++)
                printf("*");

    printf("\n");
        }
    for(row=0;row<5;row++)
        {
            for(col=0;col<5-row;col++)
                printf("*");

     printf("\n");
    }
getch();
}
