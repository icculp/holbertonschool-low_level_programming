#include "holberton.h"

/**
* _strcat - Concatenates two strings
* @dest: Character buffer
* @src: Character source
* Return: On success 1.
*/

char *_strcat(char *dest, char *src)
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
	for (k = 0; k < (i); j++, k++)
	{
		dest[j] = src[k];
	}
	return (dest);
}
