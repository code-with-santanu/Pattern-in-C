/*          1
        1   2
    1   2   3
1   2   3   4
*/

#include <stdio.h>

int main()
{
    int i, j, k, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= (row - i); j++)
        {
            printf(" \t");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d\t", k);
        }
        printf("\n");
    }
    return 0;
}