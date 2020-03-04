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
* *argstostr - Concatenates all arguments of a program
* @ac: Number of arguments plus exe
* @av: Argument strings
* Return: Arguments catted, or NULL if none
*/

char *argstostr(int ac, char **av)
{
	char *ray;
	int i = 0, j = 0, catlen = 0, inlen = 0, totlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		totlen += _strlen(av[i]);
	}
	ray = malloc(sizeof(char) * totlen + 1);
	if (ray == NULL)
	{
		free(ray);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		inlen = _strlen(av[i]);
		for (j = 0; j < inlen; j++, catlen++)
		{
			ray[catlen] = av[i][j];
		}
		ray[catlen++] = '\n';
	}
	ray[catlen] = '\0';
	return (ray);
}
