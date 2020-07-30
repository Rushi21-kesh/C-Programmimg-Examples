#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,i;

    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i+=1)
    {
        sum=sum+i;
        printf("After adding %d sum is : %d\n",i,sum);
    }
printf("Total sum is : %d",sum);
getch();
}

