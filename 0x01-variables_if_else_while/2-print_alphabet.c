#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i;
	char c, n;

	c = 'a';
	n = '\n';

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}

	putchar(n);

	return (0);
}
