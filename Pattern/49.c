#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col;

    for(row=1;row<=5;row++)
    {
        for(col=0;col<row;col++)
        {
            if( col==row-1 || row==5 ||col==0)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
    }
getch();
}
