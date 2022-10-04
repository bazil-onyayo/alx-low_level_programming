#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to
 *		a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: a pointer to an array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	i = 0;
	j = 0;

	if (width <= 0 or height <= 0)
	{
		return (NULL);
	}

	grid = malloc((sizeof(int) * 3 * 4));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
