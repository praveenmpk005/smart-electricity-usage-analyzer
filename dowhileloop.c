#include<stdio.h>
int main()
{
    int num,i;
    printf("enter num:");
    scanf("%d",&num);
    i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }while(i<=num);
    return 0;
}