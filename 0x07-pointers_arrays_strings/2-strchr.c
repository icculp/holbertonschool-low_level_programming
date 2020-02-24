#include "holberton.h"
#define NULL 0

/**
* *_strchr - Locates a character in a string
* @s: String to locate the character in
* @c: character to be located
* Return: pointer to first occurence, or null if not found
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else if (!*s)
			return (NULL);
	}
	return (NULL);
}
