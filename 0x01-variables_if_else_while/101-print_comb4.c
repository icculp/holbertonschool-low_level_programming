#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int n1, n2, n3, min, mod;

	n1 = 0;
	n2 = 0;
	n3 = 0;
	min = 1;
	mod = 0;

	for (n1 = 0; n1 < 10; n1++, mod++)
	{
		min = 1 + mod;
		for (n2 = 1 + mod; n2 < 10; n2++, min++)
		{
			for (n3 = min; n3 < 10; n3++)
			{
				if (n1 != n2 && n2 != n3 && n1 != n3)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(n3 + '0');
					if (n1 != 7 || n2 != 8 || n3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
