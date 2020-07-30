#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,i,j,num;
    int size=(2*num)-1;
    int start=0;
    int end=size-1;
    int a[size][size];

    printf("Enter the number : ");
    scanf("%d",&num);

    for(row=1;row<=size;row++)
    {
        for(col=0;col<=size;col++)
        {
            if(row==start||col==end||row==end||col==start)
            a[row][col]=num;
            printf("%d",num-end);

        }
        ++start;
        --end;
        --num;
    printf("\n");
    }
getch();
}
