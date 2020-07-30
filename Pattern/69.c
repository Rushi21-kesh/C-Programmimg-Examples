#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;
    char ch='A',ch1='E';
    for(row=0;row<5;row++)
    {printf(" ");
        for(space=0;space<row;space++)
        printf(" ");
        {
            for(col=0;col<=4-row;col++)

                if(col==0||col==4-row)
                    printf("%c ",ch);

                else
                    printf("  ");
ch++;
        }
    printf("\n");
    }




    for(row=0;row<=4;row++)
    {
     for(space=4-row;space>=0;space--)
     printf(" ");
     {
         for(col=0;col<=row;col++)
            if(col==0||col==row||)
                {
                    printf("%c ",ch1);
                }
            else
                printf("  ");
     ch1--;
     }
    printf("\n");
    }
getch();
}
