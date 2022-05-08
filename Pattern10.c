/*  A
    A       B
    A       B       C
    A       B       C       D
    A       B       C       D       E
*/

#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter the no of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c\t", j + 65);
        }
        printf("\n");
    }
    return 0;
}