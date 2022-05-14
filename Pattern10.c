/* 1
   0    1
   1    0   1
   0    1   0   1
   1    0   1   0   1
*/

#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", (j + 1) % 2);
            }
            else
            {
                printf("%d\t", j % 2);
            }
        }
        printf("\n");
    }
    return 0;
}