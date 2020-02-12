#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the first 50 numbers of fibonacci series
*
* Return: Void
*/

int main(void)
{
	double j, k, l;
	int i;

	j = 1;
	k = 2;

	for (i = 0; i < 91; i++)
	{
		if (i < 90)
		{
		printf("%.0f, ", j);
		l = j + k;
		j = k;
		k = l;
		}
		else
		{
			printf("%.0f\n", j);
		}
	}
	return (0);
}
