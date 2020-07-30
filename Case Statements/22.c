#include<stdio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' )
        printf("Enter character %c is alphabet ",ch);
    else if(ch>=0&& ch<=9)
        printf("Enter character %c is number ",ch);
    else
        printf("Enter character %c is special character ",ch);

getch();
}
