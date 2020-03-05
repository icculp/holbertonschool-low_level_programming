#include <stdlib.h>
#include "holberton.h"

int word_count(char *str);
/**
 * strtow - makes an array of strings seperated into words
 * @str: string to seperate
 *
 * Return: Null if failed, pointer to the array otherwise
 */
char **strtow(char *str)
{
	char **word;
	int i, blank, len, j = 0, flag = 0, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	blank = word_count(str);
	if (blank == 0)
		return (NULL);
	blank++;
	word = malloc(blank  * sizeof(char *));
	if (word == 0)
	{
		free(word);
		return (NULL);
	}
	for (i = 0, len = 0; str[len]; len++)
	{
		if (str[len] == ' ')
			continue;
		else
		{
			for (k = 0; str[len] != ' ' && str[len]; len++, k++)
			{
				;
			}
			word[i] = malloc(sizeof(char) * (k + 1));
			if (word[i] == NULL)
			{
				for (len = 0; len <= i; len++)
					free(word[len]);
				free(word);
				return (NULL);
			}
			i++;
			if (str[len] == '\0')
				break;
		}
	}
	flag = 0;
	for (i = 0, j = 0, len = 0; str[len]; len++)
	{
		if (str[len] == ' ')
		{
			if (str[len + 1] == ' ')
				;
			else
			{
				if (flag == 1)
				{
					word[i][j] = '\0';
					i++;
					j = 0;
				}
			}
			continue;
		}
		word[i][j] = str[len];
		flag = 1;
		j++;
	}
	word[i + 1] = NULL;
	return (word);
}

/**
 * word_count - counts the number of words in a string
 * @str: input string
 * Return: number of words
 */
int word_count(char *str)
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[i] != ' ' && str[i]; i++)
			{
				i++;
			}
			num++;
		}
	}
	return (num);
}
