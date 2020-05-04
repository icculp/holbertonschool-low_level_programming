#include "holberton.h"

/**
* *_memset - Fills memory with a consant byte
* @s: pointer to be returned
* @b: b to fill memory
* @n: n elements of memory to fill
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
