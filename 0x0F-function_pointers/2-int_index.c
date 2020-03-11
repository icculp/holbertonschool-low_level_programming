#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* int_index - Searches for an integer within an array
* @array: Array to search through
* @size: Size of array
* @cmp: Compare function that compares each index to int searching for
* Return: If none match, -1; if match return index of first value
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
