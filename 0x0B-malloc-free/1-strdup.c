#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - Returns a pointer to new memory space containing copy of string
* @str: String to copy into new memory spot
* Return: Pointer to duplicate string, or NULL if not enough memory
*/

char *_strdup(char *str)
{
	char *ray;
	int i = 0;

	ray = malloc(_strlen(str));
	if (ray == NULL || _strlen(str) == 0)
		return (NULL);
	while (i <= _strlen(str))
	{
		ray[i] = str[i];
		i++;
	}
	return (ray);
}
