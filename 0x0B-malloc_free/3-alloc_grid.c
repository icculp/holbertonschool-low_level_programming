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
	int i, j = 0;

	j = (width * height) * 4 + 1;
	ray = malloc(j);
	if (ray == NULL || width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i <= j; i++, ray++)
		*ray = 0;
	
	return (ray);
}
