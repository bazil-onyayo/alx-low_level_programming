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
	int **matrix;
	int i;
	int j;

	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (; j <= i; j++)
				free(matrix[j]);
			free(matrix);
		}
	}

	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
