#include <stdio.h>
int main()
{
	int m1 = 0, m2 = 0, n1 = 0, n2 = 0;
	for (m1 = '0'; m1 < '0' + 10; m1++)
	{
		for (m2 = '0'; m2 < '0' + 10; m2++)
		{
			for (n1 = '0'; n1 < '0' + 10; n1++)
			{
				for (n2 = '0'; n2 < '0' + 10; n2++)
				{
					if ( m1 < n1 || m2 < n2)
					{
						putchar(m1);
						putchar(m2);
						putchar(' ');
						putchar(n1);
						putchar(n2);
						if (m1 != '0' + 9 && m2 != '0' + 8 && n1 != '0' + 9 && n2 != '0' + 9)
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
}
