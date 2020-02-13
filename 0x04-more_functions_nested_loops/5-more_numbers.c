
#include <stdio.h>
#include "holberton.h"

/**
* more_numbers - Prints 0 to 14 ten times
*/

void more_numbers(void)
{
	int i;
	char z = '0';
	char y = '0';

	for (i = 0; i <= 14; i++, z++)
	{
		if (i > 9)
		{
			z = '1';
		}
		_putchar(z);
		if (i > 9)
		{
			_putchar(y);
			y++;
		}
	}
_putchar('\n');
}
