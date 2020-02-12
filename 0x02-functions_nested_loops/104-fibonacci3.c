#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the first 50 numbers of fibonacci series
*
* Return: Void
*/

int main(void)
{
	long int j, j1, j2, k, k1, k2, l1, l2;
	int i;

	j = 1;
	k = 2;
	j1 = j / 1000000;
	j2 = j % 1000000;
	k1 = k / 1000000;
	k2 = k % 1000000;

	for (i = 0; i < 98; i++)
	{
		if (i < 85)
		{
		printf("%ld, ", j);
		l = j + k;
		j = k;
		k = l;
		}
		else if (i >= 85 && i < 97)
		{
		l1 = l / 1000000;
		l2 = l % 1000000;
		
		}
		else
		{
			printf("%ld%ld\n", j1, j2);
		}
	}
	return (0);
}
