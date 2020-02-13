
#include <stdio.h>
#include "holberton.h"

/**
* print_line - Prints a line to the terminal
* @n: Number of times to display the underscore
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
_putchar('\n');
}
