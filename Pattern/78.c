#include<stdio.h>
#include<conio.h>

void main()
{
    int row,col;

    row=0;
    while(row<=5)
    {
        col=1;
        {
            while(col<=row)
            {

            printf("%d",(row+col)-1);
            col++;
            }
        }
    row++;
 printf("\n");

    }
}
