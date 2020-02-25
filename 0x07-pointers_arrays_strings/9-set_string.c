#include "holberton.h"
#include <stdio.h>

/**
* set_string - Sets value of a pointer to a char
* @s: Source string to copy to the other
* @to: Destination string to be copied to
*/

void set_string(char **s, char *to)
{
	*s = to;
}
