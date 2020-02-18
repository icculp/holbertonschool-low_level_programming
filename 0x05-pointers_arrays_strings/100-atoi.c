#include "holberton.h"

/**
* _atoi - Converts a string to an integer
* @s: String input to be converted
* Return: Value of integer to be retruned
*/

int _atoi(char *s)
{
	int result;
	int puiss;

	result = 0;
	puiss = 1;
	while (*s != '\0')
	{
		if ((*s) == '-')
		{
			puiss = puiss * -1;
			s++;
		}
		else if ((*s >= '0') && (*s <= '9'))
		{
			result = (result * 10) + ((*s) - '0');
			s++;
		}
		else if (result > 0 && !((*s >= '0') && (*s <= '9')))
			break;
		else
			s++;
		}
	return (result * puiss);
}
