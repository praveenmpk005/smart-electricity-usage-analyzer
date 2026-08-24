#include<stdio.h>
int main()
{
    int marks ;
    printf("enetr marks:");
    scanf("%d",&marks);
    if (marks>=90)
    printf("garde A");
    else if(marks>=70 && marks<89)
    printf("garde b");
    else if (marks>=50 && marks<70)
    printf("grade c");
    else 
    printf("garde f");
    return 0;
}