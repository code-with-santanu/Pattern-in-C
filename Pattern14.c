//      *
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <stdio.h>

int main()
{
    int row, i, j;
    printf("\n enter no of row:");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
