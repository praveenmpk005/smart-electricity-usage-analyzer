#include<stdio.h>
int main()
{
    int arr[20],i,n;
    printf("enter no of array elements :");
    scanf("%d",&n);
    printf("enetr array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}