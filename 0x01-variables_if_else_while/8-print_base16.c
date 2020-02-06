#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i, c, n;

	n = 48;
	c = 97;

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}
	for (i = 0; i < 6; i++)
	{

		putchar(c);
		c++;

	}

	putchar('\n');

	return (0);
}
