#include <stdio.h>
#include "holberton.h"

/**
* print_alphabet - Prints the alphabet in order without spaces
*/

void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
putchar('\n');
}
