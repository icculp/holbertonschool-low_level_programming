#include "holberton.h"

/**
* print_array - Prints the n elements of an array of integers
* @a: Array pointer
* @n: Number of elements in array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
