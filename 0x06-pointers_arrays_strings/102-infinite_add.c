#include "holberton.h"

/**
* infinite_add - Adds two numbers stored as integers
* @n1: First string int to add
* @n2: Second string int to add
* @r: Buffer to store added values
* @size_r: Size of the array buffer r[]
* Return: Character array of sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, carry = 0, len1 = 0, len2 = 0, rr = 0, rr2 = 0;

	if (((n1[0] - '0') + (n2[0] - '0')) > 9)
		rr++;
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 >= len2)
		rr += len1;
	else if (len2 > len1)
		rr += len2;
	len1--;
	len2--;
	if (rr >= size_r)
		return (0);
	rr--;
	rr2 = rr + 1;
	for (; len1 >= 0 || len2 >= 0 || rr >= 0; len1--, len2--, rr--)
	{
		if (len1 < 0 && len2 >= 0)
			sum = (n2[len2] - '0') + carry;
		else if (len2 < 0 && len1 >= 0)
			sum = (n1[len1] - '0') + carry;
		else if (len1 >= 0 && len2 >= 0)
			sum = (n1[len1] - '0') + (n2[len2] - '0') + carry;
		else
			sum = carry;
		carry = sum / 10;
		sum = sum % 10;
		r[rr] = sum + '0';
		while (rr2 < size_r)
		{
			r[rr2] = '\0';
			rr2++;
		}
	}

	return (r);
}
