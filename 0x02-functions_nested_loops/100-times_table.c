#include <stdio.h>
#include "holberton.h"

/**
* print_times_table - Prints out times table of the number given.
* @n: Integer given for input
* Return: Success
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		;
	else
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= n; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k >= 100)
			{
				_putchar((k / 100) + '0');
				_putchar(((k % 100) / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
}}}
