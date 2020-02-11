#include <stdio.h>
#include "holberton.h"

/**
* print_last_digit - Prints the last digit of the number given
* @d: Integer input
* Return: The value of the last digit
*/

int print_last_digit(int d)
{
	int b = d % 10;
	int c = -b;
	int e = -d;
	printf("e %d\n", e);
	printf("b %d\n", b);
	printf("c %d\n", c);
	printf("d %d\n", d);
	if (d < 0)
	{
		/*d = (-1 * d);*/
		printf("-d %d\n", d);
		b = (d % 10);
		printf("if (negative) b %d\n", b);
	}
	else
	{
		b = (d % 10);
		printf("b if not negative %d\n", b);
	}
	_putchar(b + '0');
	return (b);
}
