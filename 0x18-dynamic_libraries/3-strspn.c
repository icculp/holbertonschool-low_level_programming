#include "holberton.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: Initial segment to get length
* @accept: the bytes to check for
* Return: Number of bytes in s containing bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0, k = 0, l;

	while (s[j] != '\0')
	{
		j++;
	}
	while (accept[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < j; i++)
	{
		for (l = 0; l < k; l++)
		{
			if (s[i] == accept[l])
				break;
		}
		if (l == k)
			break;
	}
	return (i);
}
