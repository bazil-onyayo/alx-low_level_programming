#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 *		created by your alloc_grid function.
 * @grid: a pointer to array of pointers to type int
 * @height: number of rows of the 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
