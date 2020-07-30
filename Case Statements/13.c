#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c",&ch);

    if(ch == 'a'||ch == 'A'||ch == 'e'||ch == 'E'||ch == 'i'||ch == 'I'||
       ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U')
        printf("%c is vowel ",ch);
    else
        printf("%c is Consonant ",ch);

getch();
}
