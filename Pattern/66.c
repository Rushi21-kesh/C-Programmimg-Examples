#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col;
    for(row=0;row<=5;row++)
    {
        for(col=0;col<=5;col++)
        if(col==0||row==0||row==5||col==5)
            printf("1");
        else
            printf("0");
    printf("\n");
    }
getch();
}
