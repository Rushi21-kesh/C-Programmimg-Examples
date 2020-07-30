#include<stdio.h>
#include<conio.h>
void main()
{
    int row ,col,num;
    printf("Enter the number :  ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=0;col<=num-row;col++)
        {
            if(row==1||col==0||col==num-row)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
    }
getch();
}
