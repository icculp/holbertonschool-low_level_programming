#include <stdio.h>
#include "holberton.h"

/**
* jack_bauer - Prints out every minutes and second of a 24 hour day
*
* Return: Absolute value of input
*/

void jack_bauer(void)
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
