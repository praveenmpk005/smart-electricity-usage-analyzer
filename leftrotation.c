#include<stdio.h>
int main()
{
    int arr[20],i,n,temp;
    printf("enter no of array elements :");
    scanf("%d",&n);
    printf("enetr array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}