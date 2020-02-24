#include "holberton.h"
#define NULL 0

/**
* *_strstr - Locates a substring
* @haystack: String to be searched
* @needle: String to search for
* Return: Beginning of substring or null if not founde
*/

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0';)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && (*haystack == *pattern))
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (start);

		haystack = start + 1;
	}
	return (NULL);
}
