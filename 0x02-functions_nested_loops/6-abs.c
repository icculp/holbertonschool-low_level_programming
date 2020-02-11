#include <stdio.h>
#include "holberton.h"

/**
* _abs - Prints the absolute value of the number given as input
* @a: Integer input with sign
* Return: Absolute value of input
*/

int _abs(int a)
{
	int b;

if (a > 0)
	{
	return (a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else /*if (n < 0)*/
	{
		b = -1 * a;
		return (b);
	}
	/*_putchar('\n');*/
}
