#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *array_range - Creates an array of integers
* @min: Fill values starting at min
* @max: Fill values up to max
* Return: Pointer to arrry
*/

int *array_range(int min, int max)
{
	int *ray;
	int mincpy = min, index = 0, numvals = max - min;

	if (min > max)
		return (NULL);
	ray = malloc((numvals + 1) * sizeof(int));
	if (ray == NULL)
		return (NULL);

	for (; mincpy <= max; mincpy++, index++)
	{
		ray[index] = mincpy;
	}
	return (ray);
}
