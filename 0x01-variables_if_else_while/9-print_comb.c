#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i, s, c, n;

	n = 48;
	c = 44;
	s = 32;

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		if (i < 9)
		{
			putchar(c);
			putchar(s);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
