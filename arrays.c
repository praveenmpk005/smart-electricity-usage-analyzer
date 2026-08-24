#include<stdio.h>
int main()
{
    int arr[20],i,n;
    int max,min;
    printf("enter no of array elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[0])
        {
            max=arr[i];
        }
        else if (arr[i]<arr[0])
        {
            min=arr[i];
        }
    }
    printf("largest element is %d\n",max);
    printf("lowest element is %d",min);
    return 0;
}