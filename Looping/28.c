#include<stdio.h>
#include<conio.h>
void main()
{
    int num,start;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(start=0;start<=num;start+=2)
        printf(" %d ",start);
getch();
}
