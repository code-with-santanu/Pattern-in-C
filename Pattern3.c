/* 5
   4    4
   3    3   3
   2    2   2   2
   1    1   1   1   1
*/

#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = 0; j <= (row - i); j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}