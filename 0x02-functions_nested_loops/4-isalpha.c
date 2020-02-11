#include <stdio.h>
#include "holberton.h"

/**
* _isalpha - Determines whether the input value is an a letter in the alphabet
* @c: Number given as input
* Return: Success
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
