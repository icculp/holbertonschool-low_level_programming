#include <stdio.h>
#include "holberton.h"

/**
* print_sign - Prints the number of the input given as an integer
* @n: Integer given as input value
* Return: Success
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else /*if (n < 0)*/
	{
		_putchar('-');
		return (-1);
	}
	/*_putchar('\n');*/
}
