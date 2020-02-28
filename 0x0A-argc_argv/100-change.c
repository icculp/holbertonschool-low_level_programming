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
	int c;
	int i = 0, change = 0, remainder, count = 0;
	int cents[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		c = atoi(argv[1]);
		remainder = c;
		if (c <= 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; i++)
		{
			if (remainder >= cents[i])
			{
				change = remainder / cents[i];
				remainder = remainder % cents[i];
				count += change;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
