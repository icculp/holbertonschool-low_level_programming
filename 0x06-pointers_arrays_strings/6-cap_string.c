#include "holberton.h"

/**
* cap_string - Capitalizes every word in a string
* @ch: String to convert
* Return: Converted string
*/

char *cap_string(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		if ((ch[i - 1] == '.' || ch[i - 1] == '.' || ch[i - 1] == ';' || ch[i - 1] == '!' || ch[i - 1] == '?'
		|| ch[i - 1] == '"' || ch[i - 1] == ' ' || ch[i - 1] == '	' || ch[i - 1] == '\n' || ch[i - 1] == '('
		|| ch[i - 1] == ')' || ch[i - 1] == '{' || ch[i - 1] == '}'))
		{
			if (ch[i] >= 97 && ch[i] <= 122)
				ch[i] -= 32;
		}
		i++;
	}
	return (ch);
}
