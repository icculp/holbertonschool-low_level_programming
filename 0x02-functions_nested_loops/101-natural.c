#include <stdio.h>
#include "holberton.h"

/**
* print_multiples_35 - Prints all multiples of 3 or 5 under 1024.
*
* Return: Void
*/

int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (j);
}
