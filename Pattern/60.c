#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space,num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(space=0;space<=num-row;space++)
            printf(" ");
        {
            for(col=0;col<num;col++)
            if(row==1||row==num||col==0||col==num-1)
                printf("#");
            else
                printf(" ");
        }
    printf("\n");
    }
getch();
    }
