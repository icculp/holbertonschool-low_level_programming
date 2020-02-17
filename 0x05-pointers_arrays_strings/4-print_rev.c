#include "holberton.h"

/**
* print_rev - Prints a string followed by a newline to stdout in reverse
* @s: String as input
*/

void print_rev(char *s)
{
	int j, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
