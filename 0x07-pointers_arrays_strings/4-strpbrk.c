#include "holberton.h"
#define NULL 0

/**
* *_strpbrk - Searches a string for any set of characters
* @s: String to be searched
* @accept: the bytes to check for
* Return: Number of bytes in s containing bytes from accept, or null if none
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0, k = 0, l;

	while (s[j] != '\0')
	{
		j++;
	}
	while (accept[k] != '\0')
	{
		k++;
	}
	for (; *s; s++)
	{
		for (l = 0; l < k; l++)
		{
			if (*s == accept[l])
				return ((char*)(s));
		}
	}
	return (NULL);
}
