#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* verify - Checks if the entire string is an int or has characters
* @string: String to check
* Return: 0 on success, 1 on failure.
*/

int verify(char *string)
{
	int x = 0;
	int len = strlen(string);

	while (x < len)
	{
		if (!isdigit(*(string + x)))
			return (1);
		++x;
	}
	return (0);
}

/**
* main - Prints number of arguments passed to function
* @argc: Number of arguments
* @argv: Array of aruments
* Return: Success
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (verify(argv[i]) == 0)
		{
			sum += atoi(argv[i]);
		}
		else if (verify(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
