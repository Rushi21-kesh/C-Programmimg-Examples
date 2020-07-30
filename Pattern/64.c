#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;
    for(row=0;row<5;row++)
    {
        for(space=0;space<row;space++)
        printf(" ");
        {
            for(col=0;col<=4-row;col++)
                if(row==0||col==0||col==4-row)
                    printf("* ");
                else
                    printf("  ");
        }
    printf("\n");
    }
getch();
}
