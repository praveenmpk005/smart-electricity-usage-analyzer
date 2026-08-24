#include<stdio.h>
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum is %d",sum);
}
int main()
{
    int sum,a,b;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    add(a,b);
    
}