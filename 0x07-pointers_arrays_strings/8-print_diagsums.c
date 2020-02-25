#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of two diagonals in square matrix of integers
* @a: array of numbers to add
* @size: Size of the array (square)
*/

void print_diagsums(int *a, int size)
{
	int i, j = 0;
/*nt **b = &a;
*/
	for (i = 0; i < size; i++)
	{
		j += *(a + i*size + i);
	}
	printf("%d, ", j);
	for (i = 1, j = 0; i <= size; i++)
	{
		j += *(a + i*size - i);
	}
	printf("%d\n", j);
}
