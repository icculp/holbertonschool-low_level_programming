#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the first 50 numbers of fibonacci series
*
* Return: Void
*/

int main(void)
{
	long int j, k, l, j1, j2, k1, k2, l1, l2;
	int i;

	j = 1;
	k = 2;

	for (i = 0; i < 98; i++)
	{
		if (i < 97)
		{
			if (j < 1000000)
			{
			printf("%li, ", j);
			l = j + k;
			j = k;
			k = l; 
			j1 = j / 1000000;
			j2 = j % 1000000;
			k1 = k / 1000000;
			k2 = k % 1000000;
			l1 = j1 + k1;
			l2 = j2 + k2;
			}
			else
			{
			printf("%li%li, ",j1,j2);
			l1 = j1 + k1;
			l2 = j2 + k2;
			j1 = k1;
			j2 = k2;
			if (l1 >= 1000000)
			{
				l1 = (l2 / 1000000) + l1;
				l2 = l2 % 1000000;
			}
			k1 = l1;
			k2 = l2;
			}
		}
		else
		{
			printf("%li%li\n", j1,j2);
		}
	}
	return (0);
}
