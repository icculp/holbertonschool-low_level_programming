#include "holberton.h"
#include <stdio.h>

/**
* rot13 - Converts a string using rot13
* @ch: String to convert
* Return: Converted string
*/

char *rot13(char *ch)
{
	int i = 0, j;
	char r[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (ch[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (ch[i] == r[j])
			{
				ch[i] = l[j];
				break;
			}
		}
		i++;
	}
	return (ch);
}
