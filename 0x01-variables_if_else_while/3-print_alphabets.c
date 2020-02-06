#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i;
	char c, n, d;

	c = 'a';
	n = '\n';
	d = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(d);
		d++;
	}

	putchar(n);

	return (0);
}
