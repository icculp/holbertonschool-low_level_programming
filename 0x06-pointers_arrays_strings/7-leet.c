#include "holberton.h"

/**
* leet - Converts string into leetspeak
* @ch: String to convert
* Return: Converted string
*/

char *leet(char *ch)
{
	int i = 0, j;
	int r[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int l[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (ch[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (ch[i] == r[j])
				ch[i] = l[j];
		}
		i++;
	}
	return (ch);
}
