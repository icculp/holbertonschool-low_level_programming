#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
int n1 = 0, n2 = 0, o1 = 0, o2 = 0, min = 0;

for (n1 = 0; n1 < 10; n1++)
{
	for (n2 = 0; n2 < 10; n2++)
	{
		for (o1 = n1; o1 < 10; o1++)
		{
			if (o1 <= n1)
			{
				min = n2;
			}
			else
			{
				min = 0;
			}
			for (o2 = min; o2 < 10; o2++)
			{
				if (n1 < o1 || n2 < o2)
				{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(' ');
				putchar(o1 + '0');
				putchar(o2 + '0');
				if (n1 != 9 || n2 != 8 || o1 != 9 || o2 != 9)
				{
				putchar(',');
				putchar(' ');
				}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
