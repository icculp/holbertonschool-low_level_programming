#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - Prints all numbers to 98 in either direction
* @n: Integer as input
* Return: Void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n == 98)
	{
		;
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
