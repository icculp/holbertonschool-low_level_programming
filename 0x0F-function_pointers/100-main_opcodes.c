#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints opcodes of itself
* @argc: Number of args
* @argv: String of args
* Return: Success
*/

int main(int argc, char **argv)
{
	int i, numbytes;
	void *mainmen = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbytes = atoi(argv[1]);
	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < numbytes; i++)
	{
		printf("%s ", (char *)mainmen + i);
	}
	printf("\n");
	return (0);
}
