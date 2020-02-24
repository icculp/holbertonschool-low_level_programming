#include "holberton.h"

/**
* *_memcpy - Copies the memory area
* @dest: buffer to receive copied memoryd
* @src: source to copy memory of
* @n: Copy n bytes of memory
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
