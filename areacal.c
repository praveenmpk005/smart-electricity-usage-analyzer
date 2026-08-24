#include<stdio.h>
int main()
{
    int length,breadth,choice ;
    float area;
    printf("enter choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
    printf("enter length:");
    scanf("%d",&length);
    area=length*length;
    printf("area of a square:%fsqunits",area);

    }
    else if (choice==2)
    {
    printf("enter length:");
    scanf("%d",&length);
    printf("enter breadth:");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("area of a rectangle:%fsqunits",area);

    }
}