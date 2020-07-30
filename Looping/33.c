#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1;i<=10;i+=1)
        printf("%d * %d = %d\n",num,i,(num*i));

getch();
}
