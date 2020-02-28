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

/**
* reverse - Reverses a string using recursion
* @str: String as input
* @ptrev: Reversed string
* @i: Iterator
* Return: The reversed string
*/

char *reverse(char *str, char *ptrev, int i)
{
	int j = _strlen_recursion(str) - 1;

	if (str[i] != '\0')
	{
		reverse(str, ptrev, i + 1);
		ptrev[j - i] = str[i];
	}
	return (ptrev);
}

/**
* compare - Compares the original string with the reversed string
* @s: Source string
* @rev: Reversed string
* @i: Iterator
* Return: 1 if equal 0 if not
*/

int compare(char *s, char *rev, int i)
{
	if (s[i] != '\0')
	{
	if (*(s + i) == *(rev + i))
		return (compare(s, rev, i + 1));
	else if (*(s + i) != *(rev + i))
		return (0);
	else
		return (1);
	}
	else
		return (1);
}

/**
* is_palindrome - Checks if a string is a palindrome
* @s: String to be checked
* Return: 1 if yes 0 if no (empty is 1)
*/

int is_palindrome(char *s)
{
	char ptrev[100];

	return (compare(s, reverse(s, ptrev, 0), 0));
}
