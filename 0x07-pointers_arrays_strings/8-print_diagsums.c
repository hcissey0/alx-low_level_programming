#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals
 * @a: the array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += a[i][j];
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if ((i + j + 1) == size)
				diag2 += a[i][j];
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
