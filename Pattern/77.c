#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,num;

    printf("Enter the number :" );
    scanf("%d",&num);
    int no=(num*2)-1;

    for(row=0;row<no;row++)
    if(row<=num)
    {
            for(col=1;col<=(row*2)-1;col++)
        {
            printf("+");
        }
    printf("\n");
    }
    else
    {
        for(col=1;col<=((no-row)*2)+1;col++)
        {
            printf("-");
        }

    printf("\n");
    }
getch();
}

