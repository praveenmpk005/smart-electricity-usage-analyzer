#include <stdio.h>

void armstrong(int n)
{
    int rem, sum = 0, original;

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("It is an Armstrong number");
    }
    else
    {
        printf("It is not an Armstrong number");
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}