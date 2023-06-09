#include "main.h"

/**
 * alloc_grid - creates a grid of 0's
 * @width: the width
 * @height: the height
 *
 * Return: 2d array pointer
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **s;

	if (width < 1 || height < 1)
		return (NULL);
	s = malloc(sizeof(int *) * (height));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
