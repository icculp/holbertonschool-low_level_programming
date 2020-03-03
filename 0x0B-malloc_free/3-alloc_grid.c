#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - Returns a pointer to 2 dim array of ints
* @width: Width of the array
* @height: Height of the array
* Return: Null on fail or pointer to array
*/

int **alloc_grid(int width, int height)
{
	int **ray;
	int i, j = 0, k;

	j = (sizeof(int) * height);
	ray = (int **) malloc(j);
	if (ray == NULL || width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ray[i] = malloc(height * sizeof(int));
		for (k = 0; k < width; k++)
		{
			ray[i][k] = 0;
		}
	}
	
	return (ray);
}
