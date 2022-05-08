/*  x   y   x
	 x  y  x
	  x y x
	   xyx
		y
*/

#include <stdio.h>

int main()
{
	int length, start, end, br, i, j;

	printf("\nEnter the value of length: ");
	scanf("%d", &length);

	start = 0;
	end = (length * 2) - 2;
	br = length - 1;

	for (i = 0; i < length; i++)
	{
		for (j = 0; j <= end; j++)
		{
			if (j == br)
			{
				printf("Y");
			}
			else if (j == start || j == end)
			{
				printf("X");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		start++;
		end--;
	}

	return 0;
}