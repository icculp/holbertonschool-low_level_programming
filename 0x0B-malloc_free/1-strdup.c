#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
* *_strdup - Returns a pointer to new memory space containing copy of string
* @str: String to copy into new memory spot
* Return: Pointer to duplicate string, or NULL if not enough memory
*/

char *_strdup(char *str)
{
	char *ray;
	int i = 0;

	ray = (char *) malloc(_strlen(str) + 1);
	if (ray == NULL || str == NULL)
		return (NULL);
	while (i <= _strlen(str))
	{
		ray[i] = str[i];
		i++;
	}
	return (ray);
}
