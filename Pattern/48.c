#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space,num;
    printf("Enter number of rows want : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(space=0;space<=num-row;space++)
        printf(" ");

            for(col=1;col<=(row*2)-1;col++)

                    printf("%d",row);

    printf("\n");
}

getch();
}

