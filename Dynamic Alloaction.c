#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n, i, x, sum=0, max, min, f=0, t;

    printf("N(number of elements): ");
    scanf("%d",&n);

    a = malloc(n*sizeof(int));
    if(a==NULL) return 1;

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    max=min=a[0];
    for(i=1;i<n;i++) {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }

    printf("Max=%d Min=%d Sum=%d Avg=%.2f\n",
           max,min,sum,(float)sum/n);

    printf("Search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
        if(a[i]==x) f++;

    printf("Frequency=%d\n",f);

    for(i=0;i<n/2;i++) {
        t=a[i]; a[i]=a[n-i-1]; a[n-i-1]=t;
    }

    printf("Reverse: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    free(a);
    return 0;
}
