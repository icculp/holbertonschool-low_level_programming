#include "holberton.h"

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
	}
	return (0);
}
