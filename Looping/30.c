#include<stdio.h>
#include<conio.h>
void main()
{
    int start , end , diff ,num ;

    printf("Starting element of list : ");
    scanf("%d",&start);

    printf("Ending element of List : ");
    scanf("%d",&end);

    printf("Difference between two elements : ");
    scanf("%d",&diff);

    printf("List is : ");
    for(num=start ; num<=end ; num=num+diff)
        printf("%d ",num);
getch();
}
