#include<stdio.h>
int main()
{
    int arr1[3][3],i,j;
    int arr2[3][3];
    printf("enter elements of array 1 :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);

        }
    }
    printf("enter elements of array 2 :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);

        }
    }
    printf("element of array 1 is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);

        }
        printf("\n");
    }
    printf("element of array 2 is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",arr2[i][j]);

        }
        printf("\n");
    }
    return 0;
}