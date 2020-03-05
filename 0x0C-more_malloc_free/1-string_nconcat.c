#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *);

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
	unsigned int j = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
	{	s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	if (n < lens2)
		lens2 = n;
	j = (lens1 + lens2 + 1) * sizeof(char);
	ray = malloc(j);
	if (ray == NULL)
	{
		return (NULL);
	}
	ray = _strcpy(ray, s1);
	for (j = 0; j < lens2; j++)
	{
		ray[lens1 + j] = s2[j];
	}
	ray[lens1 + lens2] = '\0';

	return (ray);
}
