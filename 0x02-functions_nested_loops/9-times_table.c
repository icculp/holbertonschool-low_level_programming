#include <stdio.h>
#include "holberton.h"

/**
* times_table - Prints out the times table up to 9x9
*
* Return: Void
*/

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				continue;
			}
		}
		_putchar('\n');
	}
}
