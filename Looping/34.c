#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i+=1)
        printf("cube of %d is = %d \n",i,i*i*i);

getch();
}
