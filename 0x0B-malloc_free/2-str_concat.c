#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
* *str_concat - Concatenates two strings with memeory in mind
* @s1: String one to concat
* @s2: String two to contat to s1
* Return: Pointer to new memory space containing both strings, or NULL
*/

char *str_concat(char *s1, char *s2)
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
	j = (_strlen(s1) + _strlen(s2) + 1);
	ray = (char *) malloc(j);
	if (ray == NULL || (j == 0))
		return (NULL);
	ray = _strcpy(ray, s1);
	ray = _strcat(ray, s2);
	return (ray);
}
