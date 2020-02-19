#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Creates a random password with asci value sum of 2772
* Return: Success
*/


int main(void)
{
	int i, lastc = 0;
	char asci[] = "abcdefghijklmnopqrstuvwxyzBCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(0));
	while (lastc < 2772 - 122)
	{
		i = rand() % 61;
		lastc += asci[i];
		printf("%c", asci[i]);
	}
	printf("%c", 2772 - lastc);
	return (0);
}
