#include "holberton.h"

/**
* _strncat - Concatenates two strings, but only n elements of src
* @dest: Character buffer
* @src: Character source
* @n: Number of characters of src to append to dest
* Return: Dest buffer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	i++;
	while (dest[j] != '\0')
	{
		j++;
	}
	if (i < n)
	{
		for (k = 0; k < i; j++, k++)
			dest[j] = src[k];
	}
	else
	{
		for (k = 0; k < n; j++, k++)
			dest[j] = src[k];
	}
	return (dest);
}
