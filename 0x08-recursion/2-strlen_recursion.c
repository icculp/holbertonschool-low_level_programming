#include "holberton.h"

/**
* _strlen_recursion - Returns the length of a string
* @s: Character pointer of string to count
* Return: Length of string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (1 + _strlen_recursion(++s));
	}
	else
		return (len);
	return (0);
}
