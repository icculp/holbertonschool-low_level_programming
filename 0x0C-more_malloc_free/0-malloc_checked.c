#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *malloc_checked - Allocated memory using malloc
* @b: Amount of memory to allocate?
* Return: 98 on error, or pointer b
*/

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return ((void *)c);
}
