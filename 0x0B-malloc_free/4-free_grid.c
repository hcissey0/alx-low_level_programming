#include "main.h"

/**
 * free_grid - frees the memory allocated by the alloc func
 * @grid: the grid
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; grid[i]; j++)
			free(grid[j]);
		free(grid);
	}
}
