#include "search_algos.h"

/**
* mini - finds minimum of two values
* @a: first value
* @b: second value
* Return: minimum of thw two
*/

int mini(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
* jump_search - jump search algorithm
* @array: Array to search
* @size: Size of array
* @value: Value to search for, -1 if not found
* Return: Index where value
*/

int jump_search(int *array, size_t size, int value)
{
	int a, s;

	if (array == NULL)
		return (-1);
	a = 0;
	s = sqrt((double)size);
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	while (array[mini(s, (int)size)] < value)
	{
		a = s;
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		s = s + sqrt((int)size);
		if (s >= (int)size)
		{
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", a, s);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a++;
		if (a == mini(s, (int)size))
			break;
	}
	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		return (a);
	}

	return (-1);
}
