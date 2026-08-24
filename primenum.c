#include<stdio.h>
int prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if (count==2)
    printf("it is prime num");
    else
    printf("not a prime num");
}
int main()
{
    int a ;
    printf("enter value of a:");
    scanf("%d",&a);
    prime(a);
    return 0;
}