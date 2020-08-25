#include "search_algos.h"

void pray(int *array, int l, int r);
int binary_search2(int *array, int size, int value, int l);

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
* exponential_search - exponential search algorithm
* @array: Array to search
* @size: Size of array
* @value: Value to search for, -1 if not found
* Return: Index where value
*/

int exponential_search(int *array, size_t size, int value)
{
	int b1 = 1, b2;

	if (array == NULL)
		return (-1);
	while (b1 < (int)size && array[b1] < value)
	{
		b2 = b1;
		printf("Value checked array[%d] = [%d]\n", b1, array[b1]);
		b1 *= 2;
	}
	if (b1 >= (int)size)
		b1 = (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", b2, b1);
	return (binary_search2(array, mini(b1 + 1, (int)size), value, b2));
}

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
* binary_search2 - bineary search algorithm
* @array: Array to search
* @size: Size of array
* @value: Value to search for, -1 if not found
* @l: Lowest index to start searching at
* Return: Index where value
*/

int binary_search2(int *array, int size, int value, int l)
{
	int r, m;

	if (array == NULL)
		return (-1);

	r = (int)size - 1;
	while (l < r)
	{
		m = (l + r) / 2;
		pray(array, l, r);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
		{
			return (m);
		}
	}
	pray(array, l, r);

	return (-1);
}
