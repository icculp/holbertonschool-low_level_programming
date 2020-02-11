#include <stdio.h>
#include "holberton.h"

/**
* print_last_digit - Prints the last digit of the number given
* @d: Integer input
* Return: The value of the last digit
*/

int print_last_digit(int d)
{
	int b;

	if (d < 0)
	{
		d = (d * -1);
	}
	b = (d % 10);
	_putchar(b + '0');
	return (b);
}
