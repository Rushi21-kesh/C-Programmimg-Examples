#include<stdio.h>
#include<conio.h>
void main()
{
    int note500,note200,note100,note50,note20,note10,note5,note2,note1;
    int amount;

    note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
    printf("Enter the amount : ");
    scanf("%d",&amount);
        if(amount>=500)
        {
            note500=amount/500;
            amount=amount-(500*note500);
        }
        if(amount>=200)
        {
            note200=amount/200;
            amount=amount-(note200*200);
        }
        if(amount>=100)
        {
            note100=amount/100;
            amount=amount-(note100*100);
        }
        if(amount>=50)
        {
            note50=amount/50;
            amount=amount-(50*note50);
        }
        if(amount>=20)
        {
            note20=amount/20;
            amount=amount-(20*note20);
        }
        if(amount>=10)
        {
            note10=amount/10;
            amount=amount-(10*note10);
        }
        if(amount>=5)
        {
            note5=amount/5;
            amount=amount-(5*note5);
        }
        if(amount>=2)
        {
            note2=amount/2;
            amount=amount-(2*note2);
        }
        if(amount>=1)
        {
            note1=amount;
        }

    printf("%d notes of 500 \n",note500);
    printf("%d notes of 200 \n",note200);
    printf("%d notes of 100 \n",note100);
    printf("%d notes of 50 \n",note50);
    printf("%d notes of 20 \n",note20);
    printf("%d notes of 10 \n",note10);
    printf("%d notes of 5 \n",note5);
    printf("%d notes of 2 \n",note2);
    printf("%d notes of 1 \n",note1);
getch();
}
