#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,i;

    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Even values between 0 to %d is : ",num);
    for(i=0;i<=num;i+=2)
        {
            sum=sum+i;
            printf("%d ",i);
        }
    printf("\nSum of this even values is : %d",sum);
getch();
}
