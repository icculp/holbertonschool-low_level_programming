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
* **strtow - Splits a string into words
* @str: String to split into words
* Return: Multidim array of words
*/

char **strtow(char *str)
{
	char **ray;
	int i = 0, j = 0, k = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	ray = (char **) malloc(100);
	if (ray == NULL)
	{
		free(ray);
		return (NULL);
	}
	while (1)
	{
		if (str[i] != ' ')
		{
			ray[i] = (char *) malloc(200);
			if (ray[i] == NULL)
			{
				for (; i >= 0; i--)
					free(ray[i]);
				free(ray);
				return (NULL);
			}
			ray[i][j++] = str[k++];
		}
		else
		{
			if (str[k] != ' ')
			{
				ray[i][j++] = '\0';
				i++;
			}
			else
			{
				i++, k++, j = 0;
			}}
		if (str[i] == '\0')
			break; }
	return (ray);
}
