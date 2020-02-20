#include "holberton.h"

/**
* string_toupper - Converts each character to an upper case char
* @ch: Character to convert
* Return: Success
*/

char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 32;
		i++;
	}
	return (ch);
}
