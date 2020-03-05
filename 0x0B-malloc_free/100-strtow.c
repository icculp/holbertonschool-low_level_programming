#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* wordcount - Counts number of words
* @str: String to count words
* Return: Count of words
*/
int wordcount(char *str)
{
	int count = 0;

	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		while (*str == ' ')
		{
		str++;
		}
		if (*str != '\0')
			count++;
		while (*str != ' ')
		{
			if (*str != '\0')
				str++;
			else
				break;
		}
	}
	return (count);
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
* **strtow - Splits a string into words
* @str: String to split into words
* Return: Multidim array of words
*/

char **strtow(char *str)
{
	char **ray;
	int i = 0, j = 0, wc = 0, inlen = 0, totlen = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = wordcount(str);
	if (wc == 0)
		return (NULL);
	ray = malloc((wc + 1) * sizeof(char *));
	if (ray == NULL)
	{
		free(ray);
		return (NULL); }
	for (i = 0; i < wc; i++)
	{
		while (str[totlen] == ' ')
			totlen++;
		for (inlen = 0; str[totlen + inlen] != ' ' && str[totlen + inlen]; inlen++)
			;
		ray[i] = malloc(sizeof(char) * (inlen + 1));
		if (ray[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ray[i]);
			free(ray);
			return (NULL); }
		for (j = 0; j < inlen; j++, totlen++)
		{
			ray[i][j] = str[totlen];
		}
		if (str[totlen] != ' ')
			ray[i][j] = '\0';
		if (str[totlen] == '\0')
			break;
	}
	ray[i] = NULL;
	return (ray); }
