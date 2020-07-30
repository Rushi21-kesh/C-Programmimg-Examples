#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i+=1)
        printf("%d ",i);
getch();

}
