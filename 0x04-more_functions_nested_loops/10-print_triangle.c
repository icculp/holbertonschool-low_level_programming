#include <stdio.h>
#include "holberton.h"

/**
* print_triangle - Prints a triangle using hashtag characters.
* @size: Size of the triangle to be displayed to the terminal.
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = size - 1;
			for (; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
