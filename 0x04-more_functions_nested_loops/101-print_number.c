#include <stdio.h>
#include "holberton.h"

/**
* print_number - Prints the number given using putchar
* @n: Number given as input
*/

void print_number(int n)
{
	int temp, factor = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else if (n == 0)
		_putchar('0');

	temp = n;
	while (temp)
	{
		temp = temp / 10;
		factor = factor * 10;
	}
	while (factor > 1)
	{
		factor = factor / 10;
		_putchar((n / factor) + '0');
		n = n % factor;
	}
}
