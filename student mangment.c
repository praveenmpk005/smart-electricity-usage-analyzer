#include <stdio.h>

char grade(float p)
{
    if (p >= 90) return 'A';
    if (p >= 80) return 'B';
    if (p >= 70) return 'C';
    if (p >= 60) return 'D';
    if (p >= 50) return 'E';
    return 'F';
}

int main()
{
    int n, s, i, j, total, highest = 0;
    char name[50][30];
    int marks[50][5];
    float per[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects (3-5): ");
    scanf("%d", &s);

    for (i = 1; i <=n; i++)
    {
        printf("\nEnter %d name: ",i);
        scanf("%s", name[i]);

        total = 0;

        for (j = 0; j <s; j++)
        {
            printf("Enter marks %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total += marks[i][j];
        }

        per[i] = (float)total / s;

        if (per[i] > per[highest])
            highest = i;
    }

    printf("\n--- RESULTS ---\n");

    for (i = 0; i <n; i++)
    {
        total = 0;

        for (j = 0; j <s; j++)
            total += marks[i][j];

        printf("\nName: %s", name[i]);
        printf("\nTotal: %d", total);
        printf("\nPercentage: %.2f", per[i]);
        printf("\nGrade: %c\n", grade(per[i]));
    }

    printf("\nHighest: %s (%.2f%%)\n",
           name[highest], per[highest]);

    return 0;
}
