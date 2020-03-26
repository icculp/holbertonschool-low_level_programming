#include "holberton.h"
#include <math.h>

/**
* get_bit - Returns value of a bit at given index
* @n: Deciman number to find bit index of
* @index: Index of bit to return
* Return: Bit 1 or 0, or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1, i = 0;

	for (i = 0; i < index; i++)
		mask = mask << 1;
	if (index > 31)
		return (-1);
	if ((n & mask))
		return (1);
	else if (!(n & mask))
		return (0);
	else
		return (-1);
}
