#include "holberton.h"
#include <math.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: Binary number as a string
* Return: Unsigned int of binary input
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
		len++;
	}
	i--, len--;
	while (i < 4294967295)
	{
		if (b[i] == '0')
		{
			i--;
			continue;
		}
		else if (b[i] == '1')
		{
			conv += (1 << (len - i));
			i--;
		}
		else
			return (0);
	}
	return (conv);
}
