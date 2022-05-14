/*pattern(heart)*/

#include <stdio.h>

void Heart(int);

int main()
{
	int row, i, j;
	printf("\nEnter the no of rows:");
	scanf("%d", &row);

	Heart(row);
	// for (i = 1; i <= 1; i++)
	// {
	// 	for (j = 1; j <= row * 4; j++)
	// 		printf(" *");
	// 	printf("\n");
	// }
	// for (i = 1; i <= (2 * row) - 1; i++)
	// {
	// 	for (j = 1; j <= i; j++)
	// 		printf("  ");
	// 	for (j = 1; j <= (4 * row) - (2 * i); j++)
	// 		printf(" *");
	// 	printf("\n");
	// }
	return 0;
}

void Heart(int row)
{
	int i, j;
	// Upper part
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row - i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= 2 * i; j++)
		{
			printf(" *");
		}
		for (j = 1; j <= row - i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= row - i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= 2 * i; j++)
		{
			printf(" *");
		}
		for (j = 1; j <= row - i; j++)
		{
			printf("  ");
		}
		printf("\n");
	}

	// lower part
	for (i = 2 * row; i >= 1; i--)
	{
		for (j = (2 * row); j >= i + 1; j--)
		{
			printf("  ");
		}
		for (j = 1; j <= (2 * i); j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}