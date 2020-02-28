#include <stdio.h>
#include "holberton.h"

/**
* _isdigit - Determines whether the input value is an a digit
* @c: Number given as input in ASCII
* Return: Success
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
