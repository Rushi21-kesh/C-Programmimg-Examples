#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space,reg,num=1;

    printf("Enter the number :");
    scanf("%d",&reg);
    for(row=1;row<=reg;row++)
    {
        for(col=1;col<=reg-row;col++)
        printf(" ");
            num=row;
            for(col=1;col<=row;col++)
        {
            printf("%d",num);
            num++;
        }
    num=num-2;
    for(col=1;col<row;col++)
        {
            printf("%d",num);
            num--;
        }
    printf("\n");

    }
getch();
}
