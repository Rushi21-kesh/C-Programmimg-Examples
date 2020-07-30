#include<stdio.h>
#include<conio.h>
void main()
{
    int row=0,col=1;
    while(row<2)
    {
        col=0;
            while(col<4)
              {
                printf("%d,%d",row,col);
                col++;
                printf("\n");
              }
    row++;

    }

}
