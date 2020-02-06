#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry
* Return: Success
*/

int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;

	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	else if (o == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (o < 6 && o != 0)
		printf("Last digit of %d is less than 6 and not 0\n", n);
	return (0);
}
