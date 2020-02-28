#include "holberton.h"

/**
* _strncpy - Copies two strings, but only n elements of src
* @dest: Character buffer
* @src: Character source
* @n: Number of characters of src to append to dest
* Return: Dest buffer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	i++;
	if (i < n)
	{
		for (k = 0; k < i; j++, k++)
			dest[j] = src[k];
		for (; k < n; j++, k++)
			dest[j] = '\0';
	}
	else
	{
		for (k = 0; k < n; j++, k++)
			dest[j] = src[k];
	}
	return (dest);
}
