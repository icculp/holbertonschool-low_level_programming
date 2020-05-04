#include "holberton.h"

/**
* *_strcpy - Copies a string pointed to by src including null char to buffer
* @dest: A buffer to receive the copied string
* @src: The pointer of the string to the copied
* Return: Value of buffer dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;
	i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}
