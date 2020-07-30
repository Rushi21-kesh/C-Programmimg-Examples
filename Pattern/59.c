#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space,num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(space=1;space<=num-row;space++)
        printf(" ");
        {
            for(col=1;col<=row;col++)
                printf("* ");

        }
        printf("\n");
    }

    for(row=0;row<=num;row++)
    {

         for(space=0;space<row;space++)
            printf(" ");
        {
            for(col=0;col<num-row;col++)
            {
                printf("* ");
            }
        }

    printf("\n");
    }

getch();
}
