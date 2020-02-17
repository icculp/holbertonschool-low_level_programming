#include "holberton.h"

/**
* puts_half - Prints the second half of a string
* @str: String as input
*/

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
		j = i / 2 + 1;
	else
		j = i / 2;
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
