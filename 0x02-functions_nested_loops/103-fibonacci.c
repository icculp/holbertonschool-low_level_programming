#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the first 50 numbers of fibonacci series
*
* Return: Void
*/

int main(void)
{
	long int i, j, k, l, evensum = 0;

	j = 1;
	k = 2;

	for (i = 0; i < 32; i++)
	{
		if (i < 32)
		{
			if (j % 2 == 0)
			{
				evensum += j;
			}
		l = j + k;
		j = k;
		k = l;
		}
	}
	printf("%ld\n", evensum);
	return (0);
}
