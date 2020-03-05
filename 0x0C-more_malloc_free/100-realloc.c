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
	int *ray;
	int index = 0;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ray = malloc(new_size);
		return (ray);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size > old_size)
	{
		ray = malloc(new_size);
		if (ray == NULL)
			return (NULL);
		for (index = 0; *((char *)ptr + index) != '\0'; index++)
		{
			ray[index] = *((char *)ptr + index);
		}
	}
	free(ptr);
	return (ray);
}
