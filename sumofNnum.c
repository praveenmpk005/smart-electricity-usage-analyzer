#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter num:");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {   
        sum+=i;
        
        i++;
    }
    printf("%d",sum);
    return 0;
}