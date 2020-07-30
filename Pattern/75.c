#include<stdio.h>
#include<conio.h>
void main()
{
    int row=0;
    while(row<5)
    {
        int col=0;
        while(col<5)
        {
            if(row%2==0)
                printf("1");
            else
                printf("0");
            col++;
        }
    row++;
    printf("\n");
    }
}
