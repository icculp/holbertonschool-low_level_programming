#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int n1, n2, min;

	n1 = 0;
	n2 = 0;
	min = 0;

	for (n1 = 0; n1 < 10; n1++, min++)
	{
		for (n2 = min; n2 < 10; n2++)
		{
			if (n1 != n2)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
