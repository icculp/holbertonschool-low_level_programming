#include <stdio.h>
#include "holberton.h"

/**
* print_diagonal - Prints a space and \ as many times as n
* @n: Number of times to display the the diagonal
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
