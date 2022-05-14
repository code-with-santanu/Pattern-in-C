//   *
//   *  *   *
//   *  *   *   *   *

#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}