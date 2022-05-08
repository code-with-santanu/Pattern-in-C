/* 5
   4    5
   3    4   5
   2    3   4   5
   1    2   3   4   5
*/

#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = i; j <= row; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}