#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;

    for(row=0;row<=5;row++)
    {
        for(space=0;space<=5-row;space++)
            printf(" ");
        {
            for(col=1;col<=row;col++)
                printf("*");
        }
    printf("\n");
    }

    for(row=0;row<5;row++)
    {   printf(" ");
        for(space=0;space<=row;space++)
            printf(" ");
        {
            for(col=1;col<5-row;col++)
                printf("*");
        }
    printf("\n");
    }
getch();
}
