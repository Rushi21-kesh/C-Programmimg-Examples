#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space,num;
    printf("Enter the number  : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(space=1;space<=row;space++)
            printf(" ");
        {
            for(col=0;col<=num-row;col++)
                if(row==1||col==num-row||col==0)
                    printf("*");
                else
                    printf(" ");
        }
    printf("\n");
    }
getch();
}
