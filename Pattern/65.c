#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col;
    char ch='E';
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
            printf("%c",ch-1+col);
            --ch;
    printf("\n");
    }
getch();
}
