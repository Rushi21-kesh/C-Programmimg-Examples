#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int start,end,square,cude;
    double sqroot;

    printf("Enter the number : ");
    scanf("%d",&end);
    printf("Sr.no   Square  Cube    Square root \n");
    for(start=1;start<=end;start+=1)
    {
        square=start*start;
        cude=square*start;
        sqroot=sqrt(start);   //sqrt is a function which return square root of number .
        printf("  %d\t%d\t%d\t%lf\n",start,square,cude,sqroot);
    }
getch();
}
