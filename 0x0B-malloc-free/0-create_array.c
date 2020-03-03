#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - Creates an array of chars initizlied with secific value
* @size: Size of the array
* @c: Character to initialize elements of the array with
* Return: Null or array pointer
*/

char *create_array(unsigned int size, char c)
{
	char *ray;
	unsigned int i = 0;

	ray = malloc(size);
	if (ray == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		ray[i] = c;
		i++;
	}
	return (ray);
}
