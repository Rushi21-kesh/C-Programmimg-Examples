#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;

    for(row=1;row<=5;row++)
    {
        for(space=1;space<=row;space++)
        printf("%d",space);
        {
            for(col=1;col<=5-row;col++)
                printf(" ");

        }
        for(space=5;space>=1;space--)
            if(space<=row)
                printf("%d",space);
            else
            printf(" ");
    printf("\n");
    }
getch();
}
