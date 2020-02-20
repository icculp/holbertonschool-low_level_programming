#include "holberton.h"

/**
* reverse_array - Reverses the content of an array of integers
* @a: Pointer to an array
* @n: Number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i = 0, k = 0, t[];

	while (a[i] != '\0')
	{
		t[i] = a[i];
		i++
	}
	for (k = 0; i >= 0; i--, k++)
	{
		a[k] = t[i];
	}
}
