#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,i,div=0,org;
    printf("Enter a no :");
    scanf("%d",&num);
    org=num;

    for(i=num;num>0;)
        {
            rem=num%10;
            div=div*10+rem;
            num=num/10;
        }
    if(div==org)
    {
        printf("%d is a palindrome no",i);
    }
    else
    {
        printf("%d is not a palindrome no",i);
    }
getch();
}
