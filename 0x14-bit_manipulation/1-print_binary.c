#include "holberton.h"
#include <math.h>

/**
* print_binary - Converts a positive decimal to binary and prints
* @n: Deciman number to convert and print
*/

void print_binary(unsigned long int n)
{
	char ch;
	char bin[1024];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		if ((n & 1) == 0)
			ch = '0';
		else
			ch = '1';
		bin[i] = ch;
		i++;
		n = n >> 1;
	}
	i--;
	while (i >= 0)
	{
		_putchar(bin[i]);
		i--;
	}
}
