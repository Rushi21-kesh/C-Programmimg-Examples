#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,pro=1,dig;

    printf("Enter the number : ");
    scanf("%d",&num);
    i=num;
    printf("Digits of %d number is : ",i);
    while(num !=0 )
    {
        dig=num%10;
        pro=pro*dig;
        num=num/10;
        printf("%d ",dig);
    }

    printf("\nProduct of digits of number %d is %d .",i,pro);

getch();
}
