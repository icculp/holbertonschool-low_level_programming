#include "holberton.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: Character pointer of string to print
*/

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
