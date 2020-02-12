#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the first 50 numbers of fibonacci series
*
* Return: Void
*/

int main(void)
{
	long int i, j, k, l;

	j = 1;
	k = 2;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
		printf("%ld, ", j);
		l = j + k;
		j = k;
		k = l;
		}
		else
		{
		printf("%ld\n", j);
		}
	}
	return (0);
}
