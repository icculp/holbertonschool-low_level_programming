#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the first 50 numbers of fibonacci series
*
* Return: Void
*/

int main(void)
{
	unsigned long int j, k, l;
	int i;

	j = 1;
	k = 2;

	for (i = 0; i < 98; i++)
	{
		if (i < 97)
		{
		printf("%lu, ", j);
		l = j + k;
		j = k;
		k = l;
		}
		else
		{
			printf("%lu\n", j);
		}
	}
	return (0);
}
