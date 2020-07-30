
#include<stdio.h>
#include<conio.h>
void main()
{

    float redius,length,height,breadth,Height,base,side,area_C,area_S,area_R,area_T;
/* Area Of Circle*/
    printf("- Area of Circle\n");
    printf("Enter the Redius of Circle :");
    scanf("%f",&redius);
    area_C=3.14*redius*redius;
    printf("Area of Circle is : %.3f \n\n",area_C);
/* Area Of Square*/

    printf("- Area of Square\n");
    printf("Enter the length of side : ");
    scanf("%f",&side);
    area_S=side*side;
    printf("Area of Square is :%.3f\n\n",area_S);
/* Area Of Rectangle*/

    printf("- Area of Rectangle\n");
    printf("Enter the length and breadth of rectangle : ");
    scanf("%f%f",&length,&breadth);
    area_R=length*breadth;
    printf("Area of Rectangle is %.3f\n\n",area_R);
/* Area Of Triangle*/
    printf("- Area of Triangle\n");
    printf("Enter the Height and Base of the Tringle :");
    scanf("%f%f",&Height,&base);
    area_T=0.5*Height*base;
    printf("Area of Triangle is :&.3f\n",area_T);
    getch();
}
