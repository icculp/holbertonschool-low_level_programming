#include "holberton.h"

/**
* reverse - Reverses a string using recursion
* @str: String as input
* Return: The reversed string
*/

char *reverse(char *str)
{
	int i = 0;
	char *rev = str;

	if (*str)
	{
		reverse(str + 1);
		rev[i++] = *str;
	}
	return (rev);
}

/**
* compare - Compares the original string with the reversed string
* @s: Source string
* @rev: Reversed string
* Return: 1 if equal 0 if not
*/

int compare(char *s, char *rev)
{
	if (*s == *rev)
		return (compare(s + 1, rev + 1));
	else if (*s != *rev)
		return (0);
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
	char *rev2;
	
	rev2 = reverse(s);

	return (compare(s, rev2));
}
