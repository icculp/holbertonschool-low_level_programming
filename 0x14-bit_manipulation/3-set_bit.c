#include "holberton.h"
#include <math.h>

/**
* set_bit - Sets bit to 1 at given index
* @n: Pointer to number to set bit of
* @index: Index of bit to set to 1
* Return: 1 on success, -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
