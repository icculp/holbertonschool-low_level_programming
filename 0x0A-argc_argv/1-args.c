#include <stdio.h>

/**
* main - Prints number of arguments passed to function
* @argc: Number of arguments
* @argv: Array of aruments
* Return: Success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
