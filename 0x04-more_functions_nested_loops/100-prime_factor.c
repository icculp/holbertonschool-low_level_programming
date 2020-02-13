#include <stdio.h>
#include <math.h>

/**
* main - Pulls and prints primes for given number
* Return: Success
* primeFactors - Stuff
* @n: Stuff
*/

void primeFactors(long int n);

int main(void)
{
	primeFactors(612852475143);
	return (0);
}

/**
* primeFactors - Prints all primes of a given number
* @n: Number to pull prime factors out of
*/

void primeFactors(long int n)
{
	int i;

	while (n % 2 == 0)
	{
	/** printf("%d, ", 2);*/
	n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
/**		printf("%d, ", i);*/
		n = n / i;
		}
	}
	if (n > 2)
		printf("%li", n);

	printf("\n");
}
