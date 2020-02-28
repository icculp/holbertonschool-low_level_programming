#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints number of arguments passed to function
* @argc: Number of arguments
* @argv: Array of aruments
* Return: Success
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else if (argc != 3)
		printf("Error\n");
		return (1);
	return (0);
}
