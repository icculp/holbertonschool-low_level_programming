#include <stdio.h>
#include "holberton.h"

/**
* _isupper - Determines if the input value is a upper case letter
* @c: ASCII value of character given as input
* Return: Success
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		/*_putchar('1');*/
		return (1);
	}
	else
	{
		/*_putchar('0');*/
		return (0);
	}

	/*_putchar('\n');*/
}
