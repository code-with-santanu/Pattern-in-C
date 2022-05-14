#include <stdio.h>

int posx = 0, posy = 0, dir = 0;

void NullSpyral(int array[][]);
void Print2D(int array[][]);
void NewPos(int array[][], int, int);
void SpiralFill(int array[][], int, int);

int main()
{
	int array[5][5];

	NullSpyral(array);
	Print2D(array);
	printf("\n");
	SpiralFill(array, 5, 5);
	Print2D(array);

	return 0;
}

void NullSpyral(int array[5][5])
{
	int row, col;
	for (row = 0; row <= 4; row++)
	{
		for (col = 0; col <= 4; col++)
		{
			array[row][col] = 0;
		}
	}
}
void Print2D(int array[5][5])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\t%d", array[i][j]);
		}
		printf("\n");
	}
}

void NewPos(int array[5][5], int row, int col)
{
	// 0=right,1=down,2=left,3=up
	if (dir == 0)
	{
		if (posy + 1 < col && array[posx][posy + 1] == 0)
		{
			posy++;
		}
		else
		{
			dir = (dir + 1) % 4;
			posx++;
		}
	}

	else if (dir == 1)
	{
		if (posx + 1 < row && array[posx + 1][posy] == 0)
		{
			posx++;
		}
		else
		{
			dir = (dir + 1) % 4;
			posy--;
		}
	}
	else if (dir == 2)
	{
		if (posy - 1 >= 0 && array[posx][posy - 1] == 0)
		{
			posy--;
		}
		else
		{
			dir = (dir + 1) % 4;
			posx--;
		}
	}
	else if (dir == 3)
	{
		if (posx - 1 >= 0 && array[posx - 1][posy] == 0)
		{
			posx--;
		}
		else
		{
			dir = (dir + 1) % 4;
			posy++;
		}
	}
}

void SpiralFill(int array[5][5], int row, int col)
{
	int i;
	// 0=right,1=down,2=left,3=up

	for (i = 0; i < row * col; i++)
	{
		// printf("posx= %d", posx);
		// printf("posy= %d", posy);
		array[posx][posy] = i + 1;
		NewPos(array, row, col);
	}
}