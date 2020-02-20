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
		if (ch[0] >= 'a' && ch[0] <= 'z')
			ch[0] -= 32;
		else if ((ch[i] == '.' || ch[i] == '.' || ch[i] == ';'
		|| ch[i] == '!' || ch[i] == '?'
		|| ch[i] == '"' || ch[i] == ' ' || ch[i] == '	'
		|| ch[i] == '\n' || ch[i] == '('
		|| ch[i] == ')' || ch[i] == '{' || ch[i] == '}'))
		{
			if (ch[i + 1] >= 97 && ch[i + 1] <= 122)
			{
				ch[i + 1] -= 32;
			}
		}
		i++;
	}
	return (ch);
}
