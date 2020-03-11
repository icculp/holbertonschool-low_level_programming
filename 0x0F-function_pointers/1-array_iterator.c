#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_iterator - Executes function on each element of an array
* @array: Array to apply function to/iterate through
* @size: Size of array
* @action: Function to apply to array
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
