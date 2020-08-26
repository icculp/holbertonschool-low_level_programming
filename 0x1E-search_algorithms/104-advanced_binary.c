#include "search_algos.h"

/**
* pray - Prints array
* @array: Array to print
* @l: lowest index to print
* @r: highest index to print
*/

void pray(int *array, int l, int r)
{
	printf("Searching in array: ");
	for (; l <= r; l++)
	{
		printf("%d", array[l]);
		if (l != r)
			printf(", ");
	}
	printf("\n");
}

/**
* bin_rec - binary search recursion
* @a: array
* @v: value to search
* @l: low index
* @r: high index
* Return: Value's index or -1
*/

int bin_rec(int *a, int v, int l, int r)
{
	int m = l + (r - l) / 2;

	/**
	*if (l == r)
	*{
	*	pray(a, l, r);
	*	return (-1);
	*}
	*/

	if (r >= l)
	{
		m = l + (r - l) / 2;
		if (a[m] == v)
		{
			pray(a, l, r);
			if (a[m - 1] == v)
				return (bin_rec(a, v, l, m));
			return (m);
		}
		if (a[m] > v)
		{
			pray(a, l, r);
			return (bin_rec(a, v, l, m - 1));
		}
		else
		{
			pray(a, l, r);
			return (bin_rec(a, v, m + 1, r));
		}
	}
	return (-1);
}

/**
* advanced_binary - binary search using recursion and finding 1st instance
* @array: Array to search
* @size: Size of array
* @value: Value to search for, -1 if not found
* Return: Index where value
*/

int advanced_binary(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);
/**	pray(array, 0, (int)size - 1);*/

	return (bin_rec(array, value, 0, (int)size - 1));
}
