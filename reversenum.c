#include<stdio.h>
int reverse(int a)
{   int rem,rev=0;
    while(a!=0)
    {rem=a%10;
    a=a/10;
    rev=rev*10+rem;
    
}
printf("reveresed no is %d",rev);
}
int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    reverse(a);
    return 0;

}