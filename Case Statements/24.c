#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the week number : ");
    scanf("%d",&num);

    switch(num)
    {
        case 1: printf("It's SUNDAY");
                break;
        case 2: printf("It's MONDAY");
                break;
        case 3: printf("It's THUSDAY");
                break;
        case 4: printf("It's WEDNESAY");
                break;
        case 5: printf("It's THURSDAY");
                break;
        case 6: printf("It's FRIDAY");
                break;
        case 7: printf("It's SATURDAY");
                break;

        default :
            printf("Enter valid week number .\n");

    }
getch();
}
