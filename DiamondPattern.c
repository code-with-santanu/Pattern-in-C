//		*
// 	   ***
//	  *****
//	 *******
//	*********
//	 *******
//	  *****
// 	   ***
//  	*

#include <stdio.h>

int main()
{
	int i, j, n, br1, br2;
	n = 11;
	br1 = n / 2;
	br2 = n / 2;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j > br1 && j < br2)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		if (i >= n / 2)
		{
			br1++;
			br2--;
		}
		else
		{
			br1--;
			br2++;
		}
		printf("\n");
	}

	return 0;
}

//   ALTERNATIVE CODE
/*
#include <stdio.h>

int main()
{
	int row,i,j;
	printf("\n enter no of row:");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		 }
	printf("\n");
	}

   for(i=row-1;i>=1;i--)
   {
	   for(j=1;j<=row-i;j++)
   {
	   printf(" ");
   }
   for(j=1;j<=2*i-1;j++)
   {
	  printf("*");
   }
   printf("\n");
   }

 return 0;
}
*/