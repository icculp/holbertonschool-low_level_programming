#include <stdio.h>
#include "holberton.h"

/**
* times_table - Prints out the times table up to 9x9
*
* Return: Times table
*/

void times_table(void)
{
	int hours = 0, minutes = 0, seconds = 0;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			for (seconds = 0; seconds < 60; seconds++)
			{
				_putchar('0' + (hours / 10));
				_putchar('0' + (hours % 10));
				_putchar(':');
				_putchar('0' + (minutes / 10));
				_putchar('0' + (minutes % 10));
				_putchar(':');
				_putchar('0' + (seconds / 10));
				_putchar('0' + (seconds % 10));
				_putchar('\n');
			}
		}
	}
}
