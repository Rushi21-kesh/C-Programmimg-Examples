#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int amt=num*2;

    for(row=0;row<amt;row++)

    {
        for(col=1;col<=amt;col++)
        {
            if(col<=num-row || col>=num+row+1 || col<=row-num+1 || col>=amt-row+num )
                printf("*");
            else
                printf(" ");

        }
printf("\n");
    }
getch();
}
