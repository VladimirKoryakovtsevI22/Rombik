#include <iostream>

void zapolnenie(char(*matrix)[10])
{
	int x = 5;
	int y = 5;
	while (true)
	{
		if (matrix[x + 1][y + 1] != '*')
		{
			matrix[x + 1][y + 1] = '*';
			x = x + 1;
			y = y + 1;
		}
		else if (matrix[x][y + 1] != '*')
		{
			matrix[x][y + 1] = '*';
			x = x;
			y = y + 1;
		}
		else if (matrix[x - 1][y + 1] != '*')
		{
			matrix[x - 1][y + 1] = '*';
			x = x - 1;
			y = y + 1;
		}
		else if (matrix[x - 1][y] != '*')
		{
			matrix[x - 1][y] = '*';
			x = x - 1;
			y = y;
		}
		else if (matrix[x - 1][y - 1] != '*')
		{
			matrix[x - 1][y - 1] = '*';
			x = x - 1;
			y = y - 1;
		}
		else if (matrix[x][y - 1] != '*')
		{
			matrix[x][y - 1] = '*';
			x = x;
			y = y - 1;
		}
		else if (matrix[x + 1][y - 1] != '*')
		{
			matrix[x + 1][y - 1] = '*';
			x = x + 1;
			y = y - 1;
		}
		else if (matrix[x + 1][y] != '*')
		{
			matrix[x + 1][y] = '*';
			x = x + 1;
			y = y;
		}
		else break;
	
	}
}

int main()
{
	char matrix[10][10] =
	{
		{' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' '},
		{' ', ' ', ' ', '*', '*', ' ', '*', '*', ' ', ' '},
		{' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', ' '},
		{' ', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*'},
		{' ', ' ', '*', '*', ' ', ' ', ' ', '*', '*', ' '},
		{' ', ' ', ' ', '*', '*', ' ', '*', '*', ' ', ' '},
		{' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
	};
	
	zapolnenie(matrix);
	for (int i = 0; i < 10; i++)
	{ 
		for (int j = 0; j < 10; j++)
			printf("%c", matrix[i][j]);
		printf("\n");
	}
	return 0;
}