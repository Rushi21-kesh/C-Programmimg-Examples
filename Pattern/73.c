#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,num=5;

    for(row=num;row>=1;row--)
    {
        for(col=num;col>=1;col--)
        {
            if(col==row)
                printf("%d",num);
        }
    num--;
    printf("\n");
    }
}
