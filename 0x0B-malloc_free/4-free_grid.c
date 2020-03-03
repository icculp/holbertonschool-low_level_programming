#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - Frees a 2d array previously created by alloc
* @grid: Grid pointer to be freedy
* @height: Height of array
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
