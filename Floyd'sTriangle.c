#include <stdio.h>

int main()
{
    int i, j, row, n;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);
    n = 1;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}