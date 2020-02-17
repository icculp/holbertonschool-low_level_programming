#include "holberton.h"

/**
* swap_int - Swaps the values of two integers using a pointer
* @a: Pointer to first value
* @b: Pointer to second value
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
