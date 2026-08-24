#include<stdio.h>
int main()
{
    int num,i;
    printf("enter num:");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}