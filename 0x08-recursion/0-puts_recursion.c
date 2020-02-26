#include "holberton.h"

/**
* _puts_recursion - Prints a string with newline using recursion
* @s: Character pointer of string to print
*/

void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
