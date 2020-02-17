#include "holberton.h"

/**
* rev_string - Reverses a string using pointers
* @s: String as input
*/

void rev_string(char *s)
{
	int j, k = 0, i = 0;
	char t[50];

	while (s[i] != '\0')
	{
		t[i] = s[i];
		i++;
	}
	for (j = i; j > 0; j--)
	{
		s[k] = t[j - 1];
		k++;
	}
}
