#include "holberton.h"
#include <math.h>

/**
* flip_bits - Returns num of bits to flip to change one num to another
* @n: Number to be changed
* @m: Number to change to
* Return: Number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, flips = 0, i = 32;

	xor = n ^ m;
	while (i > 0)
	{
		if (xor & 1)
			flips++;
		i--;
		xor = xor >> 1;
	}
	return (flips);
}
