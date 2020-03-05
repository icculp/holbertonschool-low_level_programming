#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *);

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
		{
			dest[j] = src[k];
		}
	}
	else
	{
		for (k = 0; k < n; j++, k++)
			dest[j] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}

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

/**
* _strlen - Determines the length of the string manually
* @s: Pointer to array of characters
* Return: Value of length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* *string_nconcat - Concatenates two strings
* @s1: First string to concat
* @s2: Second string to concat
* @n: Number of bytes to concat
* Return: 98 on error, or pointer b
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ray;
	int j = 0;

	if (s1 == NULL)
	{	s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	j = (_strlen(s1) + n + 1) * sizeof(char);
	ray = malloc(j);
	if (ray == NULL)
	{
		return (NULL);
	}
	ray = _strcpy(ray, s1);
	if (n <= (unsigned int)_strlen(s2))
		ray = _strncat(ray, s2, (int)n);
	else
		ray = _strncat(ray, s2, _strlen(s2));

	return (ray);
}
