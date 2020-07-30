#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=row;col<row+5;col++)
        {
            if(col<=5)

            {
                printf("%d",col);
            }

        else
        printf("5");
        }
    printf("\n");
    }
getch();
}
