
#include <stdio.h>
#include "holberton.h"

/**
* print_numbers - Prints 0 to 9
*/

void print_numbers(void)
{
	char z = '0';

	for (z = '0'; z <= '9'; z++)
	{
		_putchar(z);
	}
_putchar('\n');
}
