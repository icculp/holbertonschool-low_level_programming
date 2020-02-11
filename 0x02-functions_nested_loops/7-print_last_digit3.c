#include <stdio.h>
#include "holberton.h"

/**
* print_last_digit - Prints the last digit of the number given
* @d: Integer input
* Return: The value of the last digit
*/

int print_last_digit(int d)
{
	int b = (d % 10);
	int c = -b;

	if (d < 0)
	{
		_putchar(c + '0');
		return (c);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
