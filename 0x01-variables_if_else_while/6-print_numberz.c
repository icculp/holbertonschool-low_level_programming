#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i, c;
	char n;

	c = 48;
	n = '\n';

	for (i = 0; i < 10; i++)
	{

		putchar(c);
		c++;

	}

	putchar(n);

	return (0);
}
