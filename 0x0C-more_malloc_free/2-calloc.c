#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - Allocates memory for an array using malloc
* @nmemb: Number of elements in the array
* @size: Number of bytes in each element of the array
* Return: NULL if fail or 0, or pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ray;
	unsigned int i, j = 0;

	j = (size * nmemb);
	ray = malloc(j);
	if (ray == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ray[i] = 0;
	}
	return (ray);
}
