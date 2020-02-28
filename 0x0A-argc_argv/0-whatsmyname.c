#include <stdio.h>

/**
* main - Prints it's own name
* @argc: Number of arguments
* @argv: Array of aruments
* Return: Success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
