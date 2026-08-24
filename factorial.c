#include<stdio.h>
int factorial(int a)
{
    if(a==0||a==1)
    return 1;
    else
    return a*factorial(a-1);
}
int main()
{
    int a,fact ;
    printf("enter value of a:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("%d",fact);
    return 0;
}