#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;

    for(row=1;row<=5;row++)
    {
        for(space=5-row;space>=0;space--)
              printf(" ");
        {
              for(col=1;col<=row;col++)

                if(col==1||col==row||row==5)
                    printf("*");
                else
                    printf(" ");
        }
    printf("\n");
    }
getch();
}
