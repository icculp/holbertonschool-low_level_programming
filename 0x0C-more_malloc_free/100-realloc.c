#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_realloc - Reallocates a memory block, malloc and free
* @ptr: Pointer of memory space to reallocate
* @old_size: Size of the original pointer
* @new_size: Size of the new memory space
* Return: Pointer to new memory space, or NULL if fail
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ray;
	unsigned int index = 0;


	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ray = malloc(new_size);
	if (ray == NULL)
		return (NULL);
	if (ptr == NULL)
		return (ray);
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
		{
			ray[index] = *((char *)ptr + index);
		}
	}
	free(ptr);
	return (ray);
}
