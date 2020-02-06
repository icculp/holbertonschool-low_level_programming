#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i;
	char c, n;

	c = '0';
	n = '\n';

	for (i = 0; i < 10; i++)
	{

		putchar(c);
		c++;

	}

	putchar(n);

	return (0);
}
