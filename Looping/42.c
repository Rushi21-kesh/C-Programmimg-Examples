#include<stdio.h>
#include<conio.h>
void main()
{
    int num,arm=0,rem,org,add;

    printf("Enter the number : ");
    scanf("%d",&num);
    org=num;

    for(num=org;num!=0;)
    {
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
        printf("%d\n",arm);
    }

    if(org==arm)
        printf("%d number is armstrong ",org);
    else
        printf("%d number is not armstrong ",org);
getch();
}

