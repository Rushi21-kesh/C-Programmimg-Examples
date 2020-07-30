#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,num=9;
    for(row=0;row<num;row++)
    {
        for(col=0;col<num;col++)
        {
            if((row==col)||((row+col)==(num-1)))
            {
                if(row<5)
                    printf("%c",65+row);
                else
                    printf("%c",73-row);

            }

            else
                printf(" ");
//                ch++;
        }
    printf("\n");
    }
getch();
}
