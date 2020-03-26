#include "holberton.h"
#include <math.h>

/**
* print_binary - Converts a positive decimal to binary and prints
* @n: Deciman number to convert and print
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
