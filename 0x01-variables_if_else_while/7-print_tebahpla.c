#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int i, c;

	c = 122;

	for (i = 0; i < 26; i++)
	{

		putchar(c);
		c--;

	}

	putchar('\n');

	return (0);
}
