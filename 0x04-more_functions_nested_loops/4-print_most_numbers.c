
#include <stdio.h>
#include "holberton.h"

/**
* print_most_numbers - Prints 0 to 9 without 2 or 4
*/

void print_most_numbers(void)
{
	char z = '0';

	for (z = '0'; z <= '9'; z++)
	{
		if (z == '2' || z == '4')
			continue;
		else
			_putchar(z);
	}
_putchar('\n');
}
