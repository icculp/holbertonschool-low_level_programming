#include <stdio.h>
#include "holberton.h"

/**
* _islower - Determines if the input value is a lower case letter
* @c: ASCII value of character given as input
* Return: Success
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
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
