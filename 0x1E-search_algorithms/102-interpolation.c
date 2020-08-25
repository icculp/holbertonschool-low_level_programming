#include "search_algos.h"

/**
* interpolation_search - interpolation search algorithm
* @array: Array to search
* @size: Size of array
* @value: Value to search for, -1 if not found
* Return: Index where value
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);
	pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
	if (pos >= (int)size)
	{
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
				return (low);
			}
			return (-1);
		}
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
