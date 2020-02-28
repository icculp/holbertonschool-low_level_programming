#include <stdio.h>

/**
* main - Prints number of arguments passed to function
* @argc: Number of arguments
* @argv: Array of aruments
* Return: Success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
