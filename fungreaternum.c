#include<stdio.h>
int greater(int a,int b)
{
   
    if(a>b)
    printf("a is greater");
    else
    printf("b is greater");
}
int main()
{
    int a,b;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    greater(a,b);
    return 0;
}