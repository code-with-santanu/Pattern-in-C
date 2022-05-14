/*          5
          4 5 4
        3 4 5 4 3
      2 3 4 5 4 3 2
    1 2 3 4 5 4 3 2 1
*/

#include <stdio.h>

int main()
{
    int i, j, k, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= (i - 1); j++)
        {
            printf("  ");
        }
        for (j = i; j <= row; j++)
        {
            printf("%d ", j);
        }
        for (k = row - 1; k >= i; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}