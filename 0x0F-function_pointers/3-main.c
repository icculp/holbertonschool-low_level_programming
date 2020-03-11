#include "3-calc.h"

/**
* main - Performs operation corresponding to math oeprator
* @argc: Number of args
* @argv: Strings of args
* Return: Result of proper operation, or exit if fail
*/

int main(int argc, char **argv)
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0  &&
	((!(strcmp(argv[2], "/"))) || (!(strcmp(argv[2], "%")))))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*operator)(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
