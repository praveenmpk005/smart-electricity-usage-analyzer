#include<stdio.h>
int calculate(int a)
{
    if (a%2==0)
    printf("it is a even number");
    else 
    printf("it is a odd number ");
}
int main()
{
    int a;
    printf("enter value of a");
    scanf("%d",&a);
    calculate(a);
    return 0;
}