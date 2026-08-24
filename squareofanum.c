#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int a ,result;
    printf("enter value of a:");
    scanf("%d",&a);
    result=square(a);
    printf("square of a num is %d",result);
    return 0;
}