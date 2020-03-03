#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

	j = (_strlen(s1) + _strlen(s2));
	ray = malloc(j);
	if (ray == NULL || (j == 0))
		return (NULL);
	ray = _strcpy(ray, s1);
	ray = _strcat(ray, s2);
	
	return (ray);
}
