/* 1    1   1   1   1
   2    2   2   2
   3    3   3
   4    4
   5
*/

#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 0; j <= (row - i); j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}