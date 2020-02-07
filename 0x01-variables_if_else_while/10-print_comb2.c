#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int h, i, j, s, c, n1, n2;

	n1 = 48;
	c = 44;
	s = 32;

	for (i = 0; i < 100; i++)
	{
		for (h = 0; h < 10; h++)
		{
		n2 = 48;
			for (j = 0; j < 10; j++)
			{
			putchar(n1);
			putchar(n2);
			i++;
			n2++;
				if (i < 100)
				{
				putchar(c);
				putchar(s);
				}
			}
		n1++;
		}
	}

	putchar('\n');
	return (0);
}
